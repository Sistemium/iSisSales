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
#import "STMOutlet+CoreDataClass.h"

@implementation STMPartner

- (NSString *)shortName {
    
    NSTextCheckingResult *match = [self matchWithRegexPattern:@"\"([^\"]*[^ ])\"" string:self.name];
    
    if (!match) match = [self matchWithRegexPattern:@"\"([^\"]*[^ \"]*)\"" string:self.name];

    if (!match) {
        
        return self.name;
        
    } else {
        
        NSString *shortName = [self.name substringWithRange:match.range];
        shortName = [shortName stringByReplacingOccurrencesOfString:@"\"" withString:@""];
        return shortName;
        
    }

}

- (NSTextCheckingResult *)matchWithRegexPattern:(NSString *)regexPattern string:(NSString *)string {
    
    NSError *error = nil;
    NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:regexPattern
                                                                           options:NSRegularExpressionCaseInsensitive
                                                                             error:&error];
    
    NSTextCheckingResult *match = [regex firstMatchInString:string
                                                    options:0
                                                      range:NSMakeRange(0, string.length)];

    return match;
    
}


@end
