//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RACSequence.h"

@class RACReplaySubject;

@interface RACSignalSequence : RACSequence
{
    RACReplaySubject *_subject;
}

+ (id)sequenceWithSignal:(id)arg1;
@property(readonly, nonatomic) RACReplaySubject *subject; // @synthesize subject=_subject;
- (void).cxx_destruct;
- (id)description;
- (id)array;
- (id)tail;
- (id)head;

@end
