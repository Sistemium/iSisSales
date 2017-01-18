//
//  iSisSalesTests.m
//  iSisSalesTests
//
//  Created by Maxim Grigoriev on 22/05/16.
//  Copyright © 2016 Sistemium UAB. All rights reserved.
//

#import <XCTest/XCTest.h>
#import "STMPredicateToSQL.h"

#define STMAssertSQLFilter(predicate, expectation, ...) \
    XCTAssertEqualObjects([STMPredicateToSQL.sharedInstance SQLFilterForPredicate:predicate], expectation, __VA_ARGS__)

@interface iSisSalesTests : XCTestCase

@end

@implementation iSisSalesTests

- (void)setUp {
    [super setUp];
    // Put setup code here. This method is called before the invocation of each test method in the class.
}

- (void)tearDown {
    // Put teardown code here. This method is called after the invocation of each test method in the class.
    [super tearDown];
}

- (void)testSQLFilters {
    
    NSPredicate *predicate;
    
    predicate = [NSPredicate predicateWithFormat:@"date == %@", @"2017-01-01"];
    
    STMAssertSQLFilter(predicate, @"(date = '2017-01-01')");
    
    predicate = [NSPredicate predicateWithFormat:@"type IN %@", @[@"error", @"important"]];
    
    STMAssertSQLFilter(predicate, @"(type IN ('error','important'))");

    predicate = [NSPredicate predicateWithFormat:@"SELF.deviceTs > SELF.lts"];
    
    STMAssertSQLFilter(predicate, @"(deviceTs > lts)");
    
    predicate = [NSPredicate predicateWithFormat:@"deviceTs > lts"];
    
    STMAssertSQLFilter(predicate, @"(deviceTs > lts)");


}


@end
