platform :ios, '9.0'
use_frameworks!

target 'iSisSales' do
    pod 'KiteJSONValidator', '~> 0.2.3'
    pod 'Reachability', '~> 3.2'
    pod 'Crashlytics', '~> 3.9.3'
    pod 'Fabric', '~> 1.7.2'
    pod 'JNKeychain', '~> 0.1.4'
    pod 'ScanAPI', :path => '../ScanApiSDK'
    pod 'Socket.IO-Client-Swift', '~> 8.3.3'
    pod 'FMDB', '~> 2.7.2'
    pod 'PromiseKit', '~> 4.4'

    target 'iSisSalesTests' do
        inherit! :search_paths
    end
    
    target 'iSisSalesOfLibsTests' do
        inherit! :search_paths
    end

    target 'iSisSalesTestsInMemory' do
        inherit! :search_paths
    end

    target 'iSisSalesSpeedTests' do
        inherit! :search_paths
    end

    target 'iSisSalesUITests' do
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
