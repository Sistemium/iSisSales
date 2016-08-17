//
//  STMPartner.h
//  iSisSales
//
//  Created by Maxim Grigoriev on 09/06/16.
//  Copyright © 2016 Sistemium UAB. All rights reserved.
//

#import "STMDatum.h"

@class STMContract, STMLegalForm, STMOutlet;

NS_ASSUME_NONNULL_BEGIN

@interface STMPartner : STMDatum

- (NSString *)shortName;


@end

NS_ASSUME_NONNULL_END

#import "STMPartner+CoreDataProperties.h"
