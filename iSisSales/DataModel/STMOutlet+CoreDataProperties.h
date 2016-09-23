//
//  STMOutlet+CoreDataProperties.h
//  iSisSales
//
//  Created by Maxim Grigoriev on 02/08/16.
//  Copyright © 2016 Sistemium UAB. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "STMOutlet.h"

NS_ASSUME_NONNULL_BEGIN

@interface STMOutlet (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *address;
@property (nullable, nonatomic, retain) NSString *commentText;
@property (nullable, nonatomic, retain) NSDate *deviceCts;
@property (nullable, nonatomic, retain) NSDate *deviceTs;
@property (nullable, nonatomic, retain) NSNumber *id;
@property (nullable, nonatomic, retain) NSNumber *isActive;
@property (nullable, nonatomic, retain) NSNumber *isFantom;
@property (nullable, nonatomic, retain) NSDate *lts;
@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSData *ownerXid;
@property (nullable, nonatomic, retain) NSString *shortName;
@property (nullable, nonatomic, retain) NSString *source;
@property (nullable, nonatomic, retain) NSString *target;
@property (nullable, nonatomic, retain) NSData *xid;
@property (nullable, nonatomic, retain) NSSet<STMOutletSalesmanContract *> *outletSalesmanContracts;
@property (nullable, nonatomic, retain) STMPartner *partner;
@property (nullable, nonatomic, retain) NSSet<STMVisit *> *visits;
@property (nullable, nonatomic, retain) NSSet<STMOutletPhoto *> *photos;
@property (nullable, nonatomic, retain) STMLocation *location;

@end

@interface STMOutlet (CoreDataGeneratedAccessors)

- (void)addOutletSalesmanContractsObject:(STMOutletSalesmanContract *)value;
- (void)removeOutletSalesmanContractsObject:(STMOutletSalesmanContract *)value;
- (void)addOutletSalesmanContracts:(NSSet<STMOutletSalesmanContract *> *)values;
- (void)removeOutletSalesmanContracts:(NSSet<STMOutletSalesmanContract *> *)values;

- (void)addVisitsObject:(STMVisit *)value;
- (void)removeVisitsObject:(STMVisit *)value;
- (void)addVisits:(NSSet<STMVisit *> *)values;
- (void)removeVisits:(NSSet<STMVisit *> *)values;

- (void)addPhotosObject:(STMOutletPhoto *)value;
- (void)removePhotosObject:(STMOutletPhoto *)value;
- (void)addPhotos:(NSSet<STMOutletPhoto *> *)values;
- (void)removePhotos:(NSSet<STMOutletPhoto *> *)values;

@end

NS_ASSUME_NONNULL_END
