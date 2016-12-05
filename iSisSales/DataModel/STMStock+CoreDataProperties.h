//
//  STMStock+CoreDataProperties.h
//  iSisSales
//
//  Created by Maxim Grigoriev on 05/12/16.
//  Copyright © 2016 Sistemium UAB. All rights reserved.
//

#import "STMStock+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface STMStock (CoreDataProperties)

+ (NSFetchRequest<STMStock *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *commentText;
@property (nullable, nonatomic, copy) NSDate *deviceCts;
@property (nullable, nonatomic, copy) NSDate *deviceTs;
@property (nullable, nonatomic, copy) NSString *displayVolume;
@property (nullable, nonatomic, copy) NSNumber *id;
@property (nullable, nonatomic, copy) NSNumber *isFantom;
@property (nullable, nonatomic, copy) NSDate *lts;
@property (nullable, nonatomic, retain) NSData *ownerXid;
@property (nullable, nonatomic, copy) NSString *source;
@property (nullable, nonatomic, copy) NSString *target;
@property (nullable, nonatomic, copy) NSNumber *volume;
@property (nullable, nonatomic, retain) NSData *xid;
@property (nullable, nonatomic, retain) STMArticle *article;

@end

NS_ASSUME_NONNULL_END
