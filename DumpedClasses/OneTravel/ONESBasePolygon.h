//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ONESBaseMultiPoint.h"

@class NSArray, NSString;

@interface ONESBasePolygon : ONESBaseMultiPoint
{
    struct CLLocationCoordinate2D *_originCoors;
    NSString *_name;
    CDStruct_c3b9c2ee *_points;
    unsigned long long _pointCount;
    struct CLLocationCoordinate2D *_coords;
    NSArray *_interiorPolygons;
}

+ (id)polygonWithCoordinates:(struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2 interiorPolygons:(id)arg3;
+ (id)polygonWithCoordinates:(struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2;
+ (id)polygonWithPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2 interiorPolygons:(id)arg3;
+ (id)polygonWithPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;
@property(readonly, nonatomic) NSArray *interiorPolygons; // @synthesize interiorPolygons=_interiorPolygons;
- (struct CLLocationCoordinate2D *)coords;
- (unsigned long long)pointCount;
- (CDStruct_c3b9c2ee *)points;
- (void)setName:(id)arg1;
- (id)name;
- (void).cxx_destruct;
- (void)updatePolygonWithPoints:(CDStruct_c3b9c2ee *)arg1 coords:(struct CLLocationCoordinate2D *)arg2 count:(unsigned long long)arg3 interiorPolygons:(id)arg4;
- (void)dealloc;
- (void)getCoordinates:(struct CLLocationCoordinate2D *)arg1 range:(struct _NSRange)arg2;
- (void)getCoordinates:(struct CLLocationCoordinate2D *)arg1 range:(struct _NSRange)arg2 srcCoor:(struct CLLocationCoordinate2D *)arg3 inMapEntrance:(id)arg4;
- (struct CLLocationCoordinate2D *)originCoors;
- (void)setOriginCoors:(struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2;

@end
