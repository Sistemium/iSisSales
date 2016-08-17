//
//  STMPartner.m
//  iSisSales
//
//  Created by Maxim Grigoriev on 09/06/16.
//  Copyright © 2016 Sistemium UAB. All rights reserved.
//

#import "STMPartner.h"
#import "STMContract.h"
#import "STMLegalForm.h"
#import "STMOutlet.h"

@implementation STMPartner

- (NSString *)shortName {
    
    NSError *error = nil;
    NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:@"\"([^\"]*[^ ])\""
                                                                           options:NSRegularExpressionCaseInsensitive
                                                                             error:&error];

    NSTextCheckingResult *match = [regex firstMatchInString:self.name
                                                    options:0
                                                      range:NSMakeRange(0, self.name.length)];
    
    if (match) {
        
        NSString *shortName = [self.name substringWithRange:match.range];
        shortName = [shortName stringByReplacingOccurrencesOfString:@"\"" withString:@""];
        return shortName;
        
    } else {
        
        return self.name;
        
    }

}


@end
