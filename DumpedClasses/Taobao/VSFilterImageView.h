//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VSImageView.h"

@class VSFilter;

@interface VSFilterImageView : VSImageView
{
    VSFilter *_filter;
}

@property(retain, nonatomic) VSFilter *filter; // @synthesize filter=_filter;
- (void).cxx_destruct;
- (id)renderedCIImageInRect:(struct CGRect)arg1;

@end
