//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface AMapFoundationReachability : NSObject
{
    struct __SCNetworkReachability *_reachabilityRef;
    NSObject<OS_dispatch_queue> *_reachabilitySerialQueue;
    _Bool _isStartNotifying;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)isReachableViaWiFi;
- (_Bool)isReachableViaWWAN;
- (_Bool)isReachableWithFlags:(unsigned int)arg1;
- (_Bool)isReachable;
- (unsigned int)reachabilityFlags;
- (id)currentConnectionFlags;
- (void)localConnectionChanged;
- (void)stopNotifier;
- (void)startNotifier;
- (long long)currentNetworkType;
- (void)dealloc;
- (id)init;

@end
