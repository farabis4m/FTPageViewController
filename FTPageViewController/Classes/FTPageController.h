//
//  FTPageController.h
//
//  Created by Nick Savula on 10/3/16.
//  Copyright © 2016 Nick Savula. All rights reserved.
//

@import UIKit;

#import "FTPageAnimator.h"

@class FTPageController;

typedef NS_ENUM(NSUInteger, FTPageControllerTransition) {
    FTPageControllerTransitionCube
};

@protocol FTPageControllerDataSource <NSObject>

@required
- (__kindof UIViewController *)pageController:(FTPageController *)pageController viewControllerBeforeViewController:(__kindof UIViewController *)viewController;
- (__kindof UIViewController *)pageController:(FTPageController *)pageController viewControllerAfterViewController:(__kindof UIViewController *)viewController;

@end

@protocol FTPageControllerDelegate <NSObject>

@optional
- (void)pageController:(FTPageController *)pageController didDisplayController:(__kindof UIViewController *)viewController;

@end

@interface FTPageController : UIViewController

@property (nonatomic, strong) __kindof FTPageAnimator *pageAnimator;
@property (nonatomic, assign) CGFloat animationDuration;
@property (nonatomic, readonly) __kindof UIViewController *displayedController;

@property (nonatomic, weak) id<FTPageControllerDataSource> dataSource;
@property (nonatomic, weak) id<FTPageControllerDelegate> delegate;


- (void)displayViewController:(__kindof UIViewController *)viewController;

@end
