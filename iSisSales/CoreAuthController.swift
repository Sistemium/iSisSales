//
//  CoreAuthController.swift
//  iSisSales
//
//  Created by Edgar Jan Vuicik on 2021-08-24.
//  Copyright © 2021 Sistemium UAB. All rights reserved.
//

class CoreAuthController:NSObject{

    // old obc code uses observer pattern. It is hard to rewrite it, better to call this resolve from observers
    static private var resolver:Resolver<Void>? = nil
    
    @objc
    static func reject(error:String){
        resolver?.reject(NSError(domain: "", code: 0, userInfo: ["error": error]))
    }
    
    @objc
    static func sendPhoneNumber(phoneNumber:String) {
        
        var _phoneNumber = phoneNumber;
        
        if (_phoneNumber.starts(with: "+7")){
            _phoneNumber = _phoneNumber.replacingOccurrences(of: "+7", with: "8")
        }
        
        _phoneNumber = _phoneNumber.replacingOccurrences(of: " ", with: "")
        
        _phoneNumber = _phoneNumber.replacingOccurrences(of: "-", with: "")
                
        STMCoreAuthController.shared().sendPhoneNumber(_phoneNumber)
        
    }
    
    @objc
    static func sendSMSCode(SMSCode:String) {
                
        Promise<Void> { _promise in
                        
            resolver = _promise
            
            STMCoreAuthController.shared().sendSMSCode(SMSCode)
                        
        }
        
    }
    
    @objc
    static func demoAuth(){
        
        STMCoreAuthController.shared().phoneNumber = "+7 DEMO 000"
        STMCoreAuthController.shared().accessToken = "DEMO TOKEN"
        STMCoreAuthController.shared().accountOrg = "DEMO ORG"
        STMCoreAuthController.shared().socketURL = "DEMO SOCKET"
        STMCoreAuthController.shared().entityResource = "DEMO SOCKET"
        STMCoreAuthController.shared().userID = "DEMO USER ID"
        STMCoreAuthController.shared().userName = "DEMO USER"
        STMCoreAuthController.shared().isDemo = true
        if let path = Bundle.main.path(forResource: "DEMO/roles-DEMO", ofType: "json") {
            do {
                  let data = try Data(contentsOf: URL(fileURLWithPath: path), options: .mappedIfSafe)
                  let jsonResult = try JSONSerialization.jsonObject(with: data, options: .mutableLeaves)
                  if let jsonResult = jsonResult as? Dictionary<String, AnyObject> {
                      STMCoreAuthController.shared().processRoles(
                        jsonResult
                      )
                  }
              } catch let error {
                  print(error)
              }
        }
    }
    
}