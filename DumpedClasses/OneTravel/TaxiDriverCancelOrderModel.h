//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TaxiBaseModel.h"

@class NSString<Optional>;

@interface TaxiDriverCancelOrderModel : TaxiBaseModel
{
    int _dutyType;
    NSString<Optional> *_orderId;
    NSString<Optional> *_title;
    NSString<Optional> *_content;
}

@property(nonatomic) int dutyType; // @synthesize dutyType=_dutyType;
@property(copy, nonatomic) NSString<Optional> *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString<Optional> *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString<Optional> *orderId; // @synthesize orderId=_orderId;
- (void).cxx_destruct;
- (void)dealloc;

@end

