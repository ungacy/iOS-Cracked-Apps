//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSDictionary, NSURL;

@protocol UPnPEvents_Observer
- (void)subscriptionTimerExpiresIn:(int)arg1 timeoutSubscription:(int)arg2 timeSubscription:(double)arg3;
- (NSURL *)GetUPnPEventURL;
- (void)UPnPEvent:(NSDictionary *)arg1;
@end

