//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UserSummaryTableHeaderViewCustom.h"

#import "CAAnimationDelegate.h"

@class NSArray, NSString, UIImage, UIImageView, UIScrollView, UIView;

@interface UserSummaryTableHeaderViewGameHonour : UserSummaryTableHeaderViewCustom <CAAnimationDelegate>
{
    UIScrollView *_honourScrollView;
    UIImageView *_myHonourBgView;
    UIView *_honourContainer;
    UIImageView *_honourImgeView;
    UIImageView *_addIcon;
    UIView *_userInfoBgView;
    int honourCount;
    int shineAnimationCount;
    UIImage *_honourImage;
    NSArray *_shineFrames;
}

@property(retain, nonatomic) NSArray *shineFrames; // @synthesize shineFrames=_shineFrames;
@property(retain, nonatomic) UIImage *honourImage; // @synthesize honourImage=_honourImage;
- (void)jumpToAddHonour:(id)arg1;
- (int)getAllHeight;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)playHonourShineAnimation;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)layoutView;
- (void)updateAllData:(id)arg1;
- (void)dealloc;
- (id)initWithAllData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

