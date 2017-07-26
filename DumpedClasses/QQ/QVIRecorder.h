//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QQAudioSessionManagerDelegate.h"

@class NSString;

@interface QVIRecorder : NSObject <QQAudioSessionManagerDelegate>
{
    id <QVIRecorderDelegate> delegate;
    _Bool isRunning_;
    float sampleRate_;
    CDStruct_139c83c6 recordState_;
    _Bool hasInit_;
}

+ (void)releaseSharedInstance;
+ (id)sharedInstance;
@property(nonatomic) _Bool isRunning_; // @synthesize isRunning_;
@property(retain, nonatomic) id <QVIRecorderDelegate> delegate; // @synthesize delegate;
- (void)onIntterruptBegin;
- (void)onAudioSessionActive;
- (void)releaseRecorder;
- (void)stopRecording;
- (void)reallyStopRecording;
- (_Bool)startRecording;
- (_Bool)initAudioQueue;
- (_Bool)initRecorderWithSampleRate:(float)arg1;
- (void)setupAudioFormat:(struct AudioStreamBasicDescription *)arg1;
- (CDStruct_139c83c6 *)getRecordState;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
