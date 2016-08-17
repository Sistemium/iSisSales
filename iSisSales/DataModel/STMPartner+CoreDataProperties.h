//
//  STMPartner+CoreDataProperties.h
//  iSisSales
//
//  Created by Maxim Grigoriev on 17/08/16.
//  Copyright © 2016 Sistemium UAB. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "STMPartner.h"

NS_ASSUME_NONNULL_BEGIN

@interface STMPartner (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *commentText;
@property (nullable, nonatomic, retain) NSDate *deviceCts;
@property (nullable, nonatomic, retain) NSDate *deviceTs;
@property (nullable, nonatomic, retain) NSNumber *id;
@property (nullable, nonatomic, retain) NSNumber *isFantom;
@property (nullable, nonatomic, retain) NSDate *lts;
@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSData *ownerXid;
@property (nullable, nonatomic, retain) NSString *source;
@property (nullable, nonatomic, retain) NSString *target;
@property (nullable, nonatomic, retain) NSData *xid;
@property (nullable, nonatomic, retain) NSString *inn;
@property (nullable, nonatomic, retain) NSSet<STMContract *> *contracts;
@property (nullable, nonatomic, retain) STMLegalForm *legalForm;
@property (nullable, nonatomic, retain) NSSet<STMOutlet *> *outlets;

@end

@interface STMPartner (CoreDataGeneratedAccessors)

- (void)addContractsObject:(STMContract *)value;
- (void)removeContractsObject:(STMContract *)value;
- (void)addContracts:(NSSet<STMContract *> *)values;
- (void)removeContracts:(NSSet<STMContract *> *)values;

- (void)addOutletsObject:(STMOutlet *)value;
- (void)removeOutletsObject:(STMOutlet *)value;
- (void)addOutlets:(NSSet<STMOutlet *> *)values;
- (void)removeOutlets:(NSSet<STMOutlet *> *)values;

@end

NS_ASSUME_NONNULL_END
