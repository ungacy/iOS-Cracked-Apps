//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary;

@interface TBSystemSoundManager : NSObject
{
    _Bool _enableExceptMessage;
    NSDictionary *_defaultSoundDict;
    NSMutableDictionary *_soundResourceDict;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *soundResourceDict; // @synthesize soundResourceDict=_soundResourceDict;
@property(nonatomic) _Bool enableExceptMessage; // @synthesize enableExceptMessage=_enableExceptMessage;
@property(retain, nonatomic) NSDictionary *defaultSoundDict; // @synthesize defaultSoundDict=_defaultSoundDict;
- (void).cxx_destruct;
- (void)setSoundResource:(id)arg1 soundType:(long long)arg2;
- (void)playForUrl:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)playForType:(long long)arg1 complete:(CDUnknownBlockType)arg2;
- (id)init;

@end
