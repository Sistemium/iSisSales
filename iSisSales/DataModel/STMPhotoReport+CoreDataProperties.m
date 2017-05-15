//
//  STMPhotoReport+CoreDataProperties.m
//  iSisSales
//
//  Created by Maxim Grigoriev on 09/04/2017.
//  Copyright © 2017 Sistemium UAB. All rights reserved.
//

#import "STMPhotoReport+CoreDataProperties.h"

@implementation STMPhotoReport (CoreDataProperties)

+ (NSFetchRequest<STMPhotoReport *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"STMPhotoReport"];
}

@dynamic campaign;
@dynamic outlet;
@dynamic salesman;

@end
