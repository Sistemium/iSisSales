//
//  STMVisit+CoreDataProperties.h
//  iSisSales
//
//  Created by Maxim Grigoriev on 11/06/16.
//  Copyright © 2016 Sistemium UAB. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "STMVisit.h"

NS_ASSUME_NONNULL_BEGIN

@interface STMVisit (CoreDataProperties)

@property (nullable, nonatomic, retain) NSDate *date;
@property (nullable, nonatomic, retain) NSDate *deviceCts;
@property (nullable, nonatomic, retain) NSDate *deviceTs;
@property (nullable, nonatomic, retain) NSNumber *id;
@property (nullable, nonatomic, retain) NSNumber *isFantom;
@property (nullable, nonatomic, retain) NSDate *lts;
@property (nullable, nonatomic, retain) NSData *xid;
@property (nullable, nonatomic, retain) STMOutlet *outlet;
@property (nullable, nonatomic, retain) STMSalesman *salesman;
@property (nullable, nonatomic, retain) NSSet<STMVisitAnswer *> *visitAnswers;
@property (nullable, nonatomic, retain) STMLocation *checkInLocation;
@property (nullable, nonatomic, retain) STMLocation *checkOutLocation;

@end

@interface STMVisit (CoreDataGeneratedAccessors)

- (void)addVisitAnswersObject:(STMVisitAnswer *)value;
- (void)removeVisitAnswersObject:(STMVisitAnswer *)value;
- (void)addVisitAnswers:(NSSet<STMVisitAnswer *> *)values;
- (void)removeVisitAnswers:(NSSet<STMVisitAnswer *> *)values;

@end

NS_ASSUME_NONNULL_END
