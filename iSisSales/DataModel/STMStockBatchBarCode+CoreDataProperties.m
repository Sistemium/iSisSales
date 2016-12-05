//
//  STMStockBatchBarCode+CoreDataProperties.m
//  iSisSales
//
//  Created by Maxim Grigoriev on 05/12/16.
//  Copyright © 2016 Sistemium UAB. All rights reserved.
//

#import "STMStockBatchBarCode+CoreDataProperties.h"

@implementation STMStockBatchBarCode (CoreDataProperties)

+ (NSFetchRequest<STMStockBatchBarCode *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"STMStockBatchBarCode"];
}

@dynamic code;
@dynamic commentText;
@dynamic deviceCts;
@dynamic deviceTs;
@dynamic id;
@dynamic isFantom;
@dynamic lts;
@dynamic ownerXid;
@dynamic source;
@dynamic target;
@dynamic xid;

@end
