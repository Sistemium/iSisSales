//
//  STMSchedule+CoreDataProperties.h
//  iSisSales
//
//  Created by Maxim Grigoriev on 10/12/16.
//  Copyright © 2016 Sistemium UAB. All rights reserved.
//

#import "STMSchedule+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface STMSchedule (CoreDataProperties)

+ (NSFetchRequest<STMSchedule *> *)fetchRequest;

@property (nullable, nonatomic, copy) NSString *code;
@property (nullable, nonatomic, copy) NSString *commentText;
@property (nullable, nonatomic, copy) NSDate *deviceCts;
@property (nullable, nonatomic, copy) NSDate *deviceTs;
@property (nullable, nonatomic, copy) NSNumber *id;
@property (nullable, nonatomic, copy) NSNumber *isFantom;
@property (nullable, nonatomic, copy) NSDate *lts;
@property (nullable, nonatomic, copy) NSString *name;
@property (nullable, nonatomic, copy) NSNumber *ord;
@property (nullable, nonatomic, retain) NSData *ownerXid;
@property (nullable, nonatomic, copy) NSString *source;
@property (nullable, nonatomic, copy) NSString *target;
@property (nullable, nonatomic, retain) NSData *xid;
@property (nullable, nonatomic, retain) NSSet<STMScheduledEvent *> *scheduledEvents;

@end

@interface STMSchedule (CoreDataGeneratedAccessors)

- (void)addScheduledEventsObject:(STMScheduledEvent *)value;
- (void)removeScheduledEventsObject:(STMScheduledEvent *)value;
- (void)addScheduledEvents:(NSSet<STMScheduledEvent *> *)values;
- (void)removeScheduledEvents:(NSSet<STMScheduledEvent *> *)values;

@end

NS_ASSUME_NONNULL_END
