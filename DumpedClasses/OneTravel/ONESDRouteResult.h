//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ONESBaseRouteResult.h"

@class DiRouteResult;

@interface ONESDRouteResult : ONESBaseRouteResult
{
    DiRouteResult *_qRouteResult;
}

@property(retain, nonatomic) DiRouteResult *qRouteResult; // @synthesize qRouteResult=_qRouteResult;
- (void).cxx_destruct;
- (id)selectedRouteId;
- (id)getMocktraj;
- (id)getRecommendType:(int)arg1;
- (id)getRecommendReason:(int)arg1;
- (int)getRoutesCount;

@end
