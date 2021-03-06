//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class QLHTMLFontLabel, QLSImageView, UIButton, UILabel;

@interface QLHollywoodTitleView : UIView
{
    int _vipState;
    QLSImageView *_headView;
    QLSImageView *_vipView;
    QLSImageView *_loginTypeView;
    QLHTMLFontLabel *_titleLabel;
    UILabel *_titleLabel2;
    UIButton *_openVIPBtn;
    UIButton *_searchBtn;
}

@property(nonatomic) int vipState; // @synthesize vipState=_vipState;
@property(retain, nonatomic) UIButton *searchBtn; // @synthesize searchBtn=_searchBtn;
@property(retain, nonatomic) UIButton *openVIPBtn; // @synthesize openVIPBtn=_openVIPBtn;
@property(retain, nonatomic) UILabel *titleLabel2; // @synthesize titleLabel2=_titleLabel2;
@property(retain, nonatomic) QLHTMLFontLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) QLSImageView *loginTypeView; // @synthesize loginTypeView=_loginTypeView;
@property(retain, nonatomic) QLSImageView *vipView; // @synthesize vipView=_vipView;
@property(retain, nonatomic) QLSImageView *headView; // @synthesize headView=_headView;
- (void).cxx_destruct;
- (void)scrollToTopPosition;
- (void)headViewClick2;
- (void)headViewClick;
- (void)searchBtnClick;
- (void)openVIPBtnClick;
- (void)changeBackgroundView:(id)arg1;
- (void)updateViews;
- (void)refreshTitleView;
- (void)updateUserState;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

