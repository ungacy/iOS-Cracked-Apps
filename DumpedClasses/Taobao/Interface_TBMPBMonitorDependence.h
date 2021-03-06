//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AppMonitorTable, NSString;

@interface Interface_TBMPBMonitorDependence : NSObject
{
    NSString *_moduleName;
    AppMonitorTable *_firstVideoFrameMonitorTable;
    AppMonitorTable *_firstAudioFrameMonitorTable;
    AppMonitorTable *_bufferLoadMonitorTable;
    AppMonitorTable *_ptsdtsMonitorTable;
    AppMonitorTable *_networkShakeTable;
    AppMonitorTable *_playerErrorTable;
    AppMonitorTable *_playExperienceTable;
}

+ (void)commitVideoPlayerMonitorData:(id)arg1;
+ (void)commitAlarmData:(id)arg1;
+ (void)commitPerformanceData:(id)arg1;
+ (id)Selector_commitAlarmDataWithParameters:(id)arg1;
+ (id)Selector_commitPerformanceDataWithParameters:(id)arg1;
@property(retain, nonatomic) AppMonitorTable *playExperienceTable; // @synthesize playExperienceTable=_playExperienceTable;
@property(retain, nonatomic) AppMonitorTable *playerErrorTable; // @synthesize playerErrorTable=_playerErrorTable;
@property(retain, nonatomic) AppMonitorTable *networkShakeTable; // @synthesize networkShakeTable=_networkShakeTable;
@property(retain, nonatomic) AppMonitorTable *ptsdtsMonitorTable; // @synthesize ptsdtsMonitorTable=_ptsdtsMonitorTable;
@property(retain, nonatomic) AppMonitorTable *bufferLoadMonitorTable; // @synthesize bufferLoadMonitorTable=_bufferLoadMonitorTable;
@property(retain, nonatomic) AppMonitorTable *firstAudioFrameMonitorTable; // @synthesize firstAudioFrameMonitorTable=_firstAudioFrameMonitorTable;
@property(retain, nonatomic) AppMonitorTable *firstVideoFrameMonitorTable; // @synthesize firstVideoFrameMonitorTable=_firstVideoFrameMonitorTable;
@property(copy, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
- (void).cxx_destruct;
- (id)initWithModuleName:(id)arg1;

@end

