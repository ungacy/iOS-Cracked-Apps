//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAShapeLayer, UIBezierPath, UIColor, UIImageView;

@interface FMMaskView : UIView
{
    _Bool _shouldPassThroughEventWithinClipArea;
    _Bool _blurEnabled;
    double _clipRectCornerRadius;
    UIBezierPath *_clipPath;
    UIView *_contentView;
    UIColor *_blurColor;
    CAShapeLayer *_maskLayer;
    UIImageView *_blurView;
    struct CGRect _clipRect;
    struct CGRect _hitRect;
}

@property(retain, nonatomic) UIImageView *blurView; // @synthesize blurView=_blurView;
@property(nonatomic) struct CGRect hitRect; // @synthesize hitRect=_hitRect;
@property(retain, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) UIColor *blurColor; // @synthesize blurColor=_blurColor;
@property(nonatomic) _Bool blurEnabled; // @synthesize blurEnabled=_blurEnabled;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool shouldPassThroughEventWithinClipArea; // @synthesize shouldPassThroughEventWithinClipArea=_shouldPassThroughEventWithinClipArea;
@property(retain, nonatomic) UIBezierPath *clipPath; // @synthesize clipPath=_clipPath;
@property(nonatomic) double clipRectCornerRadius; // @synthesize clipRectCornerRadius=_clipRectCornerRadius;
@property(nonatomic) struct CGRect clipRect; // @synthesize clipRect=_clipRect;
- (void).cxx_destruct;
- (void)dismiss;
- (void)dismisssAnimated:(_Bool)arg1;
- (void)show;
- (void)showAnimated:(_Bool)arg1;
- (void)showInView:(id)arg1 animated:(_Bool)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
