//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class DRCImageView, UILabel;

@interface DRCFollowWechatAlertCustomView : UIView
{
    UILabel *_titleLabel;
    DRCImageView *_iconImageView;
    UILabel *_subTitleLabel;
}

@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) DRCImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (double)customViewHeight;
- (void)setupConstraints;
- (id)initWithWechatOfficialAccountName:(id)arg1 andIconImageUrl:(id)arg2;

@end
