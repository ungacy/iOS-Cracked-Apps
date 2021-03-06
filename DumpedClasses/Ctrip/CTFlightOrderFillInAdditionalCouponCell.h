//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCustomeGroupTableViewCell.h"

@class NSLayoutConstraint, UIImageView, UILabel, UIView;

@interface CTFlightOrderFillInAdditionalCouponCell : CTCustomeGroupTableViewCell
{
    UILabel *_labelTitle;
    UILabel *_couponTitleLabel;
    NSLayoutConstraint *_couponTitleLabelHeadConstraint;
    UIImageView *_accessoryImageView;
    UIView *_roundView;
    UILabel *_priceUnEnableLabel;
    UIImageView *_flightIconInf;
    UIImageView *_rightArrow;
}

@property(nonatomic) __weak UIImageView *rightArrow; // @synthesize rightArrow=_rightArrow;
@property(retain, nonatomic) UIImageView *flightIconInf; // @synthesize flightIconInf=_flightIconInf;
@property(nonatomic) __weak UILabel *priceUnEnableLabel; // @synthesize priceUnEnableLabel=_priceUnEnableLabel;
@property(nonatomic) __weak UIView *roundView; // @synthesize roundView=_roundView;
@property(retain, nonatomic) UIImageView *accessoryImageView; // @synthesize accessoryImageView=_accessoryImageView;
@property(nonatomic) __weak NSLayoutConstraint *couponTitleLabelHeadConstraint; // @synthesize couponTitleLabelHeadConstraint=_couponTitleLabelHeadConstraint;
@property(retain, nonatomic) UILabel *couponTitleLabel; // @synthesize couponTitleLabel=_couponTitleLabel;
@property(retain, nonatomic) UILabel *labelTitle; // @synthesize labelTitle=_labelTitle;
- (void).cxx_destruct;
- (void)setShowWariningView:(_Bool)arg1;
- (void)setCouponEditable:(_Bool)arg1;
- (void)setCouponTitle:(id)arg1;
- (void)awakeFromNib;

@end

