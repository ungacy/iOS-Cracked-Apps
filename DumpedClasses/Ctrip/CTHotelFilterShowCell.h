//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTHotelBaseCell.h"

@class CTHotelDeleteFilterCustomeView, UILabel;

@interface CTHotelFilterShowCell : CTHotelBaseCell
{
    id <CTHotelDeleteFilterCustomeViewDelegate> _delegate;
    CTHotelDeleteFilterCustomeView *_filterView;
    UILabel *_txtLabel;
    UILabel *_iconLabel;
}

+ (double)getCellHeight:(id)arg1 hasRoom:(_Bool)arg2;
@property(retain, nonatomic) UILabel *iconLabel; // @synthesize iconLabel=_iconLabel;
@property(retain, nonatomic) UILabel *txtLabel; // @synthesize txtLabel=_txtLabel;
@property(retain, nonatomic) CTHotelDeleteFilterCustomeView *filterView; // @synthesize filterView=_filterView;
@property(nonatomic) __weak id <CTHotelDeleteFilterCustomeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setData:(id)arg1 hasRoom:(_Bool)arg2;
- (void)initView;

@end
