//
//  STMContract+CoreDataProperties.h
//  iSisSales
//
//  Created by Maxim Grigoriev on 28/06/16.
//  Copyright © 2016 Sistemium UAB. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "STMContract.h"

NS_ASSUME_NONNULL_BEGIN

@interface STMContract (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *commentText;
@property (nullable, nonatomic, retain) NSDate *deviceCts;
@property (nullable, nonatomic, retain) NSDate *deviceTs;
@property (nullable, nonatomic, retain) NSNumber *id;
@property (nullable, nonatomic, retain) NSNumber *isFantom;
@property (nullable, nonatomic, retain) NSDate *lts;
@property (nullable, nonatomic, retain) NSData *ownerXid;
@property (nullable, nonatomic, retain) NSString *source;
@property (nullable, nonatomic, retain) NSString *target;
@property (nullable, nonatomic, retain) NSData *xid;
@property (nullable, nonatomic, retain) NSDate *dateE;
@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSSet<STMOutletSalesmanContract *> *outletSalesmanContracts;
@property (nullable, nonatomic, retain) STMPartner *partner;

@end

@interface STMContract (CoreDataGeneratedAccessors)

- (void)addOutletSalesmanContractsObject:(STMOutletSalesmanContract *)value;
- (void)removeOutletSalesmanContractsObject:(STMOutletSalesmanContract *)value;
- (void)addOutletSalesmanContracts:(NSSet<STMOutletSalesmanContract *> *)values;
- (void)removeOutletSalesmanContracts:(NSSet<STMOutletSalesmanContract *> *)values;

@end

NS_ASSUME_NONNULL_END
