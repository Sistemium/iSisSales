//
//  iSisSalesUITests.m
//  iSisSalesUITests
//
//  Created by Maxim Grigoriev on 22/05/16.
//  Copyright © 2016 Sistemium UAB. All rights reserved.
//

#import <XCTest/XCTest.h>
#import "STMWorkflowController.h"
#import "STMWorkflowEditablesVC.h"

@interface iSisSalesUITests : XCTestCase

@end

@implementation iSisSalesUITests

- (void)setUp {
    [super setUp];
    
    // Put setup code here. This method is called before the invocation of each test method in the class.
    
    // In UI tests it is usually best to stop immediately when a failure occurs.
    self.continueAfterFailure = NO;
    // UI tests must launch the application that they test. Doing this in setup will make sure it happens for each test method.
    [[[XCUIApplication alloc] init] launch];
//    UIStoryboard *storyboard = [UIStoryboard storyboardWithName:@"STMMessages" bundle:nil];
//    UIViewController *controller = [storyboard instantiateInitialViewController];
//    UIApplication.sharedApplication.keyWindow.rootViewController = controller;
}

- (void)tearDown {
    // Put teardown code here. This method is called after the invocation of each test method in the class.
    [super tearDown];
}

- (void)testExample {
    
    UIViewController *vc = [UIApplication sharedApplication].keyWindow.rootViewController;
    
    NSString *processing = @"processing";
    
    NSString *workflow = @"{\"routing\": {\"label\": \"Раскладка\",\"desc\": \"Расставьте точки по порядку отгрузки\",\"cls\": \"blue\",\"messageCls\": \"blue\",\"editable\": true,\"from\": [\"rejectOrder\",\"finished\"]},\"confirmOrder\": {\"label\": \"Упорядочено\",\"desc\": \"Водитель определил порядок объезда\",\"cls\": \"blue\",\"messageCls\": \"blue\",\"from\": [\"routing\"],\"editables\": [\"commentText\"]},\"started\": {\"label\": \"Выполнение\",\"desc\": \"Водитель выполняет задания маршрута\",\"cls\": \"green\",\"messageCls\": \"blue\",\"from\": [\"confirmOrder\"],\"editable\": true},\"finished\": {\"label\": \"Завершено\",\"desc\": \"Водитель завершил маршрут\",\"from\": [\"started\"]},\"rejectOrder\": {\"label\": \"Отказаться\",\"desc\": \"Водитель отказался принять задания\",\"cls\": \"red\",\"messageCls\": \"blue\",\"from\": [\"routing\"],\"editables\": [\"commentText\"]}}";

    STMWorkflowAC *workflowActionSheet =

    [STMWorkflowController workflowActionSheetForProcessing:processing
                                                 inWorkflow:workflow
                                                withHandler:^(UIAlertAction *action) {
                                                    
                                                    NSDictionary *result = [STMWorkflowController workflowActionSheetForProcessing:workflowActionSheet.processing
                                                                                                          didSelectButtonWithIndex:0
                                                                                                                        inWorkflow:workflowActionSheet.workflow];
                                                    
                                                    NSString *nextProcessing = result[@"nextProcessing"];
                                                    
                                                    if (nextProcessing) {
                                                        
                                                        if ([result[@"editableProperties"] isKindOfClass:[NSArray class]]) {
                                                            
                                                            STMWorkflowEditablesVC *editablesVC = [[STMWorkflowEditablesVC alloc] init];
                                                            
                                                            editablesVC.workflow = workflowActionSheet.workflow;
                                                            editablesVC.toProcessing = nextProcessing;
                                                            editablesVC.editableFields = result[@"editableProperties"];
//                                                            editablesVC.parent = self;
                                                            
                                                            [vc presentViewController:editablesVC animated:YES completion:^{
                                                                
                                                            }];
                                                            
                                                        } else {
                                                            
//                                                            [self updateAndSyncAndReloadWorkflowSelectedMessage];
                                                            
                                                        }
                                                        
                                                    }
                                                }];
        [vc presentViewController:workflowActionSheet animated:YES completion:nil];
}

@end
