//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PPChatHeadIconMessageCell.h"

#import "TTTAttributedLabelDelegate.h"

@class NSString;

@interface PPChatTextMessageCell : PPChatHeadIconMessageCell <TTTAttributedLabelDelegate>
{
}

+ (double)cellHeightForData:(id)arg1 ofMessage:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)setContentViewProperty;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

