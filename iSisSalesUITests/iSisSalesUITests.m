//
//  iSisSalesUITests.m
//  iSisSalesUITests
//
//  Created by Maxim Grigoriev on 22/05/16.
//  Copyright © 2016 Sistemium UAB. All rights reserved.
//

#import <XCTest/XCTest.h>

@interface iSisSalesUITests : XCTestCase
@property (nonatomic) XCUIApplication *app;
@end

@implementation iSisSalesUITests

- (void)setUp {
    [super setUp];
}

- (void)tearDown {
    // Put teardown code here. This method is called after the invocation of each test method in the class.
    [super tearDown];
}


- (void)testWorkflow{
    
    self.app = [[XCUIApplication alloc] init];
    self.app.launchArguments = @[ @"UI-TESTING", @"WorkflowTest" ];
    [self.app launch];
    
    XCTAssertEqual(self.app.sheets.count, 1);

    [self.app.sheets.buttons[@"\u0423\u043f\u043e\u0440\u044f\u0434\u043e\u0447\u0435\u043d\u043e \u2026"] tap];
    
    XCTAssertEqual(self.app.sheets.count, 0);
    
    
}

//- (void)testWeb{
//    
//    self.app = [[XCUIApplication alloc] init];
//    [self.app launch];
//    [self.app.tabBars.buttons[@"ISD"] tap];
//    
//    XCUIElement *mainMenu = self.app.staticTexts[@"Главное меню"];
//    NSPredicate *exists = [NSPredicate predicateWithFormat:@"exists == 1"];
//    [self expectationForPredicate:exists evaluatedWithObject:mainMenu handler:nil];
//    
//    [self waitForExpectationsWithTimeout:5 handler:^(NSError * _Nullable error) {
//        
//    }];
//    
//}

@end
