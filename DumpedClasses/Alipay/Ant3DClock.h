//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface Ant3DClock : NSObject
{
    double _time2ns;
}

+ (id)sharedInstance;
- (CDStruct_1b6d18a9)timestampFromHostTime:(unsigned long long)arg1;
- (CDStruct_1b6d18a9)currentTimestamp;
- (id)init;

@end
