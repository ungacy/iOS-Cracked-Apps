//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TRBaseModel.h"

@class NSString<Optional>;

@interface TooFarInfoModel : TRBaseModel
{
    NSString<Optional> *_button_cancel;
    NSString<Optional> *_button_ok;
    NSString<Optional> *_message;
    NSString<Optional> *_call;
}

@property(copy, nonatomic) NSString<Optional> *call; // @synthesize call=_call;
@property(copy, nonatomic) NSString<Optional> *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString<Optional> *button_ok; // @synthesize button_ok=_button_ok;
@property(copy, nonatomic) NSString<Optional> *button_cancel; // @synthesize button_cancel=_button_cancel;
- (void).cxx_destruct;

@end
