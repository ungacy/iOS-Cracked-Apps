//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "KFScrollPageManagerDelegate.h"
#import "KTVTableViewDataSource.h"
#import "KTVTableViewDelegate.h"
#import "TabViewDelegate.h"

@class KFScrollPageManager, KTVCommonTableViewRE, NSMutableArray, NSString, TabView, UITableViewCell;

@interface KTVTableSubTablesView : UIView <KTVTableViewDataSource, KTVTableViewDelegate, TabViewDelegate, KFScrollPageManagerDelegate>
{
    UITableViewCell *lastCell;
    TabView *sectionHeaderView;
    double contentOffset[10];
    float sectionContentOffset;
    KFScrollPageManager *scrollContent;
    NSMutableArray *netFailArr;
    NSMutableArray *noDataArr;
    NSMutableArray *scrollViewArr;
    NSMutableArray *hasLoadMoreArr;
    int _selectType;
    id <KTVTableSubTablesViewDataSource> _dataSource;
    id <KTVTableSubTablesViewDelegate> _delegate;
    KTVCommonTableViewRE *_tableView;
    UIView *_tableHeadView;
    NSMutableArray *_subTables;
}

@property(readonly, nonatomic) NSMutableArray *subTables; // @synthesize subTables=_subTables;
@property(readonly, nonatomic) int selectType; // @synthesize selectType=_selectType;
@property(retain, nonatomic) UIView *tableHeadView; // @synthesize tableHeadView=_tableHeadView;
@property(readonly, nonatomic) KTVCommonTableViewRE *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <KTVTableSubTablesViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <KTVTableSubTablesViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)ktvTableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)ktvTableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)ktvScrollViewWillBeginDragging:(id)arg1;
- (void)ktvTableViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (double)ktvTableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)ktvTableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)ktvTableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)ktvTableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)ktvTableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)pageSrollview;
- (long long)currentPage;
- (long long)totalPageCount;
- (void)scrollPageManager:(id)arg1 willShowViewAtIndex:(long long)arg2;
- (void)ktvTableSubTablesDidSelectIndex:(long long)arg1;
- (void)showIndex:(int)arg1;
- (void)btnClicked:(long long)arg1;
- (void)ktvTableView:(id)arg1 didScroll:(float)arg2;
- (void)ktvTableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)ktvTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)ktvTableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)ktvTableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)ktvTableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)ktvTableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)ktvTableView:(id)arg1 startAsyncRequestData:(_Bool)arg2;
- (void)getListData:(id)arg1;
- (void)setNoDataView:(id)arg1 index:(int)arg2;
- (void)setNetFailView:(id)arg1 index:(int)arg2;
- (void)clearNoDataWithIndex:(int)arg1;
- (void)clearNetFailWithIndex:(int)arg1;
- (void)clearNetFailAndNoDataAnIndex:(int)arg1;
- (void)setSubTableView:(id)arg1 scrollView:(id)arg2 anIndex:(int)arg3;
- (id)getNoDataViewWithIndex:(int)arg1;
- (void)setNoDataAnIndex:(int)arg1;
- (void)setNetFailAnIndex:(int)arg1;
- (void)setLoadMore:(_Bool)arg1 index:(int)arg2;
- (void)reloadDataAnIndex:(int)arg1;
- (void)reloadData;
- (id)createSubTable:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1 subTableTitles:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 subTableTitles:(id)arg2 haveReflashHead:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

