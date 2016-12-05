//
//  STMSaleOrder+CoreDataProperties.h
//  iSisSales
//
//  Created by Maxim Grigoriev on 05/12/16.
//  Copyright © 2016 Sistemium UAB. All rights reserved.
//

#import "STMSaleOrder+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface STMSaleOrder (CoreDataProperties)

+ (NSFetchRequest<STMSaleOrder *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *commentText;
@property (nullable, nonatomic, copy) NSDate *date;
@property (nullable, nonatomic, copy) NSDate *deviceCts;
@property (nullable, nonatomic, copy) NSDate *deviceTs;
@property (nullable, nonatomic, copy) NSNumber *id;
@property (nullable, nonatomic, copy) NSNumber *isFantom;
@property (nullable, nonatomic, copy) NSDate *lts;
@property (nullable, nonatomic, retain) NSData *ownerXid;
@property (nullable, nonatomic, copy) NSString *processing;
@property (nullable, nonatomic, copy) NSString *processingMessage;
@property (nullable, nonatomic, copy) NSString *source;
@property (nullable, nonatomic, copy) NSString *target;
@property (nullable, nonatomic, copy) NSDecimalNumber *totalCost;
@property (nullable, nonatomic, retain) NSData *xid;
@property (nullable, nonatomic, retain) NSSet<STMSaleOrderPosition *> *saleOrderPositions;
@property (nullable, nonatomic, retain) STMSalesman *salesman;
@property (nullable, nonatomic, retain) STMOutlet *outlet;

@end

@interface STMSaleOrder (CoreDataGeneratedAccessors)

- (void)addSaleOrderPositionsObject:(STMSaleOrderPosition *)value;
- (void)removeSaleOrderPositionsObject:(STMSaleOrderPosition *)value;
- (void)addSaleOrderPositions:(NSSet<STMSaleOrderPosition *> *)values;
- (void)removeSaleOrderPositions:(NSSet<STMSaleOrderPosition *> *)values;

@end

NS_ASSUME_NONNULL_END
