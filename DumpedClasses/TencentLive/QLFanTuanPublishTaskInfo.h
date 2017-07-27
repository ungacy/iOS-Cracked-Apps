//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSString, QLJCEAction, QLJCEFanTuanCommentParentItem, QLJCEFanTuanPublishCommentRequest, QLJCEFanTuanPublishFeedRequest;

@interface QLFanTuanPublishTaskInfo : NSObject
{
    unsigned int _retryCount;
    NSDate *_publishTime;
    QLJCEFanTuanPublishFeedRequest *_jceFeedRequest;
    QLJCEFanTuanPublishCommentRequest *_jceCommentRequest;
    NSString *_jceRootFeedId;
    QLJCEFanTuanCommentParentItem *_jceCommentParentItem;
    NSArray *_localPhotoList;
    NSString *_executingTaskId;
    NSString *_jceCommentId;
    QLJCEAction *_jceAction;
    CDUnknownBlockType _completion;
}

+ (id)jceFeedActionObject;
+ (id)jceMyActorObject;
+ (id)jceDownloadImageObjectWithPhoto:(id)arg1;
+ (id)jceUploadImageObjectWithPhoto:(id)arg1;
+ (id)jceParentObjectWithItem:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) QLJCEAction *jceAction; // @synthesize jceAction=_jceAction;
@property(retain, nonatomic) NSString *jceCommentId; // @synthesize jceCommentId=_jceCommentId;
@property(nonatomic) unsigned int retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSString *executingTaskId; // @synthesize executingTaskId=_executingTaskId;
@property(retain, nonatomic) NSArray *localPhotoList; // @synthesize localPhotoList=_localPhotoList;
@property(retain, nonatomic) QLJCEFanTuanCommentParentItem *jceCommentParentItem; // @synthesize jceCommentParentItem=_jceCommentParentItem;
@property(retain, nonatomic) NSString *jceRootFeedId; // @synthesize jceRootFeedId=_jceRootFeedId;
@property(retain, nonatomic) QLJCEFanTuanPublishCommentRequest *jceCommentRequest; // @synthesize jceCommentRequest=_jceCommentRequest;
@property(retain, nonatomic) QLJCEFanTuanPublishFeedRequest *jceFeedRequest; // @synthesize jceFeedRequest=_jceFeedRequest;
@property(retain, nonatomic) NSDate *publishTime; // @synthesize publishTime=_publishTime;
- (void).cxx_destruct;
- (void)taskComplete:(_Bool)arg1 error:(id)arg2 actionInfo:(id)arg3;
- (id)fanTuanFeedAndCommentItem;
- (id)jceFanTuanCommentItem;
- (id)jceFanTuanFeed;
- (id)getUniqueBusinessID;
- (_Bool)isTaskForPublishComment;
- (_Bool)isTaskForPublishFeed;
- (id)init;
- (void)dealloc;

@end
