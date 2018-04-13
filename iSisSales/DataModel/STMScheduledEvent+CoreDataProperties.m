//
//  STMScheduledEvent+CoreDataProperties.m
//  iSisSales
//
//  Created by Maxim Grigoriev on 10/12/16.
//  Copyright © 2016 Sistemium UAB. All rights reserved.
//

#import "STMScheduledEvent+CoreDataProperties.h"

@implementation STMScheduledEvent (CoreDataProperties)

+ (NSFetchRequest<STMScheduledEvent *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"STMScheduledEvent"];
}

@dynamic commentText;
@dynamic dateEnd;
@dynamic dateStart;
@dynamic deviceCts;
@dynamic deviceTs;
@dynamic id;
@dynamic isFantom;
@dynamic lts;
@dynamic ord;
@dynamic ownerXid;
@dynamic source;
@dynamic target;
@dynamic xid;
@dynamic outlet;
@dynamic salesman;
@dynamic schedule;
@dynamic schedulePurpose;

@end
