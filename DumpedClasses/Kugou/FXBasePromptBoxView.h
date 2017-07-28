//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FXPromptFloatBoxView.h"

@class FXActiveMessageItem, UITapGestureRecognizer;

@interface FXBasePromptBoxView : FXPromptFloatBoxView
{
    id <FXPromptBoxViewDelegate> delegate;
    FXActiveMessageItem *_dataItem;
    UITapGestureRecognizer *_tapGesture;
}

+ (struct CGRect)getPromptBoxFrame:(id)arg1 dataItem:(id)arg2;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) FXActiveMessageItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) __weak id <FXPromptBoxViewDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)closeWithAnimate:(_Bool)arg1;
- (void)onTimer;
- (void)dismissBoxViewAfterDelay:(double)arg1;
- (void)cancelTimerMethod;
- (void)onTapPromptView;
- (void)showWithAnimation:(_Bool)arg1;
- (double)dismissDelayTime;
- (void)hideWithAnimating;
- (void)willPanCloseBoxView;
- (void)fillWithItem:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
