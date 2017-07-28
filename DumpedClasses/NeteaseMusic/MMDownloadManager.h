//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMAFNetworkReachabilityManager, MMAFURLSessionManager, NSMutableDictionary;

@interface MMDownloadManager : NSObject
{
    id <MMDownloadManagerDelegate> _delegate;
    MMAFURLSessionManager *_sessionManager;
    MMAFNetworkReachabilityManager *_reachabilityManager;
    NSMutableDictionary *_downloadTaskManager;
    NSMutableDictionary *_downloadDataManager;
    NSMutableDictionary *_pathManager;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableDictionary *pathManager; // @synthesize pathManager=_pathManager;
@property(retain, nonatomic) NSMutableDictionary *downloadDataManager; // @synthesize downloadDataManager=_downloadDataManager;
@property(retain, nonatomic) NSMutableDictionary *downloadTaskManager; // @synthesize downloadTaskManager=_downloadTaskManager;
@property(retain, nonatomic) MMAFNetworkReachabilityManager *reachabilityManager; // @synthesize reachabilityManager=_reachabilityManager;
@property(retain, nonatomic) MMAFURLSessionManager *sessionManager; // @synthesize sessionManager=_sessionManager;
@property(nonatomic) __weak id <MMDownloadManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)cancelDownload:(id)arg1;
- (void)cancelDownload;
- (void)resumeDownload:(id)arg1;
- (void)resumeDownload;
- (void)pauseDownload:(id)arg1;
- (void)pauseDownload;
- (void)downloadItem:(id)arg1 atPath:(id)arg2;
- (_Bool)isTaskRunning;
- (void)startNetworkMoniter;
- (void)configurePotocolClasses:(id)arg1;
- (id)init;

@end
