//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedView.h"

@class SSThemedButton, UILabel;

@interface WDInputAccessoryView : SSThemedView
{
    CDUnknownBlockType _addPictureHandler;
    CDUnknownBlockType _addVideoHandler;
    CDUnknownBlockType _hideKeyboardHandler;
    CDUnknownBlockType _autoSaveTimeIntervalHandler;
    CDUnknownBlockType _settingHandler;
    CDUnknownBlockType _moreHandler;
    CDUnknownBlockType _fontHandler;
    UILabel *_timeIntervalLabel;
    SSThemedButton *_moreButton;
    SSThemedButton *_setButton;
    SSThemedButton *_fontButton;
    SSThemedButton *_videoButton;
    SSThemedButton *_imageButton;
}

@property(retain, nonatomic) SSThemedButton *imageButton; // @synthesize imageButton=_imageButton;
@property(retain, nonatomic) SSThemedButton *videoButton; // @synthesize videoButton=_videoButton;
@property(retain, nonatomic) SSThemedButton *fontButton; // @synthesize fontButton=_fontButton;
@property(retain, nonatomic) SSThemedButton *setButton; // @synthesize setButton=_setButton;
@property(retain, nonatomic) SSThemedButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UILabel *timeIntervalLabel; // @synthesize timeIntervalLabel=_timeIntervalLabel;
@property(copy, nonatomic) CDUnknownBlockType fontHandler; // @synthesize fontHandler=_fontHandler;
@property(copy, nonatomic) CDUnknownBlockType moreHandler; // @synthesize moreHandler=_moreHandler;
@property(copy, nonatomic) CDUnknownBlockType settingHandler; // @synthesize settingHandler=_settingHandler;
@property(copy, nonatomic) CDUnknownBlockType autoSaveTimeIntervalHandler; // @synthesize autoSaveTimeIntervalHandler=_autoSaveTimeIntervalHandler;
@property(copy, nonatomic) CDUnknownBlockType hideKeyboardHandler; // @synthesize hideKeyboardHandler=_hideKeyboardHandler;
@property(copy, nonatomic) CDUnknownBlockType addVideoHandler; // @synthesize addVideoHandler=_addVideoHandler;
@property(copy, nonatomic) CDUnknownBlockType addPictureHandler; // @synthesize addPictureHandler=_addPictureHandler;
- (void).cxx_destruct;
- (void)timeintervalChange:(id)arg1;
- (void)ajustInputAccessoryView:(_Bool)arg1;
- (void)rotationButton:(id)arg1;
- (void)resetAllButtonUnselected;
- (void)openFontPage:(id)arg1;
- (void)openMorePage:(id)arg1;
- (void)openSettingPage:(id)arg1;
- (void)addVideo;
- (void)addPhoto;
- (void)hidekeyboard;
- (void)createDebugSliderCompnent:(id)arg1;
- (void)createComponent;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

