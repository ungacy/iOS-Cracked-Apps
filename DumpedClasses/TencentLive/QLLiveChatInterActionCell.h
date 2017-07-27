//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLLiveChatBaseCell.h"

#import "QLLiveChatTreeCellDelegate.h"

@class NSString, QLLiveChatInterActionView, QLRichLabel;

@interface QLLiveChatInterActionCell : QLLiveChatBaseCell <QLLiveChatTreeCellDelegate>
{
    QLRichLabel *_contentLable;
    QLLiveChatInterActionView *_actionView;
}

+ (double)heightOfSubViewWithBaseInfo:(id)arg1 contentLines:(long long)arg2;
@property(retain, nonatomic) QLLiveChatInterActionView *actionView; // @synthesize actionView=_actionView;
@property(retain, nonatomic) QLRichLabel *contentLable; // @synthesize contentLable=_contentLable;
- (void).cxx_destruct;
- (void)refreshInterfaceUI;
- (void)setObject:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)resetCell;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
