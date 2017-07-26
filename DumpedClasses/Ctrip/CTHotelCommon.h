//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CTHotelCommon : NSObject
{
}

+ (id)getDestinationTypeByCityId:(int)arg1 districtID:(int)arg2 provinceID:(int)arg3;
+ (unsigned long long)configValueByConfigKey:(int)arg1 inList:(id)arg2;
+ (void)CommentLotteryPushCount:(id)arg1 result:(CDUnknownBlockType)arg2;
+ (id)gradientImageWithSize:(struct CGSize)arg1 locations:(const double *)arg2 components:(const double *)arg3 count:(unsigned long long)arg4 direction:(unsigned long long)arg5;
+ (double)hotelScreenZoomRatio;
+ (id)getViewToken;
+ (id)getSilverplateByMedalType:(int)arg1;
+ (id)setCouponInfo:(id)arg1;
+ (id)setUpOrderAbstractModelWithHotelOrderDetailCacheBean:(id)arg1;
+ (id)setUpOrderAbstractModelWithBaseHotelOrderCacheBean:(id)arg1;
+ (id)getOrderAbstractModel:(id)arg1;
+ (id)getLocationAddress:(id)arg1 withHotelType:(int)arg2;
+ (int)getCurrentDeviceType;
+ (id)getEmptyCell:(id)arg1;
+ (id)getComfiremDateFromMonth:(int)arg1 startDate:(id)arg2;
+ (id)getHotelPriceStr:(id)arg1;
+ (_Bool)isContainEnum:(int)arg1 EnumValue:(int)arg2;
+ (void)showServiceError:(int)arg1 info:(id)arg2 page:(id)arg3 isGoBack:(_Bool)arg4 animateType:(int)arg5;
+ (id)highLightText:(id)arg1 WithFrom:(id)arg2 lightColor:(id)arg3;
+ (void)resetFilterModelDistanceForOversea:(id)arg1;
+ (void)resetFilterModelDistance:(id)arg1;
+ (id)createOrderFGSelectPickerViewDataSource;
+ (_Bool)isMMoring:(id)arg1 currentDate:(id)arg2;
+ (void)doHotelDetailUserEncourageTrace:(int)arg1 tip:(id)arg2;
+ (void)overseaHotelExplanation:(id)arg1;
+ (id)changeCurrency:(id)arg1;
+ (id)getHotelStarDic:(int)arg1 isLicenseStar:(_Bool)arg2;
+ (void)goToHotelOrderDetail:(id)arg1 orderId:(long long)arg2 fromPage:(int)arg3 hasAnimation:(_Bool)arg4;
+ (void)goToHotelOrderDetail:(id)arg1 orderId:(long long)arg2 fromPage:(int)arg3;
+ (void)goToHotelOrderDetail:(id)arg1 orderId:(long long)arg2 fromPage:(int)arg3 validateInfo:(id)arg4 actionCode:(id)arg5;
+ (void)specialList:(id)arg1;
+ (void)flightToHotelList:(id)arg1 city:(id)arg2 checkInDate:(id)arg3 checkOutDate:(id)arg4;
+ (void)destinationToHotelList:(id)arg1 city:(id)arg2 isCitySearch:(_Bool)arg3 locationType:(int)arg4 distanceInfo:(id)arg5 filterModel:(id)arg6 sortType:(int)arg7 checkInDate:(id)arg8 checkOutDate:(id)arg9 latitude:(id)arg10 longitude:(id)arg11 entryTye:(int)arg12;
+ (void)scheduleToHotelOrderDetail:(id)arg1 orderId:(long long)arg2;
+ (void)shakeToHotelList:(id)arg1 byLocate:(struct CLLocationCoordinate2D)arg2 addressName:(id)arg3 locationType:(int)arg4 checkInDate:(id)arg5 checkOutDate:(id)arg6;
+ (id)checkCiytModel:(id)arg1 cityId:(long long)arg2;
+ (id)HotelTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 dataArray:(id)arg3 delegate:(id)arg4 isSpecial:(_Bool)arg5 positionRemark:(id)arg6;

@end
