//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class ESPHotSearch, UIButton;

@interface ESPDynamicLabelCollectionViewCell : UICollectionViewCell
{
    ESPHotSearch *_hotSearch;
    UIButton *_button;
    CDUnknownBlockType _didSelectHotSearchAction;
}

@property(copy, nonatomic) CDUnknownBlockType didSelectHotSearchAction; // @synthesize didSelectHotSearchAction=_didSelectHotSearchAction;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) ESPHotSearch *hotSearch; // @synthesize hotSearch=_hotSearch;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end
