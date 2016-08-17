//
//  STMLegalForm+CoreDataProperties.h
//  iSisSales
//
//  Created by Maxim Grigoriev on 17/08/16.
//  Copyright © 2016 Sistemium UAB. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "STMLegalForm.h"

NS_ASSUME_NONNULL_BEGIN

@interface STMLegalForm (CoreDataProperties)

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
@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSString *fullName;
@property (nullable, nonatomic, retain) NSSet<STMPartner *> *partners;

@end

@interface STMLegalForm (CoreDataGeneratedAccessors)

- (void)addPartnersObject:(STMPartner *)value;
- (void)removePartnersObject:(STMPartner *)value;
- (void)addPartners:(NSSet<STMPartner *> *)values;
- (void)removePartners:(NSSet<STMPartner *> *)values;

@end

NS_ASSUME_NONNULL_END
