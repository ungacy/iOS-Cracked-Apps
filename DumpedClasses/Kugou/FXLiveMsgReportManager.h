//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FXLiveMsgReportitem;

@interface FXLiveMsgReportManager : NSObject
{
    FXLiveMsgReportitem *_reportItem;
}

+ (id)sharedInstance;
@property(retain, nonatomic) FXLiveMsgReportitem *reportItem; // @synthesize reportItem=_reportItem;
- (void).cxx_destruct;
- (id)getCurrentTimestamp;
- (id)getCurrentTime;
- (id)dataTojsonString:(id)arg1;
- (void)postLiveMsgClickEventWithWatchDic:(id)arg1 withActiveStaue:(_Bool)arg2;
- (id)init;

@end

