//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UILabel, UIView;

@interface FMLogisticTraceCell : UITableViewCell
{
    UILabel *_messageLabel;
    UILabel *_timeLabel;
    UIView *_pointImageView;
    UIView *_timeLineView;
    UIView *_LineView;
}

+ (float)cellHeight:(id)arg1;
- (void).cxx_destruct;
- (struct CGSize)messageSize;
- (void)layoutLineView:(unsigned long long)arg1 height:(float)arg2 count:(unsigned long long)arg3;
- (void)setLogisticDO:(id)arg1 indexPath:(id)arg2 count:(unsigned long long)arg3;
- (id)lineView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

