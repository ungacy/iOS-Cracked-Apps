//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KKMediaRootViewController, NSIndexPath, NSString, QLSprayContext, QLSprayPlayerUIItem, UIView, UIView<QLSprayPlayerStatusInfoModelDelegate>;

@interface QLSprayPlayerStatusInfoModel : NSObject
{
    UIView<QLSprayPlayerStatusInfoModelDelegate> *_superSprayView;
    UIView *_volumeButtonView;
    _Bool _playing;
    UIView *_blackBackgroundView;
    NSIndexPath *removeCellPlayerViewAtIndexPath;
    _Bool isRemoveCellPlayerView;
    _Bool _enterBackgroundWhilePlaying;
    _Bool _userPauseBeforeClose;
    _Bool _shouldNotAutoPlay;
    _Bool _useP2PToPlay;
    _Bool _hiddenStarThemeUI;
    _Bool _needCancelCleanAsset;
    _Bool _useMuteModelFlag;
    _Bool _isShowVolumeButtonView;
    _Bool _isPlayingLiveComingWhenStatusIsLiving;
    _Bool _forceUseDefaultLoadingView;
    NSString *_lastVidWhenEnterBackground;
    QLSprayPlayerUIItem *_sPlayerUIItem;
    KKMediaRootViewController *_mediaPlayer;
    QLSprayContext *_sprayContext;
    unsigned long long _currentPlayerCloseType;
}

@property(nonatomic) _Bool forceUseDefaultLoadingView; // @synthesize forceUseDefaultLoadingView=_forceUseDefaultLoadingView;
@property(nonatomic) _Bool isPlayingLiveComingWhenStatusIsLiving; // @synthesize isPlayingLiveComingWhenStatusIsLiving=_isPlayingLiveComingWhenStatusIsLiving;
@property(nonatomic) __weak UIView<QLSprayPlayerStatusInfoModelDelegate> *superSprayView; // @synthesize superSprayView=_superSprayView;
@property(readonly, nonatomic) unsigned long long currentPlayerCloseType; // @synthesize currentPlayerCloseType=_currentPlayerCloseType;
@property(nonatomic) _Bool isShowVolumeButtonView; // @synthesize isShowVolumeButtonView=_isShowVolumeButtonView;
@property(nonatomic) __weak QLSprayContext *sprayContext; // @synthesize sprayContext=_sprayContext;
@property(nonatomic) __weak KKMediaRootViewController *mediaPlayer; // @synthesize mediaPlayer=_mediaPlayer;
@property(nonatomic) _Bool useMuteModelFlag; // @synthesize useMuteModelFlag=_useMuteModelFlag;
@property(nonatomic) _Bool needCancelCleanAsset; // @synthesize needCancelCleanAsset=_needCancelCleanAsset;
@property(nonatomic) _Bool hiddenStarThemeUI; // @synthesize hiddenStarThemeUI=_hiddenStarThemeUI;
@property(retain, nonatomic) QLSprayPlayerUIItem *sPlayerUIItem; // @synthesize sPlayerUIItem=_sPlayerUIItem;
@property(nonatomic) _Bool useP2PToPlay; // @synthesize useP2PToPlay=_useP2PToPlay;
@property(nonatomic) _Bool shouldNotAutoPlay; // @synthesize shouldNotAutoPlay=_shouldNotAutoPlay;
@property(copy, nonatomic) NSString *lastVidWhenEnterBackground; // @synthesize lastVidWhenEnterBackground=_lastVidWhenEnterBackground;
@property(readonly, nonatomic, getter=isEnterBackgroundWhilePlaying) _Bool enterBackgroundWhilePlaying; // @synthesize enterBackgroundWhilePlaying=_enterBackgroundWhilePlaying;
- (void).cxx_destruct;
- (void)handlePlayerDidStartPlay;
- (void)doClosePlayer:(_Bool)arg1;
- (void)removePropertyListener;
- (void)hidePlayer;
- (_Bool)isPlayerShown;
- (_Bool)isFullScreen;
- (void)setVolumeButtonStyle:(int)arg1;
- (void)showVolumeButtonViewIfCan;
- (_Bool)needCancelKKControlMediaPlayOrPause:(id)arg1;
- (void)setPlayerMuted:(_Bool)arg1;
- (void)routeChange:(id)arg1;
- (void)closeSprayPlayerByCloseType:(unsigned long long)arg1;
- (void)videoPlayToEnd;
- (void)playVideo;
- (void)beforePlayVideoWhenClosePlayer;
- (void)preloadVideoCache;
- (_Bool)isPlayerViewControllerOnView:(id)arg1;
- (void)updatePlayerSuperView:(id)arg1 withVolumeButtonView:(id)arg2;
- (void)updateBlackBackgroundViewifNeeded;
- (void)setBlackBackgroundHidden:(_Bool)arg1;
- (void)dealloc;
- (id)initWithMediaRootViewController:(id)arg1;
- (_Bool)isenterBackgroundWhilePlaying;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
@property(readonly, nonatomic, getter=isPlayingSprayVideo) _Bool playingSprayVideo;
- (id)init;
- (void)spray_resetPlayerViewsIndexPath;
- (_Bool)shouldAddPlayerView;
- (void)spray_addPlayerViewsWithIndexPath:(id)arg1 onDisplayingCell:(id)arg2;
- (void)spray_removePlayerViewsWithIndexPath:(id)arg1 onDisplayingCell:(id)arg2;
- (void)spray_removePlayerViews;
- (void)addPlayerViews;
- (void)removePlayerViews;

@end
