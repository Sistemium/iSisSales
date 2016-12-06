//
//  STMArticle+CoreDataProperties.h
//  iSisSales
//
//  Created by Alexander Levin on 06/12/16.
//  Copyright © 2016 Sistemium UAB. All rights reserved.
//

#import "STMArticle+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface STMArticle (CoreDataProperties)

+ (NSFetchRequest<STMArticle *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *barcode;
@property (nullable, nonatomic, copy) NSString *code;
@property (nullable, nonatomic, copy) NSString *commentText;
@property (nullable, nonatomic, copy) NSDate *deviceCts;
@property (nullable, nonatomic, copy) NSDate *deviceTs;
@property (nullable, nonatomic, copy) NSString *extraLabel;
@property (nullable, nonatomic, copy) NSNumber *factor;
@property (nullable, nonatomic, copy) NSNumber *id;
@property (nullable, nonatomic, copy) NSNumber *isFantom;
@property (nullable, nonatomic, copy) NSDate *lts;
@property (nullable, nonatomic, copy) NSString *name;
@property (nullable, nonatomic, retain) NSData *ownerXid;
@property (nullable, nonatomic, copy) NSNumber *packageRel;
@property (nullable, nonatomic, copy) NSDecimalNumber *pieceVolume;
@property (nullable, nonatomic, copy) NSDecimalNumber *pieceWeight;
@property (nullable, nonatomic, copy) NSDecimalNumber *price;
@property (nullable, nonatomic, copy) NSString *source;
@property (nullable, nonatomic, copy) NSString *target;
@property (nullable, nonatomic, retain) NSData *xid;
@property (nullable, nonatomic, retain) STMArticleGroup *articleGroup;
@property (nullable, nonatomic, retain) NSSet<STMPrice *> *prices;
@property (nullable, nonatomic, retain) NSSet<STMSaleOrderPosition *> *saleOrderPositions;
@property (nullable, nonatomic, retain) NSSet<STMStock *> *stock;

@end

@interface STMArticle (CoreDataGeneratedAccessors)

- (void)addPricesObject:(STMPrice *)value;
- (void)removePricesObject:(STMPrice *)value;
- (void)addPrices:(NSSet<STMPrice *> *)values;
- (void)removePrices:(NSSet<STMPrice *> *)values;

- (void)addSaleOrderPositionsObject:(STMSaleOrderPosition *)value;
- (void)removeSaleOrderPositionsObject:(STMSaleOrderPosition *)value;
- (void)addSaleOrderPositions:(NSSet<STMSaleOrderPosition *> *)values;
- (void)removeSaleOrderPositions:(NSSet<STMSaleOrderPosition *> *)values;

- (void)addStockObject:(STMStock *)value;
- (void)removeStockObject:(STMStock *)value;
- (void)addStock:(NSSet<STMStock *> *)values;
- (void)removeStock:(NSSet<STMStock *> *)values;

@end

NS_ASSUME_NONNULL_END
