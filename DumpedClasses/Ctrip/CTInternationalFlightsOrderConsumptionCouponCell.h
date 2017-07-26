//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCustomeGroupTableViewCell.h"

@class CTAutoResizeLabel, NSLayoutConstraint, UIButton, UIImageView, UILabel, UISwitch;

@interface CTInternationalFlightsOrderConsumptionCouponCell : CTCustomeGroupTableViewCell
{
    id <CTInternationalFlightsOrderConsumptionCouponCellDelegate> _delegate;
    CTAutoResizeLabel *_labelConsumptionType;
    CTAutoResizeLabel *_labelConsumptionPrice;
    UISwitch *_switchConsumption;
    UIButton *_buttonConsumption;
    CTAutoResizeLabel *_labelWarningMessage;
    UIImageView *_imageConsumption;
    NSLayoutConstraint *_switchRightConstraint;
    NSLayoutConstraint *_warningLabelHeightConstraint;
    NSLayoutConstraint *_warningLabelTrailingConstraint;
    UILabel *_labelTitle;
    NSLayoutConstraint *_cnsIconLead;
    NSLayoutConstraint *_cnsLabelConsumptionTypeWidth;
}

+ (double)setupCouponCell:(id)arg1 withModel:(id)arg2 isUsedCoupon:(_Bool)arg3;
@property(nonatomic) __weak NSLayoutConstraint *cnsLabelConsumptionTypeWidth; // @synthesize cnsLabelConsumptionTypeWidth=_cnsLabelConsumptionTypeWidth;
@property(nonatomic) __weak NSLayoutConstraint *cnsIconLead; // @synthesize cnsIconLead=_cnsIconLead;
@property(retain, nonatomic) UILabel *labelTitle; // @synthesize labelTitle=_labelTitle;
@property(retain, nonatomic) NSLayoutConstraint *warningLabelTrailingConstraint; // @synthesize warningLabelTrailingConstraint=_warningLabelTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *warningLabelHeightConstraint; // @synthesize warningLabelHeightConstraint=_warningLabelHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *switchRightConstraint; // @synthesize switchRightConstraint=_switchRightConstraint;
@property(nonatomic) __weak UIImageView *imageConsumption; // @synthesize imageConsumption=_imageConsumption;
@property(nonatomic) __weak CTAutoResizeLabel *labelWarningMessage; // @synthesize labelWarningMessage=_labelWarningMessage;
@property(nonatomic) __weak UIButton *buttonConsumption; // @synthesize buttonConsumption=_buttonConsumption;
@property(nonatomic) __weak UISwitch *switchConsumption; // @synthesize switchConsumption=_switchConsumption;
@property(nonatomic) __weak CTAutoResizeLabel *labelConsumptionPrice; // @synthesize labelConsumptionPrice=_labelConsumptionPrice;
@property(nonatomic) __weak CTAutoResizeLabel *labelConsumptionType; // @synthesize labelConsumptionType=_labelConsumptionType;
@property(nonatomic) __weak id <CTInternationalFlightsOrderConsumptionCouponCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showHowToUseCoupon:(id)arg1;
- (void)checkOrUncheckUseConsumptionCoupon:(id)arg1;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
