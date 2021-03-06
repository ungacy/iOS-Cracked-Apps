//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQYPC2BCameraPreview.h"

#import "AVCaptureFileOutputRecordingDelegate.h"

@class AVCaptureDeviceInput, AVCaptureMovieFileOutput, AVCaptureStillImageOutput, NSString, UIImageView;

@interface QQYPC2BVideoRecordPreview : QQYPC2BCameraPreview <AVCaptureFileOutputRecordingDelegate>
{
    AVCaptureStillImageOutput *_previewImageOutput;
    AVCaptureMovieFileOutput *_movieFileOutput;
    AVCaptureDeviceInput *_audioInput;
    UIImageView *_thumbPreview;
    _Bool _isRecording;
    id <QQYPC2BVideoRecordPreviewDelegate> _delegate;
    NSString *_curFilePath;
    CDStruct_1b6d18a9 _startTime;
    CDStruct_1b6d18a9 _currentSampleTime;
}

@property(copy, nonatomic) NSString *curFilePath; // @synthesize curFilePath=_curFilePath;
@property(nonatomic) CDStruct_1b6d18a9 currentSampleTime; // @synthesize currentSampleTime=_currentSampleTime;
@property(nonatomic) CDStruct_1b6d18a9 startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool isRecording; // @synthesize isRecording=_isRecording;
@property(nonatomic) id <QQYPC2BVideoRecordPreviewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4;
- (void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3;
- (void)showSnapShotSelf:(_Bool)arg1;
- (void)stopRecord;
- (void)stopRunning;
- (void)startRunning;
- (id)getMovieFilePath;
- (void)startRecord;
- (void)toggleCamera;
- (_Bool)createMovieFileOutput;
- (_Bool)createAudioInput;
- (_Bool)createStillImageOutput;
- (_Bool)createAVComponents;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 cameraType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

