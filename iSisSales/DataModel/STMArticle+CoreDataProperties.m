//
//  STMArticle+CoreDataProperties.m
//  iSisSales
//
//  Created by Alexander Levin on 06/12/16.
//  Copyright © 2016 Sistemium UAB. All rights reserved.
//

#import "STMArticle+CoreDataProperties.h"

@implementation STMArticle (CoreDataProperties)

+ (NSFetchRequest<STMArticle *> *)fetchRequest {
	return [[NSFetchRequest alloc] initWithEntityName:@"STMArticle"];
}

@dynamic barcode;
@dynamic code;
@dynamic commentText;
@dynamic deviceCts;
@dynamic deviceTs;
@dynamic extraLabel;
@dynamic factor;
@dynamic id;
@dynamic isFantom;
@dynamic lts;
@dynamic name;
@dynamic ownerXid;
@dynamic packageRel;
@dynamic pieceVolume;
@dynamic pieceWeight;
@dynamic price;
@dynamic source;
@dynamic target;
@dynamic xid;
@dynamic articleGroup;
@dynamic prices;
@dynamic saleOrderPositions;
@dynamic stock;

@end
