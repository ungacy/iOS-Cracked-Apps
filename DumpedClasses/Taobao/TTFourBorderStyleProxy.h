//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTStyleProxy.h"

@class UIColor;

@interface TTFourBorderStyleProxy : TTStyleProxy
{
    UIColor *_top;
    UIColor *_right;
    UIColor *_bottom;
    UIColor *_left;
    double _width;
}

@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) UIColor *left; // @synthesize left=_left;
@property(retain, nonatomic) UIColor *bottom; // @synthesize bottom=_bottom;
@property(retain, nonatomic) UIColor *right; // @synthesize right=_right;
@property(retain, nonatomic) UIColor *top; // @synthesize top=_top;
- (void).cxx_destruct;
- (void)addBottomBorderWithView:(id)arg1;
- (void)addTopBorderWithView:(id)arg1;
- (void)addRightBorderWithView:(id)arg1;
- (void)addLeftBorderWithView:(id)arg1;
- (void)applyStyleWithView:(id)arg1 contentBounds:(struct CGRect)arg2;

@end

