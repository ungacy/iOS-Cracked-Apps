//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString, PriceType;

@interface InvoiceDetailInformationOfReadModel : CTBusinessBean
{
    int _postType;
    int _postPayType;
    NSString *_deliveryTypeName;
    PriceType *_deliveryFee;
    long long _referenceOrderID;
}

@property(nonatomic) long long referenceOrderID; // @synthesize referenceOrderID=_referenceOrderID;
@property(nonatomic) int postPayType; // @synthesize postPayType=_postPayType;
@property(nonatomic) int postType; // @synthesize postType=_postType;
@property(retain, nonatomic) PriceType *deliveryFee; // @synthesize deliveryFee=_deliveryFee;
@property(copy, nonatomic) NSString *deliveryTypeName; // @synthesize deliveryTypeName=_deliveryTypeName;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

