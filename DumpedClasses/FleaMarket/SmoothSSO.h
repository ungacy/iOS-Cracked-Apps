//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SmoothSSO : NSObject
{
}

+ (id)sharedIntance;
- (id)taobaoSignWithSsoVersion:(id)arg1 ssoToken:(id)arg2 userId:(id)arg3 t:(id)arg4 appKey:(id)arg5;
- (void)setEnv:(int)arg1;
- (void)alipayJump2TaobaoWithAppKey:(id)arg1 targetURL:(id)arg2;
- (id)getUUID;
- (void)jump2TaobaoWithAppKey:(id)arg1 targetURL:(id)arg2;
- (_Bool)isTaobaoSSOEnabled;

@end

