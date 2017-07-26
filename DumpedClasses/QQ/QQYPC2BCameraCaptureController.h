//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQYPC2BCameraController.h"

#import "QQYPC2BCameraControlPanelDelegate.h"
#import "QQYPC2BCameraPreviewDelegate.h"

@class NSString, QQYPC2BCameraControlPanel;

@interface QQYPC2BCameraCaptureController : QQYPC2BCameraController <QQYPC2BCameraPreviewDelegate, QQYPC2BCameraControlPanelDelegate>
{
    QQYPC2BCameraControlPanel *_controlPanel;
    double _focusRectRatio;
    NSString *_imgFilePath;
}

@property(copy, nonatomic) NSString *imgFilePath; // @synthesize imgFilePath=_imgFilePath;
- (void)onConfirmMediaFile:(id)arg1;
- (void)QQYPC2BCameraControlPanel:(id)arg1 onSendButtonClick:(id)arg2;
- (void)QQYPC2BCameraControlPanel:(id)arg1 onResetButtonClick:(id)arg2;
- (void)QQYPC2BCameraControlPanel:(id)arg1 onCaptureButtonClick:(id)arg2;
- (void)onCaptureImage;
- (void)loadPreview;
- (void)loadControlPanel;
- (void)loadView;
- (void)dealloc;
- (id)initWithFocusRectRatio:(double)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
