//
//  STMVisitPhoto+CoreDataProperties.h
//  iSisSales
//
//  Created by Maxim Grigoriev on 17/06/16.
//  Copyright © 2016 Sistemium UAB. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "STMVisitPhoto.h"

NS_ASSUME_NONNULL_BEGIN

@interface STMVisitPhoto (CoreDataProperties)

@property (nullable, nonatomic, retain) STMVisit *visit;

@end

NS_ASSUME_NONNULL_END
