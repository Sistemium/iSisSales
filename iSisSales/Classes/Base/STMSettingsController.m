//
//  STMSettingsController.m
//  iSistemium
//
//  Created by Maxim Grigoriev on 12/05/16.
//  Copyright © 2016 Sistemium UAB. All rights reserved.
//

#import "STMSettingsController.h"

@implementation STMSettingsController

// Overridden with sales-specific keys

- (id)normalizeValue:(id)value forKey:(NSString *)key {
    
    if ([key isEqualToString:@"catalogue.cell.right"]) {
        
        NSArray *availableValues = @[@"price", @"pieceVolume", @"stock"];
        
        if ([availableValues containsObject:value]) {
            return value;
        } else {
            return @"price";
        }
        
    }
    
    NSArray *stringValues = @[@"genericPriceType"];
    
    if ([stringValues containsObject:key]) {
        return value;
    }
    
    NSArray *boolValues = @[@"enableDebtsEditing",
                            @"enablePartnersEditing",
                            @"enableAggregateShipment",
                            @"enableShowBottles"];
    
    if ([boolValues containsObject:key] && [self isBool:value]) {
        return [NSString stringWithFormat:@"%d", [value boolValue]];
    }
    
    return [super normalizeValue:value forKey:key];
    
}

@end
