//
//  STMPhotoReport+CoreDataProperties.h
//  iSisSales
//
//  Created by Maxim Grigoriev on 09/04/2017.
//  Copyright © 2017 Sistemium UAB. All rights reserved.
//

#import "STMPhotoReport+CoreDataClass.h"


NS_ASSUME_NONNULL_BEGIN

@interface STMPhotoReport (CoreDataProperties)

+ (NSFetchRequest<STMPhotoReport *> *)fetchRequest;

@property (nullable, nonatomic, retain) NSManagedObject *campaign;
@property (nullable, nonatomic, retain) STMOutlet *outlet;
@property (nullable, nonatomic, retain) STMSalesman *salesman;

@end

NS_ASSUME_NONNULL_END
