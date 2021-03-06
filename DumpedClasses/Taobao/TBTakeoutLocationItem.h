//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

#import "TBTakeoutLocationItemProtocol.h"

@class NSDate, NSNumber, NSString;

@interface TBTakeoutLocationItem : TBJSONModel <TBTakeoutLocationItemProtocol>
{
    NSNumber *_latitude;
    NSNumber *_longitude;
    NSString *_cityCode;
    NSString *_cityName;
    NSString *_title;
    NSString *_addressID;
    NSString *_poiID;
    NSDate *_requestTime;
}

@property(retain, nonatomic) NSDate *requestTime; // @synthesize requestTime=_requestTime;
@property(copy, nonatomic) NSString *poiID; // @synthesize poiID=_poiID;
@property(copy, nonatomic) NSString *addressID; // @synthesize addressID=_addressID;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(copy, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
@property(copy, nonatomic) NSNumber *longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSNumber *latitude; // @synthesize latitude=_latitude;
- (void).cxx_destruct;
- (_Bool)isValidLocation;
- (_Bool)isEqualToLocation:(id)arg1;
- (id)initWithLocationData:(id)arg1;
- (id)initWithPOIEntity:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

