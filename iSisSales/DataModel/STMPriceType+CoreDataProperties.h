//
//  STMPriceType+CoreDataProperties.h
//  iSisSales
//
//  Created by Maxim Grigoriev on 10/12/16.
//  Copyright © 2016 Sistemium UAB. All rights reserved.
//

#import "STMPriceType+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface STMPriceType (CoreDataProperties)

+ (NSFetchRequest<STMPriceType *> *)fetchRequest;

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
@property (nullable, nonatomic, retain) NSSet<STMPriceType *> *children;
@property (nullable, nonatomic, retain) STMPriceType *parent;
@property (nullable, nonatomic, retain) NSSet<STMPrice *> *prices;
@property (nullable, nonatomic, retain) NSSet<STMOutletSalesmanContract *> *outletSalesmanContracts;

@end

@interface STMPriceType (CoreDataGeneratedAccessors)

- (void)addChildrenObject:(STMPriceType *)value;
- (void)removeChildrenObject:(STMPriceType *)value;
- (void)addChildren:(NSSet<STMPriceType *> *)values;
- (void)removeChildren:(NSSet<STMPriceType *> *)values;

- (void)addPricesObject:(STMPrice *)value;
- (void)removePricesObject:(STMPrice *)value;
- (void)addPrices:(NSSet<STMPrice *> *)values;
- (void)removePrices:(NSSet<STMPrice *> *)values;

- (void)addOutletSalesmanContractsObject:(STMOutletSalesmanContract *)value;
- (void)removeOutletSalesmanContractsObject:(STMOutletSalesmanContract *)value;
- (void)addOutletSalesmanContracts:(NSSet<STMOutletSalesmanContract *> *)values;
- (void)removeOutletSalesmanContracts:(NSSet<STMOutletSalesmanContract *> *)values;

@end

NS_ASSUME_NONNULL_END
