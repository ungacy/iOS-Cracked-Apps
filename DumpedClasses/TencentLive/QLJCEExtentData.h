//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString, QLJCEBucketConfig;

@interface QLJCEExtentData : JceObjectV2
{
    BOOL jcev2_p_1_o_flagByte;
    int jcev2_p_0_o_checkFlag;
    NSString *jcev2_p_2_o_extra;
    QLJCEBucketConfig *jcev2_p_3_o_bucketInfo;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_bucketInfo, setter=setJce_bucketInfo:) QLJCEBucketConfig *jcev2_p_3_o_bucketInfo; // @synthesize jcev2_p_3_o_bucketInfo;
@property(retain, nonatomic, getter=jce_extra, setter=setJce_extra:) NSString *jcev2_p_2_o_extra; // @synthesize jcev2_p_2_o_extra;
@property(nonatomic, getter=jce_flagByte, setter=setJce_flagByte:) BOOL jcev2_p_1_o_flagByte; // @synthesize jcev2_p_1_o_flagByte;
@property(nonatomic, getter=jce_checkFlag, setter=setJce_checkFlag:) int jcev2_p_0_o_checkFlag; // @synthesize jcev2_p_0_o_checkFlag;
- (void).cxx_destruct;
- (id)init;

@end

