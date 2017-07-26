//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface AMPStreamTranslator : NSObject
{
    NSMutableDictionary *_paesrClass;
}

+ (id)encode64FromLong:(long long)arg1;
+ (long long)decode64FromBytes:(const void *)arg1 readBytes:(unsigned int *)arg2;
+ (id)shareTranslator;
@property(retain, nonatomic) NSMutableDictionary *paesrClass; // @synthesize paesrClass=_paesrClass;
- (void).cxx_destruct;
- (void)performParse:(id)arg1 withData:(id)arg2 withEnveloped:(long long)arg3;
- (id)bodyObjectFromData:(id)arg1 withType:(long long)arg2 withEnveloped:(long long)arg3;
- (id)packetObjectFromNSData:(id)arg1;
- (id)bodyObjectFromDic:(id)arg1 withType:(long long)arg2;
- (void)registerPacketParse:(long long)arg1 useClass:(Class)arg2;
- (id)init;

@end
