//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIActivityIndicatorView, UIImageView, UILabel, XYBubbleView;

@interface XYBubbleMessageCell : UITableViewCell
{
    XYBubbleView *_bubbleView;
    UILabel *_timestampLabel;
    UIImageView *_avatarImageView;
    UILabel *_subtitleLabel;
    UIActivityIndicatorView *_sendingIndicator;
}

+ (double)neededHeightForBubbleMessageCellWithMessage:(id)arg1 displaysAvatar:(_Bool)arg2 displaysTimestamp:(_Bool)arg3;
@property(retain, nonatomic) UIActivityIndicatorView *sendingIndicator; // @synthesize sendingIndicator=_sendingIndicator;
@property(readonly, nonatomic) __weak UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) __weak UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(readonly, nonatomic) __weak UILabel *timestampLabel; // @synthesize timestampLabel=_timestampLabel;
@property(readonly, nonatomic) __weak XYBubbleView *bubbleView; // @synthesize bubbleView=_bubbleView;
- (void).cxx_destruct;
- (void)handleMenuWillShowNotification:(id)arg1;
- (void)handleMenuWillHideNotification:(id)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (void)copy:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)layoutSubviews;
- (unsigned long long)messageType;
- (void)setSendingStatus:(unsigned long long)arg1;
- (void)setAvatarImageView:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithBubbleType:(unsigned long long)arg1 bubbleImageView:(id)arg2 message:(id)arg3 displaysTimestamp:(_Bool)arg4 hasAvatar:(_Bool)arg5 reuseIdentifier:(id)arg6;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)configureWithType:(unsigned long long)arg1 bubbleImageView:(id)arg2 message:(id)arg3 displaysTimestamp:(_Bool)arg4 avatar:(_Bool)arg5;
- (void)configureSubtitleLabelForMessageType:(unsigned long long)arg1;
- (void)configureAvatarImageView:(id)arg1 forMessageType:(unsigned long long)arg2;
- (void)configureTimestampLabel;
- (void)setup;

@end
