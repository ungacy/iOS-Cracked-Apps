//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, UITableView, UIViewController;

@interface DDIMSessionDataSource : NSObject <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _hasHistroyList;
    id <DDIMSessionDataSourceDelegate> _delegate;
    NSMutableArray *_sessionArray;
    UITableView *_currentTableView;
    UIViewController *_container;
}

@property(nonatomic) _Bool hasHistroyList; // @synthesize hasHistroyList=_hasHistroyList;
@property(nonatomic) __weak UIViewController *container; // @synthesize container=_container;
@property(nonatomic) __weak UITableView *currentTableView; // @synthesize currentTableView=_currentTableView;
@property(retain, nonatomic) NSMutableArray *sessionArray; // @synthesize sessionArray=_sessionArray;
@property(nonatomic) __weak id <DDIMSessionDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)dealloc;
- (void)showNoSessionTip:(_Bool)arg1;
- (void)getHistorySessionListWithCallback:(CDUnknownBlockType)arg1;
- (void)getNormalSessionListWithOption:(unsigned long long)arg1 withCallback:(CDUnknownBlockType)arg2;
- (id)initWithContainer:(id)arg1 tableView:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
