//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSDictionary, NSLock, TBSCAntiFakeResultModel, TBSDKMTOPServer, UIView, UIViewController<TBWebViewServiceProtocol>;

@interface TBSCAntiFakeViewController : UIViewController
{
    NSDictionary *_dict;
    _Bool _clientVerifySucceed;
    double _loadingViewInitTime;
    _Bool _isRemoteVerifyFinished;
    _Bool _isWebViewLoadFinished;
    TBSDKMTOPServer *_verifyServer;
    UIView *_verifyView;
    UIView *_backView;
    UIView *_circleView;
    NSLock *_lock;
    UIViewController<TBWebViewServiceProtocol> *_webViewController;
    TBSCAntiFakeResultModel *_resultModel;
}

@property(retain, nonatomic) TBSCAntiFakeResultModel *resultModel; // @synthesize resultModel=_resultModel;
@property(nonatomic) _Bool isWebViewLoadFinished; // @synthesize isWebViewLoadFinished=_isWebViewLoadFinished;
@property(nonatomic) _Bool isRemoteVerifyFinished; // @synthesize isRemoteVerifyFinished=_isRemoteVerifyFinished;
@property(retain, nonatomic) UIViewController<TBWebViewServiceProtocol> *webViewController; // @synthesize webViewController=_webViewController;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) UIView *circleView; // @synthesize circleView=_circleView;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) UIView *verifyView; // @synthesize verifyView=_verifyView;
@property(retain, nonatomic) TBSDKMTOPServer *verifyServer; // @synthesize verifyServer=_verifyServer;
- (void).cxx_destruct;
- (id)dataForUserTrack;
- (void)performSelectorAfterShownLoadingView:(SEL)arg1 withObject:(id)arg2;
- (void)showCompatibleLinkWebView:(id)arg1;
- (void)showDetailInfoWebView;
- (void)openDetailInfoWebView;
- (void)showErrorResult;
- (void)showWarningResult:(id)arg1;
- (void)buildCertInfoLabel:(id)arg1;
- (void)showNormalResult:(id)arg1;
- (void)tryShowResultView;
- (void)showRequestFailedView;
- (void)tryLoadDetailInfoWebView;
- (void)startRemoteVerify;
- (void)backItemClicked:(id)arg1;
- (void)setupBackView;
- (void)setupLoadingView;
- (void)releaseWebView;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithDict:(id)arg1 clientVerifySucceed:(_Bool)arg2;

@end
