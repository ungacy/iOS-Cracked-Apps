//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMBaseService.h"

@interface FMAppService : FMBaseService
{
}

+ (void)notifyCityChange:(id)arg1;
+ (void)getSplashScreenUsualDO:(CDUnknownBlockType)arg1;
+ (void)getSplashScreenDO:(id)arg1 result:(CDUnknownBlockType)arg2;
+ (void)getAppRemoteConfig:(CDUnknownBlockType)arg1 fail:(CDUnknownBlockType)arg2;
+ (int)getURLSafeStatus:(id)arg1;
+ (id)getAuthorizeHost;
+ (void)syncHostWhiteList;

@end
