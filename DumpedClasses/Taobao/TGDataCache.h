//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface TGDataCache : NSObject
{
    NSMutableArray *_cacheKeyList;
}

+ (void)clearCache;
+ (void)deleteCache:(id)arg1 withName:(id)arg2;
+ (id)getCache:(id)arg1 withName:(id)arg2;
+ (void)saveCache:(id)arg1 withName:(id)arg2 andObject:(id)arg3;
+ (id)shareinstance;
@property(retain) NSMutableArray *cacheKeyList; // @synthesize cacheKeyList=_cacheKeyList;
- (void).cxx_destruct;

@end

