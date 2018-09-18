platform :ios, '9.0'
use_frameworks!

target 'iSisSales' do
    pod 'KiteJSONValidator', '~> 0.2.3'
    pod 'Reachability', '~> 3.2'
    pod 'Crashlytics', '~> 3.10.7'
    pod 'Fabric', '~> 1.7.11'
    pod 'JNKeychain', '~> 0.1.4'
    pod 'ScanAPI', :path => '../ScanApiSDK'
    pod 'Socket.IO-Client-Swift', :path => '../../socket.io-client-swift'
    pod 'FMDB', '~> 2.7.2'
    pod 'PromiseKit', '~> 4.4'
    pod 'ZebraIos', :path => '../ZebraIos'
    pod 'PMAlertController', '~> 3.4.0'

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
#            config.build_settings['ONLY_ACTIVE_ARCH'] = 'YES'
#            config.build_settings['SWIFT_VERSION'] = '3.0'
        end
    end
end
