//
//  UITestSetup.m
//  iSisSales
//
//  Created by Edgar Jan Vuicik on 06/03/2017.
//  Copyright © 2017 Sistemium UAB. All rights reserved.
//

#import "UITestSetup.h"
#import "STMWorkflowController.h"
#import "STMWorkflowEditablesVC.h"

@implementation UITestSetup

+(void)workflowSetup{

    UIViewController *vc = [UIApplication sharedApplication].keyWindow.rootViewController;
    
    NSString *processing = @"routing";
    
    NSString *workflow = @"{\"routing\": {\"label\": \"Раскладка\",\"desc\": \"Расставьте точки по порядку отгрузки\",\"cls\": \"blue\",\"messageCls\": \"blue\",\"editable\": true,\"from\": [\"rejectOrder\",\"finished\"]},\"confirmOrder\": {\"label\": \"Упорядочено\",\"desc\": \"Водитель определил порядок объезда\",\"cls\": \"blue\",\"messageCls\": \"blue\",\"from\": [\"routing\"],\"editables\": [\"commentText\"]},\"started\": {\"label\": \"Выполнение\",\"desc\": \"Водитель выполняет задания маршрута\",\"cls\": \"green\",\"messageCls\": \"blue\",\"from\": [\"confirmOrder\"],\"editable\": true},\"finished\": {\"label\": \"Завершено\",\"desc\": \"Водитель завершил маршрут\",\"from\": [\"started\"]},\"rejectOrder\": {\"label\": \"Отказаться\",\"desc\": \"Водитель отказался принять задания\",\"cls\": \"red\",\"messageCls\": \"blue\",\"from\": [\"routing\"],\"editables\": [\"commentText\"]}}";
    
    STMWorkflowAC *workflowActionSheet = [STMWorkflowController workflowActionSheetForProcessing:processing
                                                                                      inWorkflow:workflow
                                                                                     withHandler:^(UIAlertAction *action) {
                                                                                         
                                                                                         
                                                                                     }];
    
    workflowActionSheet.popoverPresentationController.sourceView = vc.view;
    workflowActionSheet.popoverPresentationController.sourceRect = vc.view.bounds;
    workflowActionSheet.popoverPresentationController.permittedArrowDirections = 0;
    
    [vc presentViewController:workflowActionSheet animated:YES completion:nil];
    
}

@end
