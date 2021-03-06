//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GDMtopRequest.h"

@class NSString;

@interface TBGuideTopicCountAndStatusRequest : GDMtopRequest
{
    NSString *_commentCount;
    NSString *_favourCount;
    NSString *_favourStatus;
    NSString *_targetId;
}

@property(copy, nonatomic) NSString *targetId; // @synthesize targetId=_targetId;
@property(copy, nonatomic) NSString *favourStatus; // @synthesize favourStatus=_favourStatus;
@property(copy, nonatomic) NSString *favourCount; // @synthesize favourCount=_favourCount;
@property(copy, nonatomic) NSString *commentCount; // @synthesize commentCount=_commentCount;
- (void).cxx_destruct;
- (_Bool)procResultDataFromJson:(id)arg1;
- (void)loadWithFeedId:(id)arg1 commentTargetType:(id)arg2 commentSubType:(id)arg3;
- (id)methodName;
- (id)init;

@end

