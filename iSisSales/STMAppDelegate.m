//
//  STMAppDelegate.m
//  iSistemium
//
//  Created by Maxim Grigoriev on 01/06/14.
//  Copyright (c) 2014 Sistemium UAB. All rights reserved.
//

#import "STMAppDelegate.h"

#import "STMAuthController.h"
#import "STMSessionManager.h"


@implementation STMAppDelegate

//TODO: may be we have to rename project from iSisSales back to iSistemium for example (or create new and move all files to it)
//      different configurations gives us needed app names/icons like iSisSales, iSisWarehouse, etc.
//      also we have to consider to get rid of iSisCore and merge separated files/dirs/classes to one

- (void)startAuthController {
    [STMAuthController authController];
}

- (STMCoreSessionManager *)sessionManager {
    return [STMSessionManager sharedManager];
}


#pragma mark - Crashlytics

- (void)startCrashlytics {
    
//    [[Crashlytics sharedInstance] setDebugMode:YES];
    
    [Fabric with:@[CrashlyticsKit]];
    
    [[Crashlytics sharedInstance] setObjectValue:[[UIDevice currentDevice] name]
                                          forKey:@"deviceName"];
    [[Crashlytics sharedInstance] setObjectValue:[STMFunctions devicePlatform]
                                          forKey:@"devicePlatform"];
    [[Crashlytics sharedInstance] setObjectValue:[STMClientDataController deviceUUID]
                                          forKey:@"deviceUUID"];
    [[Crashlytics sharedInstance] setObjectValue:[STMAuthController authController].userID
                                          forKey:@"userID"];
    [[Crashlytics sharedInstance] setObjectValue:[STMAuthController authController].userName
                                          forKey:@"userName"];
    [[Crashlytics sharedInstance] setObjectValue:[STMAuthController authController].phoneNumber
                                          forKey:@"phoneNumber"];
    
}


@end
