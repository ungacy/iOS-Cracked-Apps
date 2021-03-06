//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXComponent.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UIView;

@interface WXRDMBaseContainerComponent : WXComponent <UIGestureRecognizerDelegate>
{
    UIView *_glView;
    id <WXRDMManagerProtocol> _manager;
}

@property(retain, nonatomic) id <WXRDMManagerProtocol> manager; // @synthesize manager=_manager;
@property(retain, nonatomic) UIView *glView; // @synthesize glView=_glView;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)onLongPress:(id)arg1;
- (void)onTapped:(id)arg1;
- (void)bindGestureRecognizer:(id)arg1;
- (void)insertSubview:(id)arg1 atIndex:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

