//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQPublicAccountFolderCellContentView.h"

@class UIImageView, UILabel;

@interface QQPublicAccountFolderImageView : QQPublicAccountFolderCellContentView
{
    UIImageView *_contentImageView;
    UILabel *_textLabel;
}

+ (int)getViewHeight:(id)arg1;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain) UIImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
- (void)layoutContentView:(id)arg1;
- (void)generateSubviews;
- (void)dealloc;

@end

