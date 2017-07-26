//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCustomeGroupTableViewCell.h"

#import "CTHotelOverseaClientItemViewDelegate.h"

@class CTHotelOrderCacheBean, NSMutableArray, NSString, UIButton, UILabel;

@interface CTHotelOrderOverseaClientCell : CTCustomeGroupTableViewCell <CTHotelOverseaClientItemViewDelegate>
{
    id <CTHotelOrderOverseaClientCellDelegate> _delegate;
    CDUnknownBlockType _editBlock;
    UIButton *_explanationButton;
    UILabel *_explanationLabel;
    UILabel *_accessoryLabel;
    NSMutableArray *_clientGroupViewList;
    CTHotelOrderCacheBean *_cacheBean;
}

+ (double)getHeightWithcacheBean:(id)arg1;
@property(nonatomic) __weak CTHotelOrderCacheBean *cacheBean; // @synthesize cacheBean=_cacheBean;
@property(retain, nonatomic) NSMutableArray *clientGroupViewList; // @synthesize clientGroupViewList=_clientGroupViewList;
@property(retain, nonatomic) UILabel *accessoryLabel; // @synthesize accessoryLabel=_accessoryLabel;
@property(retain, nonatomic) UILabel *explanationLabel; // @synthesize explanationLabel=_explanationLabel;
@property(retain, nonatomic) UIButton *explanationButton; // @synthesize explanationButton=_explanationButton;
@property(copy, nonatomic) CDUnknownBlockType editBlock; // @synthesize editBlock=_editBlock;
@property(nonatomic) __weak id <CTHotelOrderOverseaClientCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)hotelOverseaClientItemViewClientChange:(id)arg1 items:(id)arg2;
- (void)hotelOverseaClientItemViewClickClientButton:(id)arg1;
- (void)clickExplanationButton:(id)arg1;
- (void)fillCellWithcacheBean:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
