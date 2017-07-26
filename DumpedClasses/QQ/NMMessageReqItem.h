//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SAMRequestItem.h"

@interface NMMessageReqItem : SAMRequestItem
{
    long long _lastEventId;
    long long _readEventId;
    int _fetchCount;
}

- (id)notifyRespBuffer:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
- (char *)getRequestBuffer;
- (id)serviceCmd;

// Remaining properties
@property(nonatomic) int fetchCount; // @dynamic fetchCount;
@property(nonatomic) long long lastEventId; // @dynamic lastEventId;
@property(nonatomic) long long readEventId; // @dynamic readEventId;

@end
