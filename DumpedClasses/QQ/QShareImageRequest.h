//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QShareImageBaseInfoNode.h"

@class NSString, QShareImageParams;

@interface QShareImageRequest : QShareImageBaseInfoNode
{
    NSString *_scheme;
    NSString *_path;
    NSString *_callback;
    NSString *_module;
    NSString *_finish;
    QShareImageParams *_imageParams;
}

+ (id)requestFromResponse:(id)arg1;
@property(retain, nonatomic) QShareImageParams *imageParams; // @synthesize imageParams=_imageParams;
@property(copy, nonatomic) NSString *finish; // @synthesize finish=_finish;
@property(copy, nonatomic) NSString *module; // @synthesize module=_module;
@property(copy, nonatomic) NSString *callback; // @synthesize callback=_callback;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
- (void)dealloc;

@end
