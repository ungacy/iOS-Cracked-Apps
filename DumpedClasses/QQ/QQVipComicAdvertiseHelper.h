//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQVipComicAdvertiseHelper : NSObject
{
    int _readSectionCount;
}

+ (id)shareInstance;
@property(nonatomic) int readSectionCount; // @synthesize readSectionCount=_readSectionCount;
- (void)gotoAdvertise:(id)arg1 vc:(id)arg2;
- (void)reportShowAdvertise:(id)arg1;
- (void)reduceSuchAdvertise:(id)arg1;
- (void)hideSuchAdvertise:(id)arg1;
- (void)doEventAdvertise:(id)arg1 act:(id)arg2;
- (id)parseViewIdByUrl:(id)arg1;
- (id)parseViewId:(id)arg1;
@property(readonly, nonatomic) _Bool isSectionNeedShowAd;

@end

