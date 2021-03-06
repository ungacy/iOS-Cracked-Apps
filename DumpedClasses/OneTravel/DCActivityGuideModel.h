//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber<Optional>, NSString<Optional>;

@interface DCActivityGuideModel : JSONModel
{
    NSString<Optional> *_activity_id;
    NSNumber<Optional> *_type;
    NSNumber<Optional> *_times;
    NSString<Optional> *_url;
    NSString<Optional> *_img1;
    NSString<Optional> *_img2;
    NSString<Optional> *_img3;
    NSString<Optional> *_btn_title;
    NSString<Optional> *_btn_url;
}

@property(copy, nonatomic) NSString<Optional> *btn_url; // @synthesize btn_url=_btn_url;
@property(copy, nonatomic) NSString<Optional> *btn_title; // @synthesize btn_title=_btn_title;
@property(copy, nonatomic) NSString<Optional> *img3; // @synthesize img3=_img3;
@property(copy, nonatomic) NSString<Optional> *img2; // @synthesize img2=_img2;
@property(copy, nonatomic) NSString<Optional> *img1; // @synthesize img1=_img1;
@property(copy, nonatomic) NSString<Optional> *url; // @synthesize url=_url;
@property(retain, nonatomic) NSNumber<Optional> *times; // @synthesize times=_times;
@property(retain, nonatomic) NSNumber<Optional> *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString<Optional> *activity_id; // @synthesize activity_id=_activity_id;
- (void).cxx_destruct;

@end

