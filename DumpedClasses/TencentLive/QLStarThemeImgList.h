//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface QLStarThemeImgList : NSObject <NSCoding>
{
    NSString *_cover_effect_img;
    NSString *_cover_star_img;
    NSString *_player_effect_img;
    NSString *_pull_effect_img;
    NSString *_pull_star_img;
    NSString *_recommend_effect_img;
    NSString *_recommend_star_img;
    NSString *_setting_star_img;
    NSString *_tab_img_1;
    NSString *_tab_img_2;
    NSString *_tab_img_3;
    NSString *_tab_img_4;
}

+ (id)starThemeImgList:(id)arg1;
+ (id)starThemeImgListWith:(id)arg1;
@property(retain, nonatomic) NSString *tab_img_4; // @synthesize tab_img_4=_tab_img_4;
@property(retain, nonatomic) NSString *tab_img_3; // @synthesize tab_img_3=_tab_img_3;
@property(retain, nonatomic) NSString *tab_img_2; // @synthesize tab_img_2=_tab_img_2;
@property(retain, nonatomic) NSString *tab_img_1; // @synthesize tab_img_1=_tab_img_1;
@property(retain, nonatomic) NSString *setting_star_img; // @synthesize setting_star_img=_setting_star_img;
@property(retain, nonatomic) NSString *recommend_star_img; // @synthesize recommend_star_img=_recommend_star_img;
@property(retain, nonatomic) NSString *recommend_effect_img; // @synthesize recommend_effect_img=_recommend_effect_img;
@property(retain, nonatomic) NSString *pull_star_img; // @synthesize pull_star_img=_pull_star_img;
@property(retain, nonatomic) NSString *pull_effect_img; // @synthesize pull_effect_img=_pull_effect_img;
@property(retain, nonatomic) NSString *player_effect_img; // @synthesize player_effect_img=_player_effect_img;
@property(retain, nonatomic) NSString *cover_star_img; // @synthesize cover_star_img=_cover_star_img;
@property(retain, nonatomic) NSString *cover_effect_img; // @synthesize cover_effect_img=_cover_effect_img;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getNeedDownloadImageList;
- (_Bool)isStarThemeImageDownloaded;

@end

