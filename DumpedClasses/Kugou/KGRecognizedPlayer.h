//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNotificationCenter;

@interface KGRecognizedPlayer : NSObject
{
    NSNotificationCenter *_notiCenter;
}

+ (void)clearPlayer;
+ (void)PlayOrPause;
+ (_Bool)isPlaySong:(id)arg1;
+ (int)stop:(id)arg1;
+ (int)pause:(id)arg1;
+ (int)play:(id)arg1;
+ (int)setDataSource:(id)arg1 withSong:(id)arg2;
+ (id)defaultNotiCenter;
+ (id)defaultPlayer;
@property(nonatomic) NSNotificationCenter *notiCenter; // @synthesize notiCenter=_notiCenter;

@end

