//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet;

@interface TBOUGCUploadService : NSObject
{
    NSMutableSet *_services;
}

+ (id)instance;
- (void).cxx_destruct;
- (void)uploadFiles:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)uploadFiles:(id)arg1 bizCode:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)uploadFiles:(id)arg1 progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)uploadFiles:(id)arg1 bizCode:(id)arg2 userNick:(id)arg3 progress:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;

@end

