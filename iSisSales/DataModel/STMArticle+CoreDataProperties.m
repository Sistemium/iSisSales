//
//  STMArticle+CoreDataProperties.m
//  iSisSales
//
//  Created by Maxim Grigoriev on 05/12/16.
//  Copyright © 2016 Sistemium UAB. All rights reserved.
//

#import "STMArticle+CoreDataProperties.h"

@implementation STMArticle (CoreDataProperties)

+ (NSFetchRequest<STMArticle *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"STMArticle"];
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
