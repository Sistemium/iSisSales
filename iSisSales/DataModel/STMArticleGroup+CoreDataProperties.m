//
//  STMArticleGroup+CoreDataProperties.m
//  iSisSales
//
//  Created by Maxim Grigoriev on 05/12/16.
//  Copyright © 2016 Sistemium UAB. All rights reserved.
//

#import "STMArticleGroup+CoreDataProperties.h"

@implementation STMArticleGroup (CoreDataProperties)

+ (NSFetchRequest<STMArticleGroup *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"STMArticleGroup"];
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
@dynamic articles;
@dynamic articleGroup;
@dynamic articleGroups;
@dynamic children;
@dynamic parents;

@end
