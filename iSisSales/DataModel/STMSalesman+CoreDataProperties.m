//
//  STMSalesman+CoreDataProperties.m
//  iSisSales
//
//  Created by Maxim Grigoriev on 05/12/16.
//  Copyright © 2016 Sistemium UAB. All rights reserved.
//

#import "STMSalesman+CoreDataProperties.h"

@implementation STMSalesman (CoreDataProperties)

+ (NSFetchRequest<STMSalesman *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"STMSalesman"];
}

@dynamic commentText;
@dynamic deviceCts;
@dynamic deviceTs;
@dynamic id;
@dynamic isFantom;
@dynamic lts;
@dynamic name;
@dynamic ownerXid;
@dynamic source;
@dynamic target;
@dynamic xid;
@dynamic outletSalesmanContracts;
@dynamic visits;
@dynamic saleOrders;

@end
