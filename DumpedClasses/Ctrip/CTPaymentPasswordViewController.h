//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTPaymentBaseContainer.h"

@interface CTPaymentPasswordViewController : CTPaymentBaseContainer
{
    _Bool _isUsingTouchID;
    _Bool _isShow;
    _Bool _needVerifyPwd;
    CDUnknownBlockType _onDoneBlock;
    CDUnknownBlockType _onCancelBlock;
    CDUnknownBlockType _onResetBlock;
    CDUnknownBlockType _onFingerFailedBlock;
}

+ (id)showFingerViewWithDoneBlock:(CDUnknownBlockType)arg1 cancelBLock:(CDUnknownBlockType)arg2 resetBlock:(CDUnknownBlockType)arg3 fingerFailedBlock:(CDUnknownBlockType)arg4 metaInfo:(id)arg5 fingerFailedAutoChange:(_Bool)arg6 needVerifyPwd:(_Bool)arg7;
+ (id)showPasswordViewWithDoneBlock:(CDUnknownBlockType)arg1 cancelBLock:(CDUnknownBlockType)arg2 resetBlock:(CDUnknownBlockType)arg3 metaInfo:(id)arg4 needVerifyPwd:(_Bool)arg5;
@property(nonatomic) _Bool needVerifyPwd; // @synthesize needVerifyPwd=_needVerifyPwd;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(copy, nonatomic) CDUnknownBlockType onFingerFailedBlock; // @synthesize onFingerFailedBlock=_onFingerFailedBlock;
@property(copy, nonatomic) CDUnknownBlockType onResetBlock; // @synthesize onResetBlock=_onResetBlock;
@property(copy, nonatomic) CDUnknownBlockType onCancelBlock; // @synthesize onCancelBlock=_onCancelBlock;
@property(copy, nonatomic) CDUnknownBlockType onDoneBlock; // @synthesize onDoneBlock=_onDoneBlock;
- (void).cxx_destruct;
- (void)doPwdViewWithType:(long long)arg1 animationView:(id)arg2;
- (void)setFingerPrintWithMetaInfo:(id)arg1 failedAutoChangeToPassword:(_Bool)arg2;
- (void)pwdDisappearAnimationView:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;
- (id)setupPasswordComponent:(id)arg1;
- (void)showPasswordViewWithDoneBlock:(CDUnknownBlockType)arg1 cancelBLock:(CDUnknownBlockType)arg2 resetBlock:(CDUnknownBlockType)arg3 fingerFailedBlock:(CDUnknownBlockType)arg4 isSupportFingerPrint:(_Bool)arg5 metaInfo:(id)arg6 fingerFailedAutoChange:(_Bool)arg7 needVerifyPwd:(_Bool)arg8;
- (void)unloadController;
- (void)dealloc;

@end
