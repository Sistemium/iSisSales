//
//  STMSalesman+CoreDataProperties.h
//  iSisSales
//
//  Created by Maxim Grigoriev on 10/12/16.
//  Copyright © 2016 Sistemium UAB. All rights reserved.
//

#import "STMSalesman+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface STMSalesman (CoreDataProperties)

+ (NSFetchRequest<STMSalesman *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *commentText;
@property (nullable, nonatomic, copy) NSDate *deviceCts;
@property (nullable, nonatomic, copy) NSDate *deviceTs;
@property (nullable, nonatomic, copy) NSNumber *id;
@property (nullable, nonatomic, copy) NSNumber *isFantom;
@property (nullable, nonatomic, copy) NSDate *lts;
@property (nullable, nonatomic, copy) NSString *name;
@property (nullable, nonatomic, retain) NSData *ownerXid;
@property (nullable, nonatomic, copy) NSString *source;
@property (nullable, nonatomic, copy) NSString *target;
@property (nullable, nonatomic, retain) NSData *xid;
@property (nullable, nonatomic, retain) NSSet<STMOutletSalesmanContract *> *outletSalesmanContracts;
@property (nullable, nonatomic, retain) NSSet<STMSaleOrder *> *saleOrders;
@property (nullable, nonatomic, retain) NSSet<STMScheduledEvent *> *scheduledEvents;
@property (nullable, nonatomic, retain) NSSet<STMVisit *> *visits;

@end

@interface STMSalesman (CoreDataGeneratedAccessors)

- (void)addOutletSalesmanContractsObject:(STMOutletSalesmanContract *)value;
- (void)removeOutletSalesmanContractsObject:(STMOutletSalesmanContract *)value;
- (void)addOutletSalesmanContracts:(NSSet<STMOutletSalesmanContract *> *)values;
- (void)removeOutletSalesmanContracts:(NSSet<STMOutletSalesmanContract *> *)values;

- (void)addSaleOrdersObject:(STMSaleOrder *)value;
- (void)removeSaleOrdersObject:(STMSaleOrder *)value;
- (void)addSaleOrders:(NSSet<STMSaleOrder *> *)values;
- (void)removeSaleOrders:(NSSet<STMSaleOrder *> *)values;

- (void)addScheduledEventsObject:(STMScheduledEvent *)value;
- (void)removeScheduledEventsObject:(STMScheduledEvent *)value;
- (void)addScheduledEvents:(NSSet<STMScheduledEvent *> *)values;
- (void)removeScheduledEvents:(NSSet<STMScheduledEvent *> *)values;

- (void)addVisitsObject:(STMVisit *)value;
- (void)removeVisitsObject:(STMVisit *)value;
- (void)addVisits:(NSSet<STMVisit *> *)values;
- (void)removeVisits:(NSSet<STMVisit *> *)values;

@end

NS_ASSUME_NONNULL_END
