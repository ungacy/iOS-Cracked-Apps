//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, TBSNSVideoCellModel;

@protocol TBSNSVideoTableViewCellDelegate <NSObject>
- (void)clickPlayButtonToPlay:(TBSNSVideoCellModel *)arg1;
- (void)tapVideoToPlay:(TBSNSVideoCellModel *)arg1;
- (void)videoCompleted;
- (void)willPlayNextVideo:(NSNumber *)arg1;
- (void)videoPlaying:(NSNumber *)arg1;
@end

