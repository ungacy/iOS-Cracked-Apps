//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, NSString, UIColor, UITableViewCell;

@interface CTTrainTableViewRowModel : NSObject
{
    _Bool _pressEnable;
    NSIndexPath *_indexPath;
    UITableViewCell *_cell;
    double _cellHeight;
    double _separateLength;
    UIColor *_separateLineColor;
    id <CTTrainTableViewRowModelDataSource> _dataSource;
    NSString *_cellIdentifier;
}

@property(copy, nonatomic) NSString *cellIdentifier; // @synthesize cellIdentifier=_cellIdentifier;
@property(nonatomic) __weak id <CTTrainTableViewRowModelDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) _Bool pressEnable; // @synthesize pressEnable=_pressEnable;
@property(copy, nonatomic) UIColor *separateLineColor; // @synthesize separateLineColor=_separateLineColor;
@property(nonatomic) double separateLength; // @synthesize separateLength=_separateLength;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(retain, nonatomic) UITableViewCell *cell; // @synthesize cell=_cell;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (void).cxx_destruct;
- (id)init;

@end
