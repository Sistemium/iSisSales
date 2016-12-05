//
//  STMOutlet+CoreDataProperties.m
//  iSisSales
//
//  Created by Maxim Grigoriev on 05/12/16.
//  Copyright © 2016 Sistemium UAB. All rights reserved.
//

#import "STMOutlet+CoreDataProperties.h"

@implementation STMOutlet (CoreDataProperties)

+ (NSFetchRequest<STMOutlet *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"STMOutlet"];
}

@dynamic address;
@dynamic commentText;
@dynamic deviceCts;
@dynamic deviceTs;
@dynamic id;
@dynamic isActive;
@dynamic isFantom;
@dynamic lts;
@dynamic name;
@dynamic ownerXid;
@dynamic shortName;
@dynamic source;
@dynamic target;
@dynamic xid;
@dynamic location;
@dynamic outletSalesmanContracts;
@dynamic partner;
@dynamic photos;
@dynamic visits;
@dynamic saleOrders;

@end
