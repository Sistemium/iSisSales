//
//  STMOutlet+CoreDataProperties.h
//  iSisSales
//
//  Created by Maxim Grigoriev on 05/12/16.
//  Copyright © 2016 Sistemium UAB. All rights reserved.
//

#import "STMOutlet+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface STMOutlet (CoreDataProperties)

+ (NSFetchRequest<STMOutlet *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *address;
@property (nullable, nonatomic, copy) NSString *commentText;
@property (nullable, nonatomic, copy) NSDate *deviceCts;
@property (nullable, nonatomic, copy) NSDate *deviceTs;
@property (nullable, nonatomic, copy) NSNumber *id;
@property (nullable, nonatomic, copy) NSNumber *isActive;
@property (nullable, nonatomic, copy) NSNumber *isFantom;
@property (nullable, nonatomic, copy) NSDate *lts;
@property (nullable, nonatomic, copy) NSString *name;
@property (nullable, nonatomic, retain) NSData *ownerXid;
@property (nullable, nonatomic, copy) NSString *shortName;
@property (nullable, nonatomic, copy) NSString *source;
@property (nullable, nonatomic, copy) NSString *target;
@property (nullable, nonatomic, retain) NSData *xid;
@property (nullable, nonatomic, retain) STMLocation *location;
@property (nullable, nonatomic, retain) NSSet<STMOutletSalesmanContract *> *outletSalesmanContracts;
@property (nullable, nonatomic, retain) STMPartner *partner;
@property (nullable, nonatomic, retain) NSSet<STMOutletPhoto *> *photos;
@property (nullable, nonatomic, retain) NSSet<STMVisit *> *visits;
@property (nullable, nonatomic, retain) NSSet<STMSaleOrder *> *saleOrders;

@end

@interface STMOutlet (CoreDataGeneratedAccessors)

- (void)addOutletSalesmanContractsObject:(STMOutletSalesmanContract *)value;
- (void)removeOutletSalesmanContractsObject:(STMOutletSalesmanContract *)value;
- (void)addOutletSalesmanContracts:(NSSet<STMOutletSalesmanContract *> *)values;
- (void)removeOutletSalesmanContracts:(NSSet<STMOutletSalesmanContract *> *)values;

- (void)addPhotosObject:(STMOutletPhoto *)value;
- (void)removePhotosObject:(STMOutletPhoto *)value;
- (void)addPhotos:(NSSet<STMOutletPhoto *> *)values;
- (void)removePhotos:(NSSet<STMOutletPhoto *> *)values;

- (void)addVisitsObject:(STMVisit *)value;
- (void)removeVisitsObject:(STMVisit *)value;
- (void)addVisits:(NSSet<STMVisit *> *)values;
- (void)removeVisits:(NSSet<STMVisit *> *)values;

- (void)addSaleOrdersObject:(STMSaleOrder *)value;
- (void)removeSaleOrdersObject:(STMSaleOrder *)value;
- (void)addSaleOrders:(NSSet<STMSaleOrder *> *)values;
- (void)removeSaleOrders:(NSSet<STMSaleOrder *> *)values;

@end

NS_ASSUME_NONNULL_END
