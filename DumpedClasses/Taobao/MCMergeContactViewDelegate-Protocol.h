//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSIndexPath, UITableView, UITableViewCell, UIView;

@protocol MCMergeContactViewDelegate <NSObject>
- (void)tableView:(UITableView *)arg1 didSelectRowAtIndexPath:(NSIndexPath *)arg2;
- (NSArray *)tableView:(UITableView *)arg1 editActionsForRowAtIndexPath:(NSIndexPath *)arg2;
- (double)tableView:(UITableView *)arg1 heightForRowAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)tableView:(UITableView *)arg1 canEditRowAtIndexPath:(NSIndexPath *)arg2;
- (UITableViewCell *)tableView:(UITableView *)arg1 cellForRowAtIndexPath:(NSIndexPath *)arg2;
- (long long)tableView:(UITableView *)arg1 numberOfRowsInSection:(long long)arg2;
- (UIView *)tableFooterViewForTableView:(UITableView *)arg1;
- (UIView *)tableHeaderViewForTableView:(UITableView *)arg1;
@end
