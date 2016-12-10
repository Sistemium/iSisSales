//
//  STMSchedule+CoreDataProperties.m
//  iSisSales
//
//  Created by Maxim Grigoriev on 10/12/16.
//  Copyright © 2016 Sistemium UAB. All rights reserved.
//

#import "STMSchedule+CoreDataProperties.h"

@implementation STMSchedule (CoreDataProperties)

+ (NSFetchRequest<STMSchedule *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"STMSchedule"];
}

@dynamic code;
@dynamic commentText;
@dynamic deviceCts;
@dynamic deviceTs;
@dynamic id;
@dynamic isFantom;
@dynamic lts;
@dynamic name;
@dynamic ord;
@dynamic ownerXid;
@dynamic source;
@dynamic target;
@dynamic xid;
@dynamic scheduledEvents;

@end
