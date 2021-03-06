//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImage, UIImageView, UILabel;

@interface GiftImageViewInfo : UIView
{
    _Bool _normalFlag;
    _Bool _allowRepeat;
    UIImageView *_gitfRepeatImageView;
    UIImageView *_gitfImageView;
    UILabel *_priceLabel;
    id <GiftImageViewInfoDelegate> _delegate;
    UIImage *_gitfRepeatNormalImage;
}

@property(nonatomic) _Bool allowRepeat; // @synthesize allowRepeat=_allowRepeat;
@property(nonatomic) _Bool normalFlag; // @synthesize normalFlag=_normalFlag;
@property(retain, nonatomic) UIImage *gitfRepeatNormalImage; // @synthesize gitfRepeatNormalImage=_gitfRepeatNormalImage;
@property(nonatomic) __weak id <GiftImageViewInfoDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UIImageView *gitfImageView; // @synthesize gitfImageView=_gitfImageView;
@property(retain, nonatomic) UIImageView *gitfRepeatImageView; // @synthesize gitfRepeatImageView=_gitfRepeatImageView;
- (void).cxx_destruct;
- (void)refreshFrame;
- (void)updateGiftToNormalState;
- (void)tapAction:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 giftImgName:(id)arg2 price:(long long)arg3 repeat:(_Bool)arg4 giftId:(unsigned long long)arg5;

@end

