//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTTableView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, UILabel;

@interface CTTourPrivateTableView : CTTableView <UITableViewDelegate, UITableViewDataSource>
{
    id <CTTourPrivateDelegate> _cttourPrivateDelegate;
    NSMutableArray *_dataArray;
    NSString *_titleName;
    UILabel *_titleLabel;
    NSMutableArray *_logModelArray;
}

@property(retain, nonatomic) NSMutableArray *logModelArray; // @synthesize logModelArray=_logModelArray;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *titleName; // @synthesize titleName=_titleName;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(nonatomic) __weak id <CTTourPrivateDelegate> cttourPrivateDelegate; // @synthesize cttourPrivateDelegate=_cttourPrivateDelegate;
- (void).cxx_destruct;
- (void)exposureLogRouteLineInfo:(double)arg1;
- (void)constructLogModel;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setSelf;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

