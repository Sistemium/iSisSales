//
//  STMScheduledEvent+CoreDataProperties.h
//  iSisSales
//
//  Created by Maxim Grigoriev on 10/12/16.
//  Copyright © 2016 Sistemium UAB. All rights reserved.
//

#import "STMScheduledEvent+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface STMScheduledEvent (CoreDataProperties)

+ (NSFetchRequest<STMScheduledEvent *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *commentText;
@property (nullable, nonatomic, copy) NSDate *dateEnd;
@property (nullable, nonatomic, copy) NSDate *dateStart;
@property (nullable, nonatomic, copy) NSDate *deviceCts;
@property (nullable, nonatomic, copy) NSDate *deviceTs;
@property (nullable, nonatomic, copy) NSNumber *id;
@property (nullable, nonatomic, copy) NSNumber *isFantom;
@property (nullable, nonatomic, copy) NSDate *lts;
@property (nullable, nonatomic, copy) NSNumber *ord;
@property (nullable, nonatomic, retain) NSData *ownerXid;
@property (nullable, nonatomic, copy) NSString *source;
@property (nullable, nonatomic, copy) NSString *target;
@property (nullable, nonatomic, retain) NSData *xid;
@property (nullable, nonatomic, retain) STMOutlet *outlet;
@property (nullable, nonatomic, retain) STMSalesman *salesman;
@property (nullable, nonatomic, retain) STMSchedule *schedule;
@property (nullable, nonatomic, retain) STMSchedulePurpose *schedulePurpose;

@end

NS_ASSUME_NONNULL_END
