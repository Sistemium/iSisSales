//
//  STMOutletSalesmanContract+CoreDataProperties.m
//  iSisSales
//
//  Created by Maxim Grigoriev on 10/12/16.
//  Copyright © 2016 Sistemium UAB. All rights reserved.
//

#import "STMOutletSalesmanContract+CoreDataProperties.h"

@implementation STMOutletSalesmanContract (CoreDataProperties)

+ (NSFetchRequest<STMOutletSalesmanContract *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"STMOutletSalesmanContract"];
}

@dynamic commentText;
@dynamic deviceCts;
@dynamic deviceTs;
@dynamic id;
@dynamic isDisabled;
@dynamic isFantom;
@dynamic lts;
@dynamic ownerXid;
@dynamic source;
@dynamic target;
@dynamic xid;
@dynamic contract;
@dynamic outlet;
@dynamic salesman;
@dynamic priceType;

@end
