//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"

@class NSArray;

@interface ESPSearchWordsGroup : NSObject <IGListDiffable>
{
    unsigned long long _type;
    NSArray *_words;
}

@property(copy, nonatomic) NSArray *words; // @synthesize words=_words;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;

@end

