//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMEventCell.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NMTopiclistCollectionViewFooter, NSMutableArray, NSString, UICollectionView, UIImage, UIImageView, UILabel, UIView;

@interface NMTopiclistEventCell : NMEventCell <UICollectionViewDelegate, UICollectionViewDataSource>
{
    UILabel *_titleLabel;
    UIImageView *_moreImageView;
    UICollectionView *_collectionView;
    UIView *_lineView;
    NSMutableArray *_topicListArray;
    NMTopiclistCollectionViewFooter *_footerView;
    UIImage *_arrNightImage;
    double _threshold;
    double _contentOffsetX;
}

+ (double)heightForEvent:(id)arg1;
- (void).cxx_destruct;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)scrollToLeft:(_Bool)arg1;
- (void)moreTopicClicked;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setEvent:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
