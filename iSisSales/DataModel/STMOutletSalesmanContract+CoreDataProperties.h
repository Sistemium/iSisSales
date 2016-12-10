//
//  STMOutletSalesmanContract+CoreDataProperties.h
//  iSisSales
//
//  Created by Maxim Grigoriev on 10/12/16.
//  Copyright © 2016 Sistemium UAB. All rights reserved.
//

#import "STMOutletSalesmanContract+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface STMOutletSalesmanContract (CoreDataProperties)

+ (NSFetchRequest<STMOutletSalesmanContract *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *commentText;
@property (nullable, nonatomic, copy) NSDate *deviceCts;
@property (nullable, nonatomic, copy) NSDate *deviceTs;
@property (nullable, nonatomic, copy) NSNumber *id;
@property (nullable, nonatomic, copy) NSNumber *isDisabled;
@property (nullable, nonatomic, copy) NSNumber *isFantom;
@property (nullable, nonatomic, copy) NSDate *lts;
@property (nullable, nonatomic, retain) NSData *ownerXid;
@property (nullable, nonatomic, copy) NSString *source;
@property (nullable, nonatomic, copy) NSString *target;
@property (nullable, nonatomic, retain) NSData *xid;
@property (nullable, nonatomic, retain) STMContract *contract;
@property (nullable, nonatomic, retain) STMOutlet *outlet;
@property (nullable, nonatomic, retain) STMSalesman *salesman;
@property (nullable, nonatomic, retain) STMPriceType *priceType;

@end

NS_ASSUME_NONNULL_END
