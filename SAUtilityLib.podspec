Pod::Spec.new do |s|
  s.name         = 'SAUtilityLib'
  s.version      = '0.1'
  s.summary      = 'SAUtilityLib'
  s.homepage     = 'https://github.com/piictlly/SAUtilityLib'
  s.license       = { :type => 'MIT', :file => 'LICENSE' }
  s.authors       = { 'piictlly' => 'laoyong@weego.me' }
  s.source       = { :git => 'https://github.com/piictlly/SAUtilityLib.git', :tag => s.version.to_s }
  s.platform     = :ios, '6.1'
  s.requires_arc = true
  s.source_files = 'SAUtilityLib/*.{h,m}'
  s.frameworks = 'QuartzCore', 'UIKit'
end
