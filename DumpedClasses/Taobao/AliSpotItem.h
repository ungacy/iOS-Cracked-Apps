//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSString;

@interface AliSpotItem : NSObject
{
    _Bool _bCustomIcon;
    _Bool _bDowning;
    NSString *_itemId;
    NSString *_title;
    NSString *_itemDes;
    NSString *_iconUrl;
    NSArray *_keyWords;
    id _userInfo;
    long long _useCount;
    NSData *_iconData;
}

@property(retain, nonatomic) NSData *iconData; // @synthesize iconData=_iconData;
@property(nonatomic) _Bool bDowning; // @synthesize bDowning=_bDowning;
@property(nonatomic) _Bool bCustomIcon; // @synthesize bCustomIcon=_bCustomIcon;
@property(nonatomic) long long useCount; // @synthesize useCount=_useCount;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSArray *keyWords; // @synthesize keyWords=_keyWords;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) NSString *itemDes; // @synthesize itemDes=_itemDes;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithParams:(id)arg1 andTitle:(id)arg2 andDes:(id)arg3 andIcon:(id)arg4 andUserInfo:(id)arg5;

@end
