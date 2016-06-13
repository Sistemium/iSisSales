//
//  STMSalesman+CoreDataProperties.h
//  iSisSales
//
//  Created by Maxim Grigoriev on 13/06/16.
//  Copyright © 2016 Sistemium UAB. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "STMSalesman.h"

NS_ASSUME_NONNULL_BEGIN

@interface STMSalesman (CoreDataProperties)

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
@property (nullable, nonatomic, retain) NSSet<STMVisit *> *visits;

@end

@interface STMSalesman (CoreDataGeneratedAccessors)

- (void)addVisitsObject:(STMVisit *)value;
- (void)removeVisitsObject:(STMVisit *)value;
- (void)addVisits:(NSSet<STMVisit *> *)values;
- (void)removeVisits:(NSSet<STMVisit *> *)values;

@end

NS_ASSUME_NONNULL_END
