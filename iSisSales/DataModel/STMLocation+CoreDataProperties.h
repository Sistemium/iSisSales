//
//  STMLocation+CoreDataProperties.h
//  iSisSales
//
//  Created by Maxim Grigoriev on 11/06/16.
//  Copyright © 2016 Sistemium UAB. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "STMLocation.h"

NS_ASSUME_NONNULL_BEGIN

@interface STMLocation (CoreDataProperties)

@property (nullable, nonatomic, retain) NSSet<STMVisit *> *visitIns;
@property (nullable, nonatomic, retain) NSSet<STMVisit *> *visitOuts;

@end

@interface STMLocation (CoreDataGeneratedAccessors)

- (void)addVisitInsObject:(STMVisit *)value;
- (void)removeVisitInsObject:(STMVisit *)value;
- (void)addVisitIns:(NSSet<STMVisit *> *)values;
- (void)removeVisitIns:(NSSet<STMVisit *> *)values;

- (void)addVisitOutsObject:(STMVisit *)value;
- (void)removeVisitOutsObject:(STMVisit *)value;
- (void)addVisitOuts:(NSSet<STMVisit *> *)values;
- (void)removeVisitOuts:(NSSet<STMVisit *> *)values;

@end

NS_ASSUME_NONNULL_END
