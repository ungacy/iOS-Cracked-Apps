//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QzoneModel.h"

@class NSDictionary, NSString, QzoneFeedPicUrl, QzoneFeedUser;

@interface QzoneFeedCellRecommItem : QzoneModel
{
    _Bool _isFollow;
}

@property(nonatomic) _Bool isFollow; // @synthesize isFollow=_isFollow;

// Remaining properties
@property(nonatomic) long long addStatus; // @dynamic addStatus;
@property(retain, nonatomic) NSString *content; // @dynamic content;
@property(retain, nonatomic) NSString *descAfterClick; // @dynamic descAfterClick;
@property(retain, nonatomic) NSDictionary *extendinfo; // @dynamic extendinfo;
@property(retain, nonatomic) QzoneFeedPicUrl *iconAfterClick; // @dynamic iconAfterClick;
@property(retain, nonatomic) QzoneFeedPicUrl *iconBeforeClick; // @dynamic iconBeforeClick;
@property(nonatomic) _Bool isExposured; // @dynamic isExposured;
@property(nonatomic) _Bool isFake; // @dynamic isFake;
@property(retain, nonatomic) QzoneFeedUser *user; // @dynamic user;

@end

