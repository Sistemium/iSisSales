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
    pod 'Firebase/Analytics', '~> 10.11.0'
    pod 'Firebase/Crashlytics', '~> 10.11.0'

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
        installer.generated_projects.each do |project|
          project.targets.each do |target|
              target.build_configurations.each do |config|
                  config.build_settings["DEVELOPMENT_TEAM"] = "DP58H3X45C"
               end
          end
        end
        installer.pods_project.targets.each do |target|
            target.build_configurations.each do |config|
              if config.base_configuration_reference
                xcconfig_path = config.base_configuration_reference.real_path
                xcconfig = File.read(xcconfig_path)
                xcconfig_mod = xcconfig.gsub(/DT_TOOLCHAIN_DIR/, "TOOLCHAIN_DIR")
                File.open(xcconfig_path, "w") { |file| file << xcconfig_mod }
              end
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