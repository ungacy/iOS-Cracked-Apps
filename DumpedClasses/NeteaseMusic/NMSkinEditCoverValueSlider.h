//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NMCustomSlider, UILabel;

@interface NMSkinEditCoverValueSlider : UIControl
{
    UILabel *_titleLabel;
    NMCustomSlider *_valueSlider;
}

@property(readonly, nonatomic) NMCustomSlider *valueSlider; // @synthesize valueSlider=_valueSlider;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setValueWithoutNotify:(float)arg1;
@property(nonatomic) float value;
- (void)valueChanged:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2;

@end

