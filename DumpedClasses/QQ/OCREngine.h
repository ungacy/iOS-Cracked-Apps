//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OCRImageSelectedFinishDelegate.h"
#import "OCRUploadResultCallback.h"

@class NSString, OCRCloudProcessor, QQARCommonConfigModel;

@interface OCREngine : NSObject <OCRUploadResultCallback, OCRImageSelectedFinishDelegate>
{
    QQARCommonConfigModel *_arCommonCfgModel;
    _Bool _enableOCRCloud;
    OCRCloudProcessor *_ocrCloudProcessor;
    id <OCREngineDelegate> _delegate;
    id <OCRUploadResultCallback> _resultCallback;
}

@property(nonatomic) __weak id <OCRUploadResultCallback> resultCallback; // @synthesize resultCallback=_resultCallback;
@property(nonatomic) __weak id <OCREngineDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cloudProcessorResultCallBack:(id)arg1;
- (void)doCloudRecogWithImage:(id)arg1;
- (void)onCloudProcessorModuleGetImage:(id)arg1;
- (_Bool)stopCloudRecog;
- (_Bool)resumeCloudRecog;
- (_Bool)pauseCloudRecog;
- (void)doCloudRecogPerFrame:(id)arg1;
- (_Bool)startCloudRecog;
- (_Bool)doInitCloudRecog;
- (_Bool)doInitConfigModel;
- (void)dealloc;
- (_Bool)updateArEngine:(id)arg1;
- (_Bool)stopOCREngine;
- (_Bool)pauseOCREngine;
- (_Bool)resumeOCREngine;
- (_Bool)startOCREngine;
- (_Bool)doInitOCREngine:(struct CGRect)arg1 drawViewRect:(struct CGRect *)arg2 scanEndY:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
