//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionView.h"

@interface TBCouponCollectionView : UICollectionView
{
    id <TBCouponCollectionViewDelegate> _cardDelegate;
    struct CGPoint _lastContentOffset;
}

@property(nonatomic) struct CGPoint lastContentOffset; // @synthesize lastContentOffset=_lastContentOffset;
@property(nonatomic) id <TBCouponCollectionViewDelegate> cardDelegate; // @synthesize cardDelegate=_cardDelegate;
- (void)taped:(id)arg1;
- (void)setup;

@end

