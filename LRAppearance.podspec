Pod::Spec.new do |s|
  s.name             = 'LRAppearance'
  s.version          = '0.1.2'
  s.summary          = 'LRAppearance. UISize'
  s.homepage         = 'https://github.com/huawt/LRAppearance'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'huawt' => 'ghost263sky@163.com' }
  s.source           = { :git => 'https://github.com/huawt/LRAppearance.git', :tag => s.version.to_s }
  s.ios.deployment_target = '9.0'
  s.source_files = 'LRAppearance/Classes/**/*'
end
