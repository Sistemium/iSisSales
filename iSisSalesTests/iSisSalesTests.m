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
    
    [self runSQLFilterTest:predicate expectation:@"(date = '2017-01-01')"];
    
    predicate = [NSPredicate predicateWithFormat:@"type IN %@", @[@"error", @"important"]];
    
    [self runSQLFilterTest:predicate expectation:@"(type IN ('error', 'important'))"];
    
}

- (void)runSQLFilterTest:(NSPredicate *)predicate expectation:(NSString*)expectation {

    XCTAssertEqualObjects([STMPredicateToSQL.sharedInstance SQLFilterForPredicate:predicate], expectation);
    
}

@end
