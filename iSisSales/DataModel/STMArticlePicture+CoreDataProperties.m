//
//  STMArticlePicture+CoreDataProperties.m
//  iSisSales
//
//  Created by Maxim Grigoriev on 10/01/2017.
//  Copyright © 2017 Sistemium UAB. All rights reserved.
//

#import "STMArticlePicture+CoreDataProperties.h"

@implementation STMArticlePicture (CoreDataProperties)

+ (NSFetchRequest<STMArticlePicture *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"STMArticlePicture"];
}

@dynamic articles;

@end
