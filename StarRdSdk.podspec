#
# Be sure to run `pod lib lint StarRdSdk.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'StarRdSdk'
  s.version          = '1.2.6'
  s.summary          = 'A short description of StarRdSdk.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/mcllzx/StarRdSDK'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { '麦芽' => 'maiya@ecook.cn' }
  s.source           = { :git => 'https://github.com/mcllzx/StarRdSDK', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'
  
 
  s.ios.deployment_target = '9.0'

  s.vendored_frameworks = "Framework/StarRdSdk.framework"
  s.resource = "Framework/StarRdSdkImages.bundle"
  s.libraries = 'c++'

  s.public_header_files = 'Framework/StarRdSdk/StarRdSdk.h'
  s.frameworks = 'UIKit', 'CFNetwork' , 'AVFoundation', 'MediaPlayer'
  
  s.dependency 'AFNetworking','~>4.0.1'
  s.dependency 'Masonry', '~>1.1.0'
  s.dependency 'MJRefresh', '~>3.4.3'
  s.dependency 'MBProgressHUD', '~>1.2.0'
  s.dependency 'YYCache', '~>1.0.4'
  s.dependency 'YYImage', '~>1.0.4'
  s.dependency 'YYModel', '~>1.0.4'
  s.dependency 'YYText', '~>1.0.7'
  s.dependency 'YYWebImage', '~>1.0.5'
  s.dependency 'XCSADBridge', '~>1.2.5'
  
  s.dependency 'XATcodeSDK'
  s.dependency 'WCDB', '~>1.0.7.5'
  s.dependency 'JXCategoryView','~>1.4.0'
  
  s.static_framework = true
  
  
end
