//
//  STMSaleOrderPosition+CoreDataProperties.h
//  iSisSales
//
//  Created by Maxim Grigoriev on 20/12/2016.
//  Copyright © 2016 Sistemium UAB. All rights reserved.
//

#import "STMSaleOrderPosition+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface STMSaleOrderPosition (CoreDataProperties)

+ (NSFetchRequest<STMSaleOrderPosition *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSNumber *backVolume;
@property (nullable, nonatomic, copy) NSString *commentText;
@property (nullable, nonatomic, copy) NSDecimalNumber *cost;
@property (nullable, nonatomic, copy) NSDate *deviceCts;
@property (nullable, nonatomic, copy) NSDate *deviceTs;
@property (nullable, nonatomic, copy) NSNumber *id;
@property (nullable, nonatomic, copy) NSNumber *isFantom;
@property (nullable, nonatomic, copy) NSDate *lts;
@property (nullable, nonatomic, retain) NSData *ownerXid;
@property (nullable, nonatomic, copy) NSDecimalNumber *price;
@property (nullable, nonatomic, copy) NSDecimalNumber *priceDoc;
@property (nullable, nonatomic, copy) NSDecimalNumber *priceOrigin;
@property (nullable, nonatomic, copy) NSString *source;
@property (nullable, nonatomic, copy) NSString *target;
@property (nullable, nonatomic, copy) NSNumber *volume;
@property (nullable, nonatomic, retain) NSData *xid;
@property (nullable, nonatomic, copy) NSDate *deviceAts;
@property (nullable, nonatomic, retain) STMArticle *article;
@property (nullable, nonatomic, retain) STMSaleOrder *saleOrder;

@end

NS_ASSUME_NONNULL_END
