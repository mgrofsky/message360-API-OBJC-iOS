Pod::Spec.new do |s|
  s.name             = "YtelAPIV3"
  s.version          = "3.1.2"
  s.summary          = <<-SUMMARY
  <p>Ytel API version 3</p>

SUMMARY
  s.homepage         = "http://apimatic.io"
  s.license          = 'MIT'
  s.author           = { "APIMATIC" => "support@apimatic.io" }

  s.requires_arc     = true
  s.ios.deployment_target = '6.0'
  s.osx.deployment_target = '10.8'
  s.source           = {:git => ''}

  s.source_files     = 'YtelAPIV3/**/*.{h,m}'

  s.dependency       'Unirest-APIMATIC'
  s.dependency       'JSONModel'
  s.dependency       'ISO8601DateFormatter', '~> 0.7'
end
