//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MVTableRow.h"

@class MVCinemaModel, MVScheduleCinemaInfoCell;

@interface MVScheduleCinemaInfoRow : MVTableRow
{
    MVScheduleCinemaInfoCell *myCell;
    _Bool _infoStable;
    MVCinemaModel *_cinemaModel;
}

@property(nonatomic) _Bool infoStable; // @synthesize infoStable=_infoStable;
@property(retain, nonatomic) MVCinemaModel *cinemaModel; // @synthesize cinemaModel=_cinemaModel;
- (void).cxx_destruct;
- (double)cellHeight;
- (void)updateCell:(id)arg1 indexPath:(id)arg2;
- (id)cellForTableView:(id)arg1 indexPath:(id)arg2;
- (id)initWithCinemaModel:(id)arg1;

@end

