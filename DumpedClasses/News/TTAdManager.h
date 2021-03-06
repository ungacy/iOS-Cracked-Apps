//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TTAdPhotoAlbumManagerDelegate.h"

@class NSString, TTADRefreshManager, TTAdAppDownloadManager, TTAdCallManager, TTAdCanvasManager, TTAdPhotoAlbumManager, TTAdShareManager, TTAdVideoManager, TTAdWebResPreloadManager;

@interface TTAdManager : NSObject <TTAdPhotoAlbumManagerDelegate>
{
    id <TTAdManagerDelegate> _delegate;
    TTAdPhotoAlbumManager *_photoAlbumManager;
    TTAdVideoManager *_videoManager;
    TTAdCallManager *_callManager;
    TTAdShareManager *_shareManager;
    TTADRefreshManager *_refreshManager;
    TTAdWebResPreloadManager *_preloadManager;
    TTAdCanvasManager *_canvasManager;
    TTAdAppDownloadManager *_appDownloadManager;
}

+ (void)app_downloadApp:(id)arg1;
+ (void)call_callWithNumber:(id)arg1;
+ (void)realTimeRemoveAd:(id)arg1;
+ (void)clearAllCache;
+ (void)trackWithEvents:(id)arg1;
+ (void)trackWithTag:(id)arg1 label:(id)arg2 value:(id)arg3 extraDic:(id)arg4;
+ (void)monitor_trackServiceCount:(id)arg1 adId:(id)arg2 logExtra:(id)arg3 extValue:(id)arg4;
+ (void)monitor_trackService:(id)arg1 status:(unsigned long long)arg2 extra:(id)arg3;
+ (void)monitor_trackService:(id)arg1 value:(id)arg2 extra:(id)arg3;
+ (void)share_realTimeRemoveAd:(id)arg1;
+ (void)share_clearShareCache;
+ (void)share_closeShareAd:(_Bool)arg1;
+ (id)share_createShareViewFrame:(struct CGRect)arg1;
+ (id)sharedManager;
@property(retain, nonatomic) TTAdAppDownloadManager *appDownloadManager; // @synthesize appDownloadManager=_appDownloadManager;
@property(retain, nonatomic) TTAdCanvasManager *canvasManager; // @synthesize canvasManager=_canvasManager;
@property(retain, nonatomic) TTAdWebResPreloadManager *preloadManager; // @synthesize preloadManager=_preloadManager;
@property(retain, nonatomic) TTADRefreshManager *refreshManager; // @synthesize refreshManager=_refreshManager;
@property(retain, nonatomic) TTAdShareManager *shareManager; // @synthesize shareManager=_shareManager;
@property(retain, nonatomic) TTAdCallManager *callManager; // @synthesize callManager=_callManager;
@property(retain, nonatomic) TTAdVideoManager *videoManager; // @synthesize videoManager=_videoManager;
@property(retain, nonatomic) TTAdPhotoAlbumManager *photoAlbumManager; // @synthesize photoAlbumManager=_photoAlbumManager;
@property(nonatomic) __weak id <TTAdManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)preloadWebRes_finishCaptureThePage;
- (_Bool)preloadWebRes_hasPreloadResource:(id)arg1;
- (long long)preloadWebRes_matchNumInWebView;
- (long long)preloadWebRes_preloadNumInWebView;
- (long long)preloadWebRes_preloadTotalAdID:(id)arg1;
- (_Bool)preloadWebRes_isFirstEnterPageAdid:(id)arg1;
- (_Bool)preloadWebRes_isWebTargetPreload;
- (void)preloadWebRes_preloadResource:(id)arg1 article:(id)arg2;
- (void)app_preloadAppStoreAppleId:(id)arg1;
- (void)app_preloadAppStoreOrderData:(id)arg1;
- (void)call_callAdModel:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)call_callAdModel:(id)arg1;
- (void)canvas_trackCanvasTag:(id)arg1 label:(id)arg2 dict:(id)arg3;
- (void)canvas_canvasCall;
- (void)canvas_showCanvasView:(id)arg1 cell:(id)arg2;
- (void)canvas_trackRN:(id)arg1;
- (void)canvas_requestCanvasData;
- (void)refresh_configureDefaultAnimateViewForRefreshView:(id)arg1;
- (void)refresh_configureAnimateViewWithChannelId:(id)arg1 WithRefreshView:(id)arg2 WithRefreshAnimateView:(id)arg3;
- (id)refresh_createAnimateViewWithFrame:(struct CGRect)arg1 WithLoadingText:(id)arg2 WithPullLoadingHeight:(double)arg3;
- (void)refresh_setRefreshManagerLauchType:(unsigned long long)arg1;
- (void)refresh_requestRefreshAdData;
- (void)share_hideInPage;
- (void)share_showInAdPage:(id)arg1 groupId:(id)arg2;
- (void)share_showInAdPage:(id)arg1 article:(id)arg2;
- (void)share_requestShareAdData;
- (_Bool)video_detailBannerIsUnityAd:(id)arg1;
- (id)video_detailBannerPaddingView:(double)arg1 topLineShow:(_Bool)arg2 bottomLineShow:(_Bool)arg3;
- (_Bool)video_isInVideoDetailPageTongTou;
- (_Bool)video_isInVideoDetailPage;
- (void)video_enteredVideoDetailPage:(_Bool)arg1;
- (void)video_relateHandleAction:(id)arg1;
- (void)video_relateTrackAdShow:(id)arg1;
- (id)video_relateRigthImageView:(id)arg1 top:(double)arg2 width:(double)arg3 successBlock:(CDUnknownBlockType)arg4;
- (_Bool)video_relateIsSmallPicAdCell:(id)arg1;
- (_Bool)video_relateIsSmallPicAdValid:(id)arg1;
- (void)photoAlbum_trackDownloadClickToOpenApp;
- (void)photoAlbum_trackDownloadClickToAppstore;
- (void)photoAlbum_trackDownloadClick;
- (void)photoAlbum_trackAdImageClick;
- (void)photoAlbum_trackAdImageFinishLoad;
- (void)photoAlbum_trackAdImageShow;
- (void)photoAlbum_adCreativeButtonClickWithModel:(id)arg1 WithResponder:(id)arg2;
- (void)photoAlbum_adImageClickWithResponder:(id)arg1;
- (id)photoAlbum_cellForPhotoDetailAd;
- (_Bool)photoAlbum_hasAd;
- (id)photoAlbum_getImagePageTitle;
- (id)photoAlbum_getAdImage;
- (_Bool)photoAlbum_hasFinishDownloadAdImage;
- (int)photoAlbum_getAdDisplayType;
- (id)photoAlbum_AdModel;
- (void)photoAlbum_downloadAdImageFinished;
- (void)photoAlbum_fetchAdModel:(id)arg1;
- (void)photoAlbum_isNativePhotoAlbum:(_Bool)arg1;
- (void)requestAdDataAppLaunch;
- (long long)connectionType;
- (void)weakUpURLTracker;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

