//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString;

@interface ProgressInfoModel : CTBusinessBean
{
    int _type;
    NSString *_itemTitle;
    NSMutableArray *_progressItemList;
}

@property(retain, nonatomic) NSMutableArray *progressItemList; // @synthesize progressItemList=_progressItemList;
@property(copy, nonatomic) NSString *itemTitle; // @synthesize itemTitle=_itemTitle;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

