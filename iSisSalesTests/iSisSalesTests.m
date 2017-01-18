//
//  iSisSalesTests.m
//  iSisSalesTests
//
//  Created by Maxim Grigoriev on 22/05/16.
//  Copyright © 2016 Sistemium UAB. All rights reserved.
//

#import <XCTest/XCTest.h>
#import "STMPredicateToSQL.h"

@interface iSisSalesTests : XCTestCase

@end

@implementation iSisSalesTests

STMPredicateToSQL *predicator;

- (void)setUp {
    [super setUp];
    // Put setup code here. This method is called before the invocation of each test method in the class.
    
    predicator = STMPredicateToSQL.sharedInstance;
}

- (void)tearDown {
    // Put teardown code here. This method is called after the invocation of each test method in the class.
    [super tearDown];
}

- (void)testSQLFilters {
    // This is an example of a functional test case.
    // Use XCTAssert and related functions to verify your tests produce the correct results.
    
    NSString *sql = [predicator SQLFilterForPredicate:[NSPredicate predicateWithFormat:@"date == %@", @"2017-01-01"]];
    
    XCTAssertEqualObjects(@"(date = '2017-01-01')", sql, @"Failed predicate '='");
    
}


@end
