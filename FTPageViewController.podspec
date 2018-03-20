#
# Be sure to run `pod lib lint FTPageViewController.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'FTPageViewController'
  s.version          = '0.3.0'
  s.summary          = 'PageViewController with custom transitions.'


  s.homepage         = 'https://github.com/farabis4m/FTPageController'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Thahir Maheen' => 'thahir@farabi.ae' }
  s.source           = { :git => 'https://github.com/farabis4m/FTPageController.git', :tag => s.version.to_s }

  s.ios.deployment_target = '8.0'

  s.source_files = 'FTPageViewController/**/*.{h,m}'
end
