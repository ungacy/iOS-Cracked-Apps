//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ALBBTradeEnv : NSObject
{
}

+ (id)myCardCouponsUrl;
+ (id)myOrdersURLWithTabCode:(id)arg1 condition:(id)arg2;
+ (id)eTicketDetailURLWithOrderID:(id)arg1;
+ (id)promotionsURLWithQuery:(id)arg1;
+ (id)cartURL;
+ (id)itemURLWithItemType:(long long)arg1 itemID:(id)arg2 params:(id)arg3;
+ (id)itemURLWithItemType:(long long)arg1 openID:(id)arg2 params:(id)arg3;
+ (id)itemHostWithItemType:(long long)arg1 viewType:(id)arg2;
+ (id)taobaoMobileTradeItemUrlHost;
+ (id)baichuanTradeItemUrlHost;
+ (id)tmallTradeItemUrlHost;

@end

