//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ANXMonitorManager : NSObject
{
    _Bool _onMonitor;
    CDUnknownBlockType _handler;
}

+ (id)shaedManager;
@property _Bool onMonitor; // @synthesize onMonitor=_onMonitor;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (void)stopMonitor;
- (void)startMonitorWithHandler:(CDUnknownBlockType)arg1;

@end

