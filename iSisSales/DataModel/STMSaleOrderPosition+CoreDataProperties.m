//
//  STMSaleOrderPosition+CoreDataProperties.m
//  iSisSales
//
//  Created by Alexander Levin on 06/12/16.
//  Copyright © 2016 Sistemium UAB. All rights reserved.
//

#import "STMSaleOrderPosition+CoreDataProperties.h"

@implementation STMSaleOrderPosition (CoreDataProperties)

+ (NSFetchRequest<STMSaleOrderPosition *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"STMSaleOrderPosition"];
}

@dynamic commentText;
@dynamic cost;
@dynamic deviceCts;
@dynamic deviceTs;
@dynamic id;
@dynamic isFantom;
@dynamic lts;
@dynamic ownerXid;
@dynamic price;
@dynamic priceDoc;
@dynamic priceOrigin;
@dynamic source;
@dynamic target;
@dynamic volume;
@dynamic xid;
@dynamic backVolume;
@dynamic article;
@dynamic saleOrder;

@end
