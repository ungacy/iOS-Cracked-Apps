//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SUPBaseModel.h"

@class NSNumber, NSString;

@interface SUPBillActionModel : SUPBaseModel
{
    NSNumber *_type;
    NSString *_name;
    NSString *_URL;
}

+ (id)keyMapper;
@property(copy, nonatomic) NSString *URL; // @synthesize URL=_URL;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSNumber *type; // @synthesize type=_type;
- (void).cxx_destruct;

@end
