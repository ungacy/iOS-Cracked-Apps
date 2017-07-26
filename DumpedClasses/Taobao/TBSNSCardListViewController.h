//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, NSTimer, TBModelStatusHandler, TBModelStatusInfo, TBSNSCardListDataContainer, TBSNSCardListDataMapper, TBSNSCardListDataRequest, TBSNSCardListParam, UICardListView, UITableView;

@interface TBSNSCardListViewController : TBViewController <UITableViewDataSource, UITableViewDelegate>
{
    double oldTime;
    double oldOffset;
    long long scrollOrientation;
    long long lastRow;
    _Bool _templateLoaded;
    _Bool _isRendingNetData;
    _Bool _isNeedEmptyView;
    _Bool _justDoManulRefresh;
    int _currentPage;
    unsigned long long _state;
    TBSNSCardListDataRequest *_dataRequset;
    TBSNSCardListDataContainer *_dataContainer;
    TBSNSCardListParam *_cardListParam;
    TBSNSCardListDataMapper *_dataMapper;
    UICardListView *_cardListView;
    UITableView *_tableView;
    id <TBSNSCardListDelegate> _delegate;
    TBModelStatusHandler *_emptyStatusHandler;
    TBModelStatusInfo *_emptyStatusInfo;
    CDUnknownBlockType _selectorForEmptyBlock;
    CDUnknownBlockType _dfleFirstPageFinishBlock;
    NSTimer *_myLoadingTimer;
    double _scrollingSpeed;
    struct UIEdgeInsets _contentInset;
}

@property(nonatomic) _Bool justDoManulRefresh; // @synthesize justDoManulRefresh=_justDoManulRefresh;
@property(nonatomic) double scrollingSpeed; // @synthesize scrollingSpeed=_scrollingSpeed;
@property(nonatomic) NSTimer *myLoadingTimer; // @synthesize myLoadingTimer=_myLoadingTimer;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(copy, nonatomic) CDUnknownBlockType dfleFirstPageFinishBlock; // @synthesize dfleFirstPageFinishBlock=_dfleFirstPageFinishBlock;
@property(copy, nonatomic) CDUnknownBlockType selectorForEmptyBlock; // @synthesize selectorForEmptyBlock=_selectorForEmptyBlock;
@property(retain, nonatomic) TBModelStatusInfo *emptyStatusInfo; // @synthesize emptyStatusInfo=_emptyStatusInfo;
@property(retain, nonatomic) TBModelStatusHandler *emptyStatusHandler; // @synthesize emptyStatusHandler=_emptyStatusHandler;
@property(nonatomic) _Bool isNeedEmptyView; // @synthesize isNeedEmptyView=_isNeedEmptyView;
@property(nonatomic) _Bool isRendingNetData; // @synthesize isRendingNetData=_isRendingNetData;
@property(nonatomic) int currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) __weak id <TBSNSCardListDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UICardListView *cardListView; // @synthesize cardListView=_cardListView;
@property(retain, nonatomic) TBSNSCardListDataMapper *dataMapper; // @synthesize dataMapper=_dataMapper;
@property(retain, nonatomic) TBSNSCardListParam *cardListParam; // @synthesize cardListParam=_cardListParam;
@property(retain, nonatomic) TBSNSCardListDataContainer *dataContainer; // @synthesize dataContainer=_dataContainer;
@property(retain, nonatomic) TBSNSCardListDataRequest *dataRequset; // @synthesize dataRequset=_dataRequset;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (id)cacheKeyForAPI:(id)arg1;
- (void)itemCount:(long long)arg1 newItemCount:(long long)arg2 state:(long long)arg3 error:(id)arg4 forAPI:(id)arg5;
- (id)serviceParameters:(long long)arg1 forService:(id)arg2;
- (Class)cardListItemClass;
- (id)apiVersion;
- (id)apiString;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)ItemSelected:(int)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)cardUICellForRowAtIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)autoPullRefreshWithState:(unsigned long long)arg1;
- (void)nextPageNetData;
- (void)resetNetData;
- (void)refreshNetData;
- (void)reloadNetData;
- (void)loadCacheData;
- (_Bool)checkEmpty;
- (void)serviceFinish:(_Bool)arg1 withError:(id)arg2;
- (void)scrollToTop;
- (void)reloadData;
- (id)getValueWithParams:(id)arg1;
- (void)refreshVisibleCells;
- (void)refreshCell:(long long)arg1;
- (_Bool)canStartToLoadResource;
- (id)getService;
- (_Bool)isListScrolling;
- (_Bool)isListScrollEnabled;
- (void)enableListScroll:(_Bool)arg1;
- (id)getCellByIndex:(long long)arg1;
- (void)setListContentInset:(struct UIEdgeInsets)arg1;
- (id)getLastItem;
- (id)getFirstItem;
- (id)getDataAtIndex:(int)arg1;
- (int)getDataCount;
- (void)dealloc;
- (id)createCardListWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
