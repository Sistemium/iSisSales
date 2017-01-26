platform :ios, '8.0'
use_frameworks!

target 'iSisSales' do
    pod 'KiteJSONValidator', '~> 0.2.3'
    pod 'Reachability', '~> 3.2'
    pod 'Crashlytics', '~> 3.8.0'
    pod 'Fabric', '~> 1.6.10'
    pod 'JNKeychain', '~> 0.1.4'
    pod 'ScanAPI', :path => '../ScanApiSDK'
    pod 'Socket.IO-Client-Swift', '~> 8.2.0'
    pod 'FMDB', '~> 2.6.2’
    pod 'PromiseKit', '~> 4.0'

    target 'iSisSalesTests' do
        inherit! :search_paths
    end

end


post_install do |installer|
    installer.pods_project.targets.each do |target|
        target.build_configurations.each do |config|
            config.build_settings['ONLY_ACTIVE_ARCH'] = 'NO'
            config.build_settings['SWIFT_VERSION'] = '3.0'
        end
    end
end
