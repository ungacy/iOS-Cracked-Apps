//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVBaseViewController.h"

#import "KTVOpusPlayShowPlaneDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class KGDefaultTopView, KGThemeImageView, KTVInviteReceiveModel, KTVOpusPlayShowPlane, NSString, ReceiveBottomView, ReceiveInfoView, UIAlertView, UIButton, UIImageView, UIScrollView, UIView;

@interface KTVInviteReceiveVC : KTVBaseViewController <KTVOpusPlayShowPlaneDelegate, UIScrollViewDelegate, UIAlertViewDelegate>
{
    _Bool isFirstInView;
    _Bool isInThisView;
    KTVOpusPlayShowPlane *controlView;
    ReceiveInfoView *receiveInfoView;
    ReceiveBottomView *receiveBottomView;
    UIScrollView *scrollview;
    KGDefaultTopView *_top;
    NSString *opusHashStr;
    UIImageView *waitIcon;
    UIView *rejectView;
    UIView *rejectSecondView;
    UIButton *selectBtn;
    KGThemeImageView *selectImg;
    UIView *receiveSuccessView;
    UIView *rejectSuccessView;
    long long autoReceiveTime;
    UIAlertView *alertview;
    _Bool _isFromInviteMsgPage;
    _Bool _isMySingSong;
    long long _opusId;
    KTVInviteReceiveModel *_listenViewModel;
}

@property(retain, nonatomic) KTVInviteReceiveModel *listenViewModel; // @synthesize listenViewModel=_listenViewModel;
@property(nonatomic) long long opusId; // @synthesize opusId=_opusId;
@property(nonatomic) _Bool isMySingSong; // @synthesize isMySingSong=_isMySingSong;
@property(nonatomic) _Bool isFromInviteMsgPage; // @synthesize isFromInviteMsgPage=_isFromInviteMsgPage;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (long long)showPlayBarWay;
- (void)dealloc;
- (void)playShowPlane:(id)arg1 getPhotosUrlStrComplete:(CDUnknownBlockType)arg2;
- (void)showViewInWindowAnimations:(id)arg1;
- (void)showViewInWindow:(id)arg1;
- (void)createRejectSuccessView;
- (void)createReceiveSuccessView;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)hadReject:(id)arg1;
- (void)hadReceive:(id)arg1;
- (void)selectRejectType:(id)arg1;
- (void)createRejectSecondView;
- (void)createRejectView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)cancelSecondReject;
- (void)sureReject;
- (void)actionReceiveIknow;
- (void)actionRejectIknow;
- (void)actionSure:(id)arg1;
- (void)cancelReject;
- (void)actionReject;
- (void)actionReject:(id)arg1;
- (void)loadLitenKrc:(id)arg1 forSong:(id)arg2;
- (void)setHaveTimeStr;
- (void)setInfoWith:(id)arg1;
- (void)KGUsingControllerState:(int)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

