//
//  STMStockBatch+CoreDataProperties.m
//  iSisSales
//
//  Created by Maxim Grigoriev on 05/12/16.
//  Copyright © 2016 Sistemium UAB. All rights reserved.
//

#import "STMStockBatch+CoreDataProperties.h"

@implementation STMStockBatch (CoreDataProperties)

+ (NSFetchRequest<STMStockBatch *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"STMStockBatch"];
}

@dynamic commentText;
@dynamic deviceCts;
@dynamic deviceTs;
@dynamic id;
@dynamic isInventarized;
@dynamic isFantom;
@dynamic lts;
@dynamic ownerXid;
@dynamic processing;
@dynamic productionInfo;
@dynamic source;
@dynamic stockToken;
@dynamic target;
@dynamic volume;
@dynamic xid;
@dynamic article;
@dynamic stockBatchBarCodes;

@end
