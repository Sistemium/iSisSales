//
//  STMVisitQuestionDataType+CoreDataProperties.h
//  iSisSales
//
//  Created by Maxim Grigoriev on 13/06/16.
//  Copyright © 2016 Sistemium UAB. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "STMVisitQuestionDataType.h"

NS_ASSUME_NONNULL_BEGIN

@interface STMVisitQuestionDataType (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *code;
@property (nullable, nonatomic, retain) NSString *commentText;
@property (nullable, nonatomic, retain) NSDate *deviceCts;
@property (nullable, nonatomic, retain) NSDate *deviceTs;
@property (nullable, nonatomic, retain) NSNumber *id;
@property (nullable, nonatomic, retain) NSNumber *isFantom;
@property (nullable, nonatomic, retain) NSDate *lts;
@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSData *ownerXid;
@property (nullable, nonatomic, retain) NSString *source;
@property (nullable, nonatomic, retain) NSString *target;
@property (nullable, nonatomic, retain) NSData *xid;
@property (nullable, nonatomic, retain) NSSet<STMVisitQuestion *> *visitQuestions;

@end

@interface STMVisitQuestionDataType (CoreDataGeneratedAccessors)

- (void)addVisitQuestionsObject:(STMVisitQuestion *)value;
- (void)removeVisitQuestionsObject:(STMVisitQuestion *)value;
- (void)addVisitQuestions:(NSSet<STMVisitQuestion *> *)values;
- (void)removeVisitQuestions:(NSSet<STMVisitQuestion *> *)values;

@end

NS_ASSUME_NONNULL_END
