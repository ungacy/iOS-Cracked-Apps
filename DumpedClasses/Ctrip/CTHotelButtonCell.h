//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTHotelBaseCell.h"

@class UIButton;

@interface CTHotelButtonCell : CTHotelBaseCell
{
    _Bool _isHidden;
    UIButton *_cellBtn;
    double _rightPadding;
}

+ (double)getCellHeight;
@property(nonatomic) _Bool isHidden; // @synthesize isHidden=_isHidden;
@property(nonatomic) double rightPadding; // @synthesize rightPadding=_rightPadding;
@property(retain, nonatomic) UIButton *cellBtn; // @synthesize cellBtn=_cellBtn;
- (void).cxx_destruct;
- (void)cellBtnAction:(id)arg1;
- (void)initView;

@end
