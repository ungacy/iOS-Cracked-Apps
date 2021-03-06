//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary, NSString;

@interface RangerCssItem : NSObject
{
    NSString *_cssName;
    NSString *_className;
    NSString *_idName;
    NSString *_cssSelectName;
    NSMutableDictionary *_propertys;
    NSArray *_links;
    NSString *_fakeVar;
}

@property(retain) NSString *fakeVar; // @synthesize fakeVar=_fakeVar;
@property(retain) NSArray *links; // @synthesize links=_links;
@property(retain) NSMutableDictionary *propertys; // @synthesize propertys=_propertys;
@property(retain) NSString *cssSelectName; // @synthesize cssSelectName=_cssSelectName;
@property(retain) NSString *idName; // @synthesize idName=_idName;
@property(retain) NSString *className; // @synthesize className=_className;
@property(retain, nonatomic) NSString *cssName; // @synthesize cssName=_cssName;
- (void).cxx_destruct;
- (void)cssView:(id)arg1;
- (id)description;
- (void)addPropertyValue:(id)arg1 forKey:(id)arg2;
- (void)addPropertyFromItem:(id)arg1;
- (id)init;

@end

