//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMSettingCell.h"

@class NMThumbnailImageView, NSString, UIImageView;

@interface NMSettingIconCell : NMSettingCell
{
    NMThumbnailImageView *_thumbImageView;
    NSString *_thumbNailImageUrl;
    UIImageView *_icon;
    UIImageView *_adImageView;
    NSString *_adImageUrl;
}

- (void).cxx_destruct;
- (void)makeIconUntint;
- (void)setAdImage:(id)arg1;
- (void)setThumbNailImage:(id)arg1 showBadge:(_Bool)arg2;
- (void)setContent:(id)arg1;
- (void)setTitle:(id)arg1 icon:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)_refreshViewForSkin:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

