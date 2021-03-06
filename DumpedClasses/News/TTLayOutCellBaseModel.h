//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ExploreOrderedData, NSAttributedString, NSString;

@interface TTLayOutCellBaseModel : NSObject
{
    _Bool _needUpdateAllFrame;
    _Bool _hideTimeForRightPic;
    _Bool _likeLabelHidden;
    _Bool _subscriptLabelHidden;
    _Bool _entityLabelHidden;
    _Bool _moreImageViewHidden;
    _Bool _moreButtonHidden;
    _Bool _commentButtonHidden;
    _Bool _digButtonHidden;
    _Bool _forwardButtonHidden;
    _Bool _timeLabelHidden;
    _Bool _titleLabelHidden;
    _Bool _picViewHidden;
    _Bool _picViewHiddenMessage;
    _Bool _picViewUserInteractionEnabled;
    _Bool _sourceImageViewHidden;
    _Bool _sourceImageUserInteractionEnabled;
    _Bool _sourceLabelHidden;
    _Bool _sourceLabelUserInteractionEnabled;
    _Bool _unInterestedButtonHidden;
    _Bool _infoLabelHidden;
    _Bool _liveTextLabelHidden;
    _Bool _typeLabelHidden;
    _Bool _abstractLabelHidden;
    _Bool _commentLabelHidden;
    _Bool _commentLabelUserInteractionEnabled;
    _Bool _entityWordViewHidden;
    _Bool _bottomLineViewHidden;
    _Bool _adBackgroundViewHidden;
    _Bool _adSubtitleLabelHidden;
    _Bool _adSubtitleLabelUserInteractionEnabled;
    _Bool _adLocationIconHidden;
    _Bool _adLocationLabelHidden;
    _Bool _separatorViewHidden;
    _Bool _actionButtonHidden;
    _Bool _messageBackgroundViewHidden;
    _Bool _messageImageViewHidden;
    _Bool _messageLabelHidden;
    _Bool _playButtonHidden;
    _Bool _playButtonUserInteractionEnable;
    _Bool _adButtonHidden;
    _Bool _subscribButtonHidden;
    _Bool _backgroundViewHidden;
    _Bool _newsTitleLabelHidden;
    _Bool _userNameLabelHidden;
    _Bool _userVerifiedImgHidden;
    _Bool _userVerifiedLabelHidden;
    _Bool _recommendLabelHidden;
    _Bool _topRectHidden;
    _Bool _bottomRectHidden;
    _Bool _actionSepLineHidden;
    _Bool _verticalLineViewHidden;
    _Bool _wenDaButtonHidden;
    ExploreOrderedData *_orderedData;
    unsigned long long _listType;
    double _cellWidth;
    double _originX;
    double _originY;
    double _containWidth;
    double _infoBarOriginY;
    double _actionLabelY;
    double _infoBarContainWidth;
    NSString *_commentButtonImageName;
    NSString *_commentButtonTextColorThemeKey;
    double _commentButtonFontSize;
    NSString *_digButtonImageName;
    NSString *_digButtonSelectedImageName;
    NSString *_digButtonTextColorThemeKey;
    double _digButtonFontSize;
    NSString *_forwardButtonImageName;
    NSString *_forwardButtonTextColorThemeKey;
    double _forwardButtonFontSize;
    NSAttributedString *_titleAttributedStr;
    unsigned long long _titleLabelNumberOfLines;
    long long _picViewStyle;
    NSString *_sourceImageURLStr;
    NSString *_sourceNameFirstWord;
    double _sourceNameFirstWordFontSize;
    double _sourceLabelFontSize;
    NSString *_sourceLabelStr;
    NSString *_sourceLabelTextColorThemeKey;
    double _infoLabelFontSize;
    NSString *_infoLabelStr;
    NSString *_infoLabelTextColorThemeKey;
    NSString *_abstractLabelTextColorThemeKey;
    unsigned long long _abstractLabelNumberOfLines;
    NSAttributedString *_abstractAttributedStr;
    NSAttributedString *_commentAttributedStr;
    unsigned long long _commentLabelNumberOfLines;
    NSString *_commentLabelTextColorThemeKey;
    NSAttributedString *_commentAttrLabelAttributedStr;
    NSAttributedString *_commentAttrTruncationToken;
    double _adSubtitleLabelFontSize;
    NSString *_adSubtitleLabelTextColorThemeKey;
    NSString *_adSubtitleLabelStr;
    NSString *_adLocationLabelStr;
    double _adLocationLabelFontSize;
    NSString *_adLocationLabelTextColorThemeKey;
    NSString *_separatorViewBackgroundColorThemeKey;
    double _actionButtonFontSize;
    double _actionButtonBorderWidth;
    NSString *_messageLabelStr;
    NSString *_playButtonImageName;
    double _subscribButtonRight;
    double _subscribButtonTop;
    NSString *_backgroundViewBackgroundColorThemeKey;
    NSAttributedString *_newsTitleAttributedStr;
    NSString *_userNameLabelStr;
    NSString *_userVerifiedImgAuthInfo;
    NSString *_userVerifiedLabelTextColorThemeKey;
    NSString *_userVerifiedLabelStr;
    double _userVerifiedLabelFontSize;
    NSString *_recommendLabelStr;
    double _recommendLabelFontSize;
    unsigned long long _cellCacheHeight;
    struct CGRect _likeLabelFrame;
    struct CGRect _subscriptLabelFrame;
    struct CGRect _entityLabelFrame;
    struct CGRect _moreImageViewFrame;
    struct CGRect _moreButtonFrame;
    struct CGRect _commentButtonFrame;
    struct UIEdgeInsets _commentButtonContentInsets;
    struct UIEdgeInsets _commentButtonTitleInsets;
    struct CGRect _digButtonFrame;
    struct UIEdgeInsets _digButtonContentInsets;
    struct UIEdgeInsets _digButtonTitleInsets;
    struct CGRect _forwardButtonFrame;
    struct UIEdgeInsets _forwardButtonContentInsets;
    struct UIEdgeInsets _forwardButtonTitleInsets;
    struct CGRect _timeLabelFrame;
    struct CGRect _titleLabelFrame;
    struct CGRect _picViewFrame;
    struct CGRect _sourceImageViewFrame;
    struct CGRect _sourceLabelFrame;
    struct CGRect _unInterestedButtonFrame;
    struct CGRect _infoLabelFrame;
    struct CGRect _liveTextLabelFrame;
    struct CGRect _typeLabelFrame;
    struct CGRect _abstractLabelFrame;
    struct CGRect _commentLabelFrame;
    struct CGRect _entityWordViewFrame;
    struct CGRect _bottomLineViewFrame;
    struct CGRect _adBackgroundViewFrame;
    struct CGRect _adSubtitleLabelFrame;
    struct CGRect _adLocationIconFrame;
    struct CGRect _adLocationLabelFrame;
    struct CGRect _separatorViewFrame;
    struct CGRect _actionButtonFrame;
    struct CGRect _messageBackgroundViewFrame;
    struct CGRect _messageImageViewFrame;
    struct CGRect _messageLabelFrame;
    struct CGRect _playButtonFrame;
    struct CGRect _adButtonFrame;
    struct CGRect _backgroundViewFrame;
    struct CGRect _newsTitleLabelFrame;
    struct CGRect _userNameLabelFrame;
    struct CGRect _userVerifiedLabelFrame;
    struct CGRect _recommendLabelFrame;
    struct CGRect _topRectFrame;
    struct CGRect _bottomRectFrame;
    struct CGRect _actionSepLineFrame;
    struct CGRect _verticalLineViewFrame;
    struct CGRect _wenDaButtonFrame;
}

@property(nonatomic) unsigned long long cellCacheHeight; // @synthesize cellCacheHeight=_cellCacheHeight;
@property(nonatomic) _Bool wenDaButtonHidden; // @synthesize wenDaButtonHidden=_wenDaButtonHidden;
@property(nonatomic) struct CGRect wenDaButtonFrame; // @synthesize wenDaButtonFrame=_wenDaButtonFrame;
@property(nonatomic) _Bool verticalLineViewHidden; // @synthesize verticalLineViewHidden=_verticalLineViewHidden;
@property(nonatomic) struct CGRect verticalLineViewFrame; // @synthesize verticalLineViewFrame=_verticalLineViewFrame;
@property(nonatomic) _Bool actionSepLineHidden; // @synthesize actionSepLineHidden=_actionSepLineHidden;
@property(nonatomic) struct CGRect actionSepLineFrame; // @synthesize actionSepLineFrame=_actionSepLineFrame;
@property(nonatomic) _Bool bottomRectHidden; // @synthesize bottomRectHidden=_bottomRectHidden;
@property(nonatomic) struct CGRect bottomRectFrame; // @synthesize bottomRectFrame=_bottomRectFrame;
@property(nonatomic) _Bool topRectHidden; // @synthesize topRectHidden=_topRectHidden;
@property(nonatomic) struct CGRect topRectFrame; // @synthesize topRectFrame=_topRectFrame;
@property(nonatomic) double recommendLabelFontSize; // @synthesize recommendLabelFontSize=_recommendLabelFontSize;
@property(copy, nonatomic) NSString *recommendLabelStr; // @synthesize recommendLabelStr=_recommendLabelStr;
@property(nonatomic) _Bool recommendLabelHidden; // @synthesize recommendLabelHidden=_recommendLabelHidden;
@property(nonatomic) struct CGRect recommendLabelFrame; // @synthesize recommendLabelFrame=_recommendLabelFrame;
@property(nonatomic) double userVerifiedLabelFontSize; // @synthesize userVerifiedLabelFontSize=_userVerifiedLabelFontSize;
@property(copy, nonatomic) NSString *userVerifiedLabelStr; // @synthesize userVerifiedLabelStr=_userVerifiedLabelStr;
@property(retain, nonatomic) NSString *userVerifiedLabelTextColorThemeKey; // @synthesize userVerifiedLabelTextColorThemeKey=_userVerifiedLabelTextColorThemeKey;
@property(nonatomic) _Bool userVerifiedLabelHidden; // @synthesize userVerifiedLabelHidden=_userVerifiedLabelHidden;
@property(nonatomic) struct CGRect userVerifiedLabelFrame; // @synthesize userVerifiedLabelFrame=_userVerifiedLabelFrame;
@property(copy, nonatomic) NSString *userVerifiedImgAuthInfo; // @synthesize userVerifiedImgAuthInfo=_userVerifiedImgAuthInfo;
@property(nonatomic) _Bool userVerifiedImgHidden; // @synthesize userVerifiedImgHidden=_userVerifiedImgHidden;
@property(copy, nonatomic) NSString *userNameLabelStr; // @synthesize userNameLabelStr=_userNameLabelStr;
@property(nonatomic) _Bool userNameLabelHidden; // @synthesize userNameLabelHidden=_userNameLabelHidden;
@property(nonatomic) struct CGRect userNameLabelFrame; // @synthesize userNameLabelFrame=_userNameLabelFrame;
@property(retain, nonatomic) NSAttributedString *newsTitleAttributedStr; // @synthesize newsTitleAttributedStr=_newsTitleAttributedStr;
@property(nonatomic) _Bool newsTitleLabelHidden; // @synthesize newsTitleLabelHidden=_newsTitleLabelHidden;
@property(nonatomic) struct CGRect newsTitleLabelFrame; // @synthesize newsTitleLabelFrame=_newsTitleLabelFrame;
@property(retain, nonatomic) NSString *backgroundViewBackgroundColorThemeKey; // @synthesize backgroundViewBackgroundColorThemeKey=_backgroundViewBackgroundColorThemeKey;
@property(nonatomic) _Bool backgroundViewHidden; // @synthesize backgroundViewHidden=_backgroundViewHidden;
@property(nonatomic) struct CGRect backgroundViewFrame; // @synthesize backgroundViewFrame=_backgroundViewFrame;
@property(nonatomic) _Bool subscribButtonHidden; // @synthesize subscribButtonHidden=_subscribButtonHidden;
@property(nonatomic) double subscribButtonTop; // @synthesize subscribButtonTop=_subscribButtonTop;
@property(nonatomic) double subscribButtonRight; // @synthesize subscribButtonRight=_subscribButtonRight;
@property(nonatomic) _Bool adButtonHidden; // @synthesize adButtonHidden=_adButtonHidden;
@property(nonatomic) struct CGRect adButtonFrame; // @synthesize adButtonFrame=_adButtonFrame;
@property(nonatomic) _Bool playButtonUserInteractionEnable; // @synthesize playButtonUserInteractionEnable=_playButtonUserInteractionEnable;
@property(copy, nonatomic) NSString *playButtonImageName; // @synthesize playButtonImageName=_playButtonImageName;
@property(nonatomic) _Bool playButtonHidden; // @synthesize playButtonHidden=_playButtonHidden;
@property(nonatomic) struct CGRect playButtonFrame; // @synthesize playButtonFrame=_playButtonFrame;
@property(copy, nonatomic) NSString *messageLabelStr; // @synthesize messageLabelStr=_messageLabelStr;
@property(nonatomic) _Bool messageLabelHidden; // @synthesize messageLabelHidden=_messageLabelHidden;
@property(nonatomic) struct CGRect messageLabelFrame; // @synthesize messageLabelFrame=_messageLabelFrame;
@property(nonatomic) _Bool messageImageViewHidden; // @synthesize messageImageViewHidden=_messageImageViewHidden;
@property(nonatomic) struct CGRect messageImageViewFrame; // @synthesize messageImageViewFrame=_messageImageViewFrame;
@property(nonatomic) _Bool messageBackgroundViewHidden; // @synthesize messageBackgroundViewHidden=_messageBackgroundViewHidden;
@property(nonatomic) struct CGRect messageBackgroundViewFrame; // @synthesize messageBackgroundViewFrame=_messageBackgroundViewFrame;
@property(nonatomic) double actionButtonBorderWidth; // @synthesize actionButtonBorderWidth=_actionButtonBorderWidth;
@property(nonatomic) double actionButtonFontSize; // @synthesize actionButtonFontSize=_actionButtonFontSize;
@property(nonatomic) _Bool actionButtonHidden; // @synthesize actionButtonHidden=_actionButtonHidden;
@property(nonatomic) struct CGRect actionButtonFrame; // @synthesize actionButtonFrame=_actionButtonFrame;
@property(copy, nonatomic) NSString *separatorViewBackgroundColorThemeKey; // @synthesize separatorViewBackgroundColorThemeKey=_separatorViewBackgroundColorThemeKey;
@property(nonatomic) _Bool separatorViewHidden; // @synthesize separatorViewHidden=_separatorViewHidden;
@property(nonatomic) struct CGRect separatorViewFrame; // @synthesize separatorViewFrame=_separatorViewFrame;
@property(nonatomic) struct CGRect adLocationLabelFrame; // @synthesize adLocationLabelFrame=_adLocationLabelFrame;
@property(retain, nonatomic) NSString *adLocationLabelTextColorThemeKey; // @synthesize adLocationLabelTextColorThemeKey=_adLocationLabelTextColorThemeKey;
@property(nonatomic) double adLocationLabelFontSize; // @synthesize adLocationLabelFontSize=_adLocationLabelFontSize;
@property(retain, nonatomic) NSString *adLocationLabelStr; // @synthesize adLocationLabelStr=_adLocationLabelStr;
@property(nonatomic) _Bool adLocationLabelHidden; // @synthesize adLocationLabelHidden=_adLocationLabelHidden;
@property(nonatomic) struct CGRect adLocationIconFrame; // @synthesize adLocationIconFrame=_adLocationIconFrame;
@property(nonatomic) _Bool adLocationIconHidden; // @synthesize adLocationIconHidden=_adLocationIconHidden;
@property(retain, nonatomic) NSString *adSubtitleLabelStr; // @synthesize adSubtitleLabelStr=_adSubtitleLabelStr;
@property(nonatomic) _Bool adSubtitleLabelUserInteractionEnabled; // @synthesize adSubtitleLabelUserInteractionEnabled=_adSubtitleLabelUserInteractionEnabled;
@property(retain, nonatomic) NSString *adSubtitleLabelTextColorThemeKey; // @synthesize adSubtitleLabelTextColorThemeKey=_adSubtitleLabelTextColorThemeKey;
@property(nonatomic) double adSubtitleLabelFontSize; // @synthesize adSubtitleLabelFontSize=_adSubtitleLabelFontSize;
@property(nonatomic) _Bool adSubtitleLabelHidden; // @synthesize adSubtitleLabelHidden=_adSubtitleLabelHidden;
@property(nonatomic) struct CGRect adSubtitleLabelFrame; // @synthesize adSubtitleLabelFrame=_adSubtitleLabelFrame;
@property(nonatomic) _Bool adBackgroundViewHidden; // @synthesize adBackgroundViewHidden=_adBackgroundViewHidden;
@property(nonatomic) struct CGRect adBackgroundViewFrame; // @synthesize adBackgroundViewFrame=_adBackgroundViewFrame;
@property(nonatomic) _Bool bottomLineViewHidden; // @synthesize bottomLineViewHidden=_bottomLineViewHidden;
@property(nonatomic) struct CGRect bottomLineViewFrame; // @synthesize bottomLineViewFrame=_bottomLineViewFrame;
@property(nonatomic) _Bool entityWordViewHidden; // @synthesize entityWordViewHidden=_entityWordViewHidden;
@property(nonatomic) struct CGRect entityWordViewFrame; // @synthesize entityWordViewFrame=_entityWordViewFrame;
@property(retain, nonatomic) NSAttributedString *commentAttrTruncationToken; // @synthesize commentAttrTruncationToken=_commentAttrTruncationToken;
@property(retain, nonatomic) NSAttributedString *commentAttrLabelAttributedStr; // @synthesize commentAttrLabelAttributedStr=_commentAttrLabelAttributedStr;
@property(retain, nonatomic) NSString *commentLabelTextColorThemeKey; // @synthesize commentLabelTextColorThemeKey=_commentLabelTextColorThemeKey;
@property(nonatomic) _Bool commentLabelUserInteractionEnabled; // @synthesize commentLabelUserInteractionEnabled=_commentLabelUserInteractionEnabled;
@property(nonatomic) unsigned long long commentLabelNumberOfLines; // @synthesize commentLabelNumberOfLines=_commentLabelNumberOfLines;
@property(retain, nonatomic) NSAttributedString *commentAttributedStr; // @synthesize commentAttributedStr=_commentAttributedStr;
@property(nonatomic) _Bool commentLabelHidden; // @synthesize commentLabelHidden=_commentLabelHidden;
@property(nonatomic) struct CGRect commentLabelFrame; // @synthesize commentLabelFrame=_commentLabelFrame;
@property(retain, nonatomic) NSAttributedString *abstractAttributedStr; // @synthesize abstractAttributedStr=_abstractAttributedStr;
@property(nonatomic) unsigned long long abstractLabelNumberOfLines; // @synthesize abstractLabelNumberOfLines=_abstractLabelNumberOfLines;
@property(retain, nonatomic) NSString *abstractLabelTextColorThemeKey; // @synthesize abstractLabelTextColorThemeKey=_abstractLabelTextColorThemeKey;
@property(nonatomic) _Bool abstractLabelHidden; // @synthesize abstractLabelHidden=_abstractLabelHidden;
@property(nonatomic) struct CGRect abstractLabelFrame; // @synthesize abstractLabelFrame=_abstractLabelFrame;
@property(nonatomic) _Bool typeLabelHidden; // @synthesize typeLabelHidden=_typeLabelHidden;
@property(nonatomic) struct CGRect typeLabelFrame; // @synthesize typeLabelFrame=_typeLabelFrame;
@property(nonatomic) _Bool liveTextLabelHidden; // @synthesize liveTextLabelHidden=_liveTextLabelHidden;
@property(nonatomic) struct CGRect liveTextLabelFrame; // @synthesize liveTextLabelFrame=_liveTextLabelFrame;
@property(copy, nonatomic) NSString *infoLabelTextColorThemeKey; // @synthesize infoLabelTextColorThemeKey=_infoLabelTextColorThemeKey;
@property(copy, nonatomic) NSString *infoLabelStr; // @synthesize infoLabelStr=_infoLabelStr;
@property(nonatomic) double infoLabelFontSize; // @synthesize infoLabelFontSize=_infoLabelFontSize;
@property(nonatomic) _Bool infoLabelHidden; // @synthesize infoLabelHidden=_infoLabelHidden;
@property(nonatomic) struct CGRect infoLabelFrame; // @synthesize infoLabelFrame=_infoLabelFrame;
@property(nonatomic) _Bool unInterestedButtonHidden; // @synthesize unInterestedButtonHidden=_unInterestedButtonHidden;
@property(nonatomic) struct CGRect unInterestedButtonFrame; // @synthesize unInterestedButtonFrame=_unInterestedButtonFrame;
@property(nonatomic) _Bool sourceLabelUserInteractionEnabled; // @synthesize sourceLabelUserInteractionEnabled=_sourceLabelUserInteractionEnabled;
@property(copy, nonatomic) NSString *sourceLabelTextColorThemeKey; // @synthesize sourceLabelTextColorThemeKey=_sourceLabelTextColorThemeKey;
@property(copy, nonatomic) NSString *sourceLabelStr; // @synthesize sourceLabelStr=_sourceLabelStr;
@property(nonatomic) double sourceLabelFontSize; // @synthesize sourceLabelFontSize=_sourceLabelFontSize;
@property(nonatomic) _Bool sourceLabelHidden; // @synthesize sourceLabelHidden=_sourceLabelHidden;
@property(nonatomic) struct CGRect sourceLabelFrame; // @synthesize sourceLabelFrame=_sourceLabelFrame;
@property(nonatomic) _Bool sourceImageUserInteractionEnabled; // @synthesize sourceImageUserInteractionEnabled=_sourceImageUserInteractionEnabled;
@property(nonatomic) double sourceNameFirstWordFontSize; // @synthesize sourceNameFirstWordFontSize=_sourceNameFirstWordFontSize;
@property(copy, nonatomic) NSString *sourceNameFirstWord; // @synthesize sourceNameFirstWord=_sourceNameFirstWord;
@property(copy, nonatomic) NSString *sourceImageURLStr; // @synthesize sourceImageURLStr=_sourceImageURLStr;
@property(nonatomic) _Bool sourceImageViewHidden; // @synthesize sourceImageViewHidden=_sourceImageViewHidden;
@property(nonatomic) struct CGRect sourceImageViewFrame; // @synthesize sourceImageViewFrame=_sourceImageViewFrame;
@property(nonatomic) _Bool picViewUserInteractionEnabled; // @synthesize picViewUserInteractionEnabled=_picViewUserInteractionEnabled;
@property(nonatomic) _Bool picViewHiddenMessage; // @synthesize picViewHiddenMessage=_picViewHiddenMessage;
@property(nonatomic) long long picViewStyle; // @synthesize picViewStyle=_picViewStyle;
@property(nonatomic) _Bool picViewHidden; // @synthesize picViewHidden=_picViewHidden;
@property(nonatomic) struct CGRect picViewFrame; // @synthesize picViewFrame=_picViewFrame;
@property(nonatomic) unsigned long long titleLabelNumberOfLines; // @synthesize titleLabelNumberOfLines=_titleLabelNumberOfLines;
@property(copy, nonatomic) NSAttributedString *titleAttributedStr; // @synthesize titleAttributedStr=_titleAttributedStr;
@property(nonatomic) _Bool titleLabelHidden; // @synthesize titleLabelHidden=_titleLabelHidden;
@property(nonatomic) struct CGRect titleLabelFrame; // @synthesize titleLabelFrame=_titleLabelFrame;
@property(nonatomic) _Bool timeLabelHidden; // @synthesize timeLabelHidden=_timeLabelHidden;
@property(nonatomic) struct CGRect timeLabelFrame; // @synthesize timeLabelFrame=_timeLabelFrame;
@property(nonatomic) struct UIEdgeInsets forwardButtonTitleInsets; // @synthesize forwardButtonTitleInsets=_forwardButtonTitleInsets;
@property(nonatomic) struct UIEdgeInsets forwardButtonContentInsets; // @synthesize forwardButtonContentInsets=_forwardButtonContentInsets;
@property(nonatomic) double forwardButtonFontSize; // @synthesize forwardButtonFontSize=_forwardButtonFontSize;
@property(copy, nonatomic) NSString *forwardButtonTextColorThemeKey; // @synthesize forwardButtonTextColorThemeKey=_forwardButtonTextColorThemeKey;
@property(copy, nonatomic) NSString *forwardButtonImageName; // @synthesize forwardButtonImageName=_forwardButtonImageName;
@property(nonatomic) _Bool forwardButtonHidden; // @synthesize forwardButtonHidden=_forwardButtonHidden;
@property(nonatomic) struct CGRect forwardButtonFrame; // @synthesize forwardButtonFrame=_forwardButtonFrame;
@property(nonatomic) struct UIEdgeInsets digButtonTitleInsets; // @synthesize digButtonTitleInsets=_digButtonTitleInsets;
@property(nonatomic) struct UIEdgeInsets digButtonContentInsets; // @synthesize digButtonContentInsets=_digButtonContentInsets;
@property(nonatomic) double digButtonFontSize; // @synthesize digButtonFontSize=_digButtonFontSize;
@property(copy, nonatomic) NSString *digButtonTextColorThemeKey; // @synthesize digButtonTextColorThemeKey=_digButtonTextColorThemeKey;
@property(copy, nonatomic) NSString *digButtonSelectedImageName; // @synthesize digButtonSelectedImageName=_digButtonSelectedImageName;
@property(copy, nonatomic) NSString *digButtonImageName; // @synthesize digButtonImageName=_digButtonImageName;
@property(nonatomic) _Bool digButtonHidden; // @synthesize digButtonHidden=_digButtonHidden;
@property(nonatomic) struct CGRect digButtonFrame; // @synthesize digButtonFrame=_digButtonFrame;
@property(nonatomic) struct UIEdgeInsets commentButtonTitleInsets; // @synthesize commentButtonTitleInsets=_commentButtonTitleInsets;
@property(nonatomic) struct UIEdgeInsets commentButtonContentInsets; // @synthesize commentButtonContentInsets=_commentButtonContentInsets;
@property(nonatomic) double commentButtonFontSize; // @synthesize commentButtonFontSize=_commentButtonFontSize;
@property(copy, nonatomic) NSString *commentButtonTextColorThemeKey; // @synthesize commentButtonTextColorThemeKey=_commentButtonTextColorThemeKey;
@property(copy, nonatomic) NSString *commentButtonImageName; // @synthesize commentButtonImageName=_commentButtonImageName;
@property(nonatomic) _Bool commentButtonHidden; // @synthesize commentButtonHidden=_commentButtonHidden;
@property(nonatomic) struct CGRect commentButtonFrame; // @synthesize commentButtonFrame=_commentButtonFrame;
@property(nonatomic) _Bool moreButtonHidden; // @synthesize moreButtonHidden=_moreButtonHidden;
@property(nonatomic) struct CGRect moreButtonFrame; // @synthesize moreButtonFrame=_moreButtonFrame;
@property(nonatomic) _Bool moreImageViewHidden; // @synthesize moreImageViewHidden=_moreImageViewHidden;
@property(nonatomic) struct CGRect moreImageViewFrame; // @synthesize moreImageViewFrame=_moreImageViewFrame;
@property(nonatomic) _Bool entityLabelHidden; // @synthesize entityLabelHidden=_entityLabelHidden;
@property(nonatomic) struct CGRect entityLabelFrame; // @synthesize entityLabelFrame=_entityLabelFrame;
@property(nonatomic) _Bool subscriptLabelHidden; // @synthesize subscriptLabelHidden=_subscriptLabelHidden;
@property(nonatomic) struct CGRect subscriptLabelFrame; // @synthesize subscriptLabelFrame=_subscriptLabelFrame;
@property(nonatomic) _Bool likeLabelHidden; // @synthesize likeLabelHidden=_likeLabelHidden;
@property(nonatomic) struct CGRect likeLabelFrame; // @synthesize likeLabelFrame=_likeLabelFrame;
@property(nonatomic) _Bool hideTimeForRightPic; // @synthesize hideTimeForRightPic=_hideTimeForRightPic;
@property(nonatomic) double infoBarContainWidth; // @synthesize infoBarContainWidth=_infoBarContainWidth;
@property(nonatomic) double actionLabelY; // @synthesize actionLabelY=_actionLabelY;
@property(nonatomic) double infoBarOriginY; // @synthesize infoBarOriginY=_infoBarOriginY;
@property(nonatomic) double containWidth; // @synthesize containWidth=_containWidth;
@property(nonatomic) double originY; // @synthesize originY=_originY;
@property(nonatomic) double originX; // @synthesize originX=_originX;
@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
@property(nonatomic) unsigned long long listType; // @synthesize listType=_listType;
@property(nonatomic) __weak ExploreOrderedData *orderedData; // @synthesize orderedData=_orderedData;
@property(nonatomic) _Bool needUpdateAllFrame; // @synthesize needUpdateAllFrame=_needUpdateAllFrame;
- (void).cxx_destruct;
- (id)generateFollowButton;
- (double)heightForHeaderInfoRegionWithDislikeWithTop:(double)arg1;
- (double)heightForHeaderInfoRegionWithTop:(double)arg1;
- (double)heightForHeaderInfoRegionInTwoLinesWithTop:(double)arg1 needLayoutDislike:(_Bool)arg2;
- (void)finishCalculating;
- (void)calculateNeedUpdateFrame;
- (void)calculateAllFrame;
- (void)setAllItemsHidden;
- (void)updateFrameForData:(id)arg1 cellWidth:(double)arg2 listType:(unsigned long long)arg3;
- (_Bool)needUpdateHeightCacheForWidth:(double)arg1;
- (id)init;

@end

