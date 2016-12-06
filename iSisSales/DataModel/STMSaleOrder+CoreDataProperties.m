//
//  STMSaleOrder+CoreDataProperties.m
//  iSisSales
//
//  Created by Alexander Levin on 06/12/16.
//  Copyright © 2016 Sistemium UAB. All rights reserved.
//

#import "STMSaleOrder+CoreDataProperties.h"

@implementation STMSaleOrder (CoreDataProperties)

+ (NSFetchRequest<STMSaleOrder *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"STMSaleOrder"];
}

@dynamic commentText;
@dynamic date;
@dynamic deviceCts;
@dynamic deviceTs;
@dynamic id;
@dynamic isFantom;
@dynamic lts;
@dynamic ownerXid;
@dynamic processing;
@dynamic processingMessage;
@dynamic source;
@dynamic target;
@dynamic totalCost;
@dynamic xid;
@dynamic totalCostDoc;
@dynamic outlet;
@dynamic saleOrderPositions;
@dynamic salesman;

@end
