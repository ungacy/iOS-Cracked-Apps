//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CTDataSynchronizeControllerForFlight : NSObject
{
}

+ (void)postFlightIntCityUpdate:(long long)arg1;
+ (void)postFlightInlandCityUpdate:(long long)arg1;
+ (void)updateFlightIncrementServerVersionByList:(id)arg1;
+ (id)getNeedUpdateFlightBasicDataIncrementList;
+ (id)getNeedUpdateFlightStaticDataIncrementList;
+ (id)getNeedUpdateFlightIncrementList;
+ (id)getFlightIncrementVersionByName:(id)arg1;
+ (_Bool)updateFlightIncrementVersion:(id)arg1 versonKey:(id)arg2 isNeedUpdate:(int)arg3;
+ (void)flightStaticDataSynchronize;

@end
