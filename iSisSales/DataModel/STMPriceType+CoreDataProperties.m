//
//  STMPriceType+CoreDataProperties.m
//  iSisSales
//
//  Created by Maxim Grigoriev on 05/12/16.
//  Copyright © 2016 Sistemium UAB. All rights reserved.
//

#import "STMPriceType+CoreDataProperties.h"

@implementation STMPriceType (CoreDataProperties)

+ (NSFetchRequest<STMPriceType *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"STMPriceType"];
}

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
