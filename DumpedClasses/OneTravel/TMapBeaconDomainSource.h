//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TMapBeaconEncodeObject.h"

@class NSString;

@interface TMapBeaconDomainSource : TMapBeaconEncodeObject
{
    NSString *url;
    int protocolType;
    _Bool onlyDns;
    _Bool isTest;
}

@property(nonatomic) _Bool onlyDns; // @synthesize onlyDns;
@property(nonatomic) _Bool isTest; // @synthesize isTest;
@property(nonatomic) int protocolType; // @synthesize protocolType;
@property(retain, nonatomic) NSString *url; // @synthesize url;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)initWithWUPDomain2Model:(id)arg1;

@end

