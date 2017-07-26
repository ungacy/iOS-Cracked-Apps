//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, UIView, UIViewController;

@protocol QzoneFeedWnsInterfaceDelegate <NSObject>
- (NSString *)wnsConfigStringWithFirstKey:(NSString *)arg1 secondKey:(NSString *)arg2;
- (double)wnsDetailVideoMediaRectHeightRate;
- (double)wnsVideoMediaRectHeightRate;
- (double)wnsNewVideoMediaRectWidthForPlus;
- (double)wnsNewVideoMediaRectWidthFor6;
- (double)wnsNewVideoMediaRectWidthFor5;
- (double)wnsNewMediaRectHeightRate;
- (double)wnsNewMediaRectWidthForPlus;
- (double)wnsNewMediaRectWidthFor6;
- (double)wnsNewMediaRectWidthFor5;
- (_Bool)wnsMediaRectSetLiveShow;
- (double)wnsLuckyMoneyMediaRectWidthForPlus;
- (double)wnsLuckyMoneyMediaRectWidth;
- (double)wnsLargePicRate;
- (long long)wnsGetFeedSummaryShowNumUnExpand;
- (long long)wnsGetFeedSummaryMinMaxLine;
- (long long)wnsGetFeedSummaryMaxMaxLine;
- (_Bool)wnsGetFeedSummaryExpandDirect;
- (long long)wnsGetUpdateFeedUndealCntOnce;
- (long long)wnsFeedNickNameSplashCount;
- (double)wnsAdFeedExposeTime;
- (double)wnsGetFeedPictureFullColumnRatio;
- (long long)wnsGetFeedTextMaxLine;
- (NSString *)wnsEmotionURL;
- (void)wnsReportData:(NSString *)arg1 ret:(long long)arg2 uin:(long long)arg3 tmcost:(long long)arg4 reqsize:(long long)arg5 rspsize:(long long)arg6 sdkversion:(NSString *)arg7 seq:(NSString *)arg8 serverip:(NSString *)arg9 port:(long long)arg10 detail:(NSString *)arg11 dtype:(long long)arg12 odetails:(NSString *)arg13;

@optional
- (NSString *)wnsGetAvatarURL;
- (NSArray *)wnsAllowPrivateCommentBusinessTypes;
- (UIView *)getLuckyMoneyInputCellWithFrame:(struct CGRect)arg1 object:(id *)arg2 parentController:(UIViewController *)arg3;
- (long long)wnsRenderEngineClearImageNumForIp4;
- (long long)wnsRenderEngineClearImageNumForIp5;
- (long long)wnsRenderEngineClearImageNumForIp6;
- (long long)wnsRenderEngineMaxImageCacheNumForIp4;
- (long long)wnsRenderEngineMaxImageCacheNumForIp5;
- (long long)wnsRenderEngineMaxImageCacheNumForIp6;
- (long long)wnsRenderEngineMaxCacheSize;
- (long long)wnsSuperLikeLowDevice;
@end
