//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UpdateInfo;

@interface UpdateInfoManager : NSObject
{
    UpdateInfo *_updateInfo;
}

+ (id)sharedInstance;
@property(retain, nonatomic) UpdateInfo *updateInfo; // @synthesize updateInfo=_updateInfo;
- (void).cxx_destruct;
- (unsigned long long)transformClientUpdateType:(unsigned long long)arg1;
- (id)currentClientNetType;
- (void)setClientNetWith:(id)arg1;
- (void)createUpdateInfoWithLogin:(id)arg1;
- (void)createUpdateInfoWithRPC:(id)arg1;
- (void)createUpdateInfoWithSync:(id)arg1;
- (void)clearUpdateInfo;

@end
