//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString, TBCEngine;

@protocol TBCContextProtocol <NSObject>
@property(readonly, nonatomic) Class componoentCls;
@property(retain, nonatomic) NSMutableDictionary *bizExp;
@property(retain, nonatomic) NSMutableDictionary *style;
@property(retain, nonatomic) NSMutableDictionary *fields;
@property(copy, nonatomic) NSString *cId;
@property(copy, nonatomic) NSString *subTag;
@property(copy, nonatomic) NSString *tag;
@property(nonatomic) __weak TBCEngine *engine;
- (id)initWithComponentTag:(NSString *)arg1 engine:(TBCEngine *)arg2;
@end

