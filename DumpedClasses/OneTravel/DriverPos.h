//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class Coordinate;

@interface DriverPos : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int arrivedTime; // @dynamic arrivedTime;
@property(nonatomic) float distance; // @dynamic distance;
@property(nonatomic) int distanceEnabled; // @dynamic distanceEnabled;
@property(nonatomic) _Bool hasArrivedTime; // @dynamic hasArrivedTime;
@property(nonatomic) _Bool hasDistance; // @dynamic hasDistance;
@property(nonatomic) _Bool hasDistanceEnabled; // @dynamic hasDistanceEnabled;
@property(nonatomic) _Bool hasPos; // @dynamic hasPos;
@property(retain, nonatomic) Coordinate *pos; // @dynamic pos;

@end

