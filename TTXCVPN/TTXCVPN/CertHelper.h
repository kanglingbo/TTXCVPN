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

- (NSString*)getCertificationDNString;
- (CFDataRef)getCertDer;
- (long)L4Proxy_Sign:(const char*)signdata outsigned:(unsigned char*)csigned outsignlen:(int*)len;
- (NSString*)getAccountInfo:(NSString*)appID  withAccountType:(NSString*)accountType;
- (BOOL)authnByP7;

@end
