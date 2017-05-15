//
//  STMPrice+CoreDataProperties.m
//  iSisSales
//
//  Created by Maxim Grigoriev on 05/12/16.
//  Copyright © 2016 Sistemium UAB. All rights reserved.
//

#import "STMPrice+CoreDataProperties.h"

@implementation STMPrice (CoreDataProperties)

+ (NSFetchRequest<STMPrice *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"STMPrice"];
}

@dynamic commentText;
@dynamic deviceCts;
@dynamic deviceTs;
@dynamic id;
@dynamic isFantom;
@dynamic lts;
@dynamic ownerXid;
@dynamic price;
@dynamic source;
@dynamic target;
@dynamic xid;
@dynamic priceType;
@dynamic article;

@end
