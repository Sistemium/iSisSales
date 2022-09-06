platform :ios, '11.0'
use_frameworks!

flutter_application_path = '../flutter_onboarding'
load File.join(flutter_application_path, '.ios', 'Flutter', 'podhelper.rb')

target 'iSisSales' do
    pod 'KiteJSONValidator', '~> 0.2.3'
    pod 'Reachability', '~> 3.2'
    pod 'JNKeychain', '~> 0.1.4'
    pod 'Socket.IO-Client-Swift', :path => '../socket.io-client-swift'
    pod 'FMDB', '~> 2.7.5'
    pod 'PromiseKit', '~> 6.13'
    pod 'ZebraIos', :path => '../ZebraIos'
    pod 'PMAlertController', '~> 3.5.0'
    pod 'Firebase/Analytics', '~> 6.34.0'
    pod 'Firebase/Crashlytics', '~> 6.34.0'

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
    
    install_all_flutter_pods(flutter_application_path)
    
    post_install do |installer|
      installer.pods_project.targets.each do |target|
          target.build_configurations.each do |config|
            config.build_settings['GCC_PREPROCESSOR_DEFINITIONS'] ||= [
                '$(inherited)',
                'PERMISSION_LOCATION=1',
                'PERMISSION_NOTIFICATIONS=1',
              ]
            end
      end
      installer.pods_project.build_configurations.each do |config|
        config.build_settings["EXCLUDED_ARCHS[sdk=iphonesimulator*]"] = ""
      end
      flutter_post_install(installer) if defined?(flutter_post_install)
    end

end