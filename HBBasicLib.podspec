
Pod::Spec.new do |spec|

  spec.name         = "HBBasicLib"
  spec.version      = "1.0.4"
  spec.summary      = "HBBasic iOS SDK"

  spec.description  = "iOS library for HBBasic"

  spec.homepage     = "https://github.com/hepburnalex/HBBasicLib"

  spec.license      = "MIT"

  spec.author       = { "hepburn" => "hepburn2019@163.com" }

  spec.platform     = :ios
  spec.ios.deployment_target = "9.0"

  spec.source       = { :git => "https://github.com/hepburnalex/HBBasicLib.git", :tag => "#{spec.version}" }


  spec.vendored_frameworks = "HBBasicLib/HBBasicLib.framework"
  spec.requires_arc = true
  spec.static_framework = true

  spec.dependency "Masonry"
  spec.dependency "MJRefresh"
  spec.dependency "IQKeyboardManager"
  spec.dependency "MBProgressHUD"
end
