//
//  CertUtils.h
//  Mvpn
//
//  Created by tx on 14-3-27.
//  Copyright (c) 2014年 tx. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface CertHelper : NSObject{

}

+(id)sharedInstance;

- (BOOL)getCNfromKeychain:(NSMutableArray*)outArray;
- (int)setIndexbyCN:(NSString*)CN;
- (NSString*)getTitle;

@end
