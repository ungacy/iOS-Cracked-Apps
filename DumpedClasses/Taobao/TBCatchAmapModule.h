//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WXModuleProtocol.h"

@class AMap3DMapUtils, NSString, WXSDKInstance;

@interface TBCatchAmapModule : NSObject <WXModuleProtocol>
{
    WXSDKInstance *weexInstance;
    AMap3DMapUtils *_utils;
}

+ (id)wx_export_method_24;
+ (id)wx_export_method_23;
@property(retain, nonatomic) AMap3DMapUtils *utils; // @synthesize utils=_utils;
@property(nonatomic) __weak WXSDKInstance *weexInstance; // @synthesize weexInstance;
- (void).cxx_destruct;
- (void)pointForLat:(float)arg1 lng:(float)arg2 callback:(CDUnknownBlockType)arg3;
- (void)close:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

