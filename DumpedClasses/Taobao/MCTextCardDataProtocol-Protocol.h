//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCCardDataProtocol.h"

@class NSArray, NSDictionary, NSString;

@protocol MCTextCardDataProtocol <MCCardDataProtocol>
@property(retain, nonatomic) NSArray *callUserIds;
@property(retain, nonatomic) NSArray *urls;
@property(copy, nonatomic) NSString *content;
- (NSDictionary *)toDictionary;
@end
