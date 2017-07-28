//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FALCNewGiftCollectionViewCell.h"

#import "FALCNewStarCellViewConfigInfoDelegate.h"

@class FALCNewGiftProgressView, NSAttributedString, NSString, UILabel;

@interface FALCNewStarGiftCollectionViewCell : FALCNewGiftCollectionViewCell <FALCNewStarCellViewConfigInfoDelegate>
{
    _Bool _isGrayStyle;
    UILabel *_numLabel;
    UILabel *_timeLabel;
    FALCNewGiftProgressView *_progressView;
    NSAttributedString *_starCoinImageString;
}

@property(nonatomic) _Bool isGrayStyle; // @synthesize isGrayStyle=_isGrayStyle;
@property(retain, nonatomic) NSAttributedString *starCoinImageString; // @synthesize starCoinImageString=_starCoinImageString;
@property(retain, nonatomic) FALCNewGiftProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *numLabel; // @synthesize numLabel=_numLabel;
- (void).cxx_destruct;
- (void)updateStarStatus:(long long)arg1;
- (void)setCellCanUse:(_Bool)arg1 isFullScreen:(_Bool)arg2;
- (void)shouldStop;
- (void)shouldUpdateStarCount;
- (void)updateStartStatus:(long long)arg1;
- (void)shouldUpdateStarProgress;
- (void)shouldStart;
- (void)reloadInfoWithGiftModel:(id)arg1 giftType:(long long)arg2 giftShowType:(long long)arg3;
- (void)dealloc;
- (void)initStarView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
