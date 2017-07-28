//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NMLiveScreen, NSString;

@interface NMLiveResolution : NSObject
{
    NMLiveScreen *_superLiveScreen;
    unsigned long long _bitrate;
    NSString *_title;
    NSString *_url;
}

@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long bitrate; // @synthesize bitrate=_bitrate;
@property(nonatomic) __weak NMLiveScreen *superLiveScreen; // @synthesize superLiveScreen=_superLiveScreen;
- (void).cxx_destruct;
- (void)fillWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
