//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber<Optional>, TTPhotoDetailAdImageRecomModel<Optional>;

@interface TTPhotoDetailAdModel : JSONModel
{
    TTPhotoDetailAdImageRecomModel<Optional> *_image_recom;
    NSNumber<Optional> *_is_preview;
}

@property(retain, nonatomic) NSNumber<Optional> *is_preview; // @synthesize is_preview=_is_preview;
@property(retain, nonatomic) TTPhotoDetailAdImageRecomModel<Optional> *image_recom; // @synthesize image_recom=_image_recom;
- (void).cxx_destruct;

@end

