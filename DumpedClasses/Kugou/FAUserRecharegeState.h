//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAModel.h"

@class NSString;

@interface FAUserRecharegeState : FAModel
{
    int _hasRecharge;
    int _hasGiftBag;
    NSString *_activityUrl;
}

@property(copy, nonatomic) NSString *activityUrl; // @synthesize activityUrl=_activityUrl;
@property(nonatomic) int hasGiftBag; // @synthesize hasGiftBag=_hasGiftBag;
@property(nonatomic) int hasRecharge; // @synthesize hasRecharge=_hasRecharge;
- (void).cxx_destruct;

@end

