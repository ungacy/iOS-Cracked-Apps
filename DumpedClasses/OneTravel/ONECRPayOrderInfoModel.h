//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray<Optional>, NSNumber<Optional>, NSString<Optional>;

@interface ONECRPayOrderInfoModel : JSONModel
{
    NSString<Optional> *_price;
    NSNumber<Optional> *_head;
    NSString<Optional> *_returnUrl;
    NSString<Optional> *_body;
    NSString<Optional> *_phone;
    NSString<Optional> *_avatarURLStr;
    NSString<Optional> *_title;
    NSString<Optional> *_subtitle;
    NSNumber<Optional> *_expandDriverInfo;
    NSNumber<Optional> *_expandPayFee;
    NSString<Optional> *_rating;
    NSArray<Optional> *_detail;
    NSString<Optional> *_feedbackText;
    NSString<Optional> *_feedbackURLStr;
}

@property(copy, nonatomic) NSString<Optional> *feedbackURLStr; // @synthesize feedbackURLStr=_feedbackURLStr;
@property(copy, nonatomic) NSString<Optional> *feedbackText; // @synthesize feedbackText=_feedbackText;
@property(copy, nonatomic) NSArray<Optional> *detail; // @synthesize detail=_detail;
@property(copy, nonatomic) NSString<Optional> *rating; // @synthesize rating=_rating;
@property(retain, nonatomic) NSNumber<Optional> *expandPayFee; // @synthesize expandPayFee=_expandPayFee;
@property(retain, nonatomic) NSNumber<Optional> *expandDriverInfo; // @synthesize expandDriverInfo=_expandDriverInfo;
@property(copy, nonatomic) NSString<Optional> *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString<Optional> *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString<Optional> *avatarURLStr; // @synthesize avatarURLStr=_avatarURLStr;
@property(copy, nonatomic) NSString<Optional> *phone; // @synthesize phone=_phone;
@property(copy, nonatomic) NSString<Optional> *body; // @synthesize body=_body;
@property(copy, nonatomic) NSString<Optional> *returnUrl; // @synthesize returnUrl=_returnUrl;
@property(retain, nonatomic) NSNumber<Optional> *head; // @synthesize head=_head;
@property(copy, nonatomic) NSString<Optional> *price; // @synthesize price=_price;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end
