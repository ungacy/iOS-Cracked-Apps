//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MQPPaySession, NSString;

@interface MQPCallback : NSObject
{
    NSString *_scheme;
    NSString *_serviceType;
    SEL _selector;
    id _target;
    CDUnknownBlockType _resultBlock;
    CDUnknownBlockType _appBlock;
    MQPPaySession *_session;
}

+ (id)callbackWithResultBlock:(CDUnknownBlockType)arg1;
+ (id)callbackWithAppBlock:(CDUnknownBlockType)arg1;
+ (id)callbackWithTarget:(id)arg1 andSelector:(SEL)arg2;
+ (id)callbackWithScheme:(id)arg1 andServiceType:(id)arg2;
@property(nonatomic) __weak MQPPaySession *session; // @synthesize session=_session;
@property(copy, nonatomic) CDUnknownBlockType appBlock; // @synthesize appBlock=_appBlock;
@property(copy, nonatomic) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
- (void).cxx_destruct;
- (void)callbackWithTargetSelector:(id)arg1;
- (void)callbackWithBlock:(id)arg1;
- (void)callbackWithScheme:(id)arg1;
- (void)callbackResult:(id)arg1;
- (id)backSchemeStringWithResult:(id)arg1;
@property(readonly, nonatomic) _Bool isSPAuthV1;
@property(readonly, nonatomic) _Bool isThirdScheme;
- (void)exitApp;

@end
