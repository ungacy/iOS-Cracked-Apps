//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"

@class NSString;

@interface O2OPurchaseRequest : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasX;
    _Bool _hasY;
    _Bool _hasCityId;
    _Bool _hasSrc;
    _Bool _hasMonitorParams;
    _Bool _hasClientVersion;
    _Bool _hasSystemType;
    _Bool _hasShopId;
    _Bool _hasItemId;
    _Bool _hasDtLogMonitor;
    _Bool _hasKoubeiUserProtocol;
    double _x;
    double _y;
    NSString *_cityId;
    NSString *_src;
    NSString *_monitorParams;
    NSString *_clientVersion;
    NSString *_systemType;
    NSString *_shopId;
    NSString *_itemId;
    NSString *_dtLogMonitor;
    NSString *_koubeiUserProtocol;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *koubeiUserProtocol; // @synthesize koubeiUserProtocol=_koubeiUserProtocol;
@property(retain, nonatomic) NSString *dtLogMonitor; // @synthesize dtLogMonitor=_dtLogMonitor;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(retain, nonatomic) NSString *systemType; // @synthesize systemType=_systemType;
@property(retain, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(retain, nonatomic) NSString *monitorParams; // @synthesize monitorParams=_monitorParams;
@property(retain, nonatomic) NSString *src; // @synthesize src=_src;
@property(retain, nonatomic) NSString *cityId; // @synthesize cityId=_cityId;
@property(nonatomic) double y; // @synthesize y=_y;
@property(nonatomic) double x; // @synthesize x=_x;
@property(readonly) _Bool hasKoubeiUserProtocol; // @synthesize hasKoubeiUserProtocol=_hasKoubeiUserProtocol;
@property(readonly) _Bool hasDtLogMonitor; // @synthesize hasDtLogMonitor=_hasDtLogMonitor;
@property(readonly) _Bool hasItemId; // @synthesize hasItemId=_hasItemId;
@property(readonly) _Bool hasShopId; // @synthesize hasShopId=_hasShopId;
@property(readonly) _Bool hasSystemType; // @synthesize hasSystemType=_hasSystemType;
@property(readonly) _Bool hasClientVersion; // @synthesize hasClientVersion=_hasClientVersion;
@property(readonly) _Bool hasMonitorParams; // @synthesize hasMonitorParams=_hasMonitorParams;
@property(readonly) _Bool hasSrc; // @synthesize hasSrc=_hasSrc;
@property(readonly) _Bool hasCityId; // @synthesize hasCityId=_hasCityId;
@property(readonly) _Bool hasY; // @synthesize hasY=_hasY;
@property(readonly) _Bool hasX; // @synthesize hasX=_hasX;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
