//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTHotelBaseCacheBean.h"

@class CTBusinessBean, CTHotelFilterRootNode, CurrentPosotionEntityModel, HotelListRecommendFilterItem, HotelListSearchV2Request, HotelSeniorFilterModel, NSArray, NSAttributedString, NSDictionary, NSMutableArray, NSString, RegionInformationModel;

@interface CTHotelListCacheBean : CTHotelBaseCacheBean
{
    _Bool _hasMoreHotel;
    _Bool _isInterestedHotel;
    _Bool _isShowFavorite;
    _Bool _isNeedRefreshList;
    _Bool _isNeedRefreshMapView;
    _Bool _isGetOverSeaSurrandingHotelData;
    _Bool _comeFromUrl;
    _Bool _isSelectSortType;
    _Bool _isSelectedByUser;
    _Bool _isSaleHotel;
    _Bool _isMainNearbyHotelList;
    _Bool _hasReleatedCity;
    _Bool _isFromLocation;
    _Bool _isAdjustPOIDirectSearch;
    _Bool _isDirectSearchNoResult;
    _Bool _directSearchKeywordIsCity;
    _Bool _needRequestWolves;
    _Bool _isGetDomesticExpandRecommend;
    _Bool _isFromPositionLocation;
    _Bool _needRequestListEncourage;
    _Bool _blockSaveFilterToMainView;
    _Bool _isFromListDirectSearch;
    _Bool _bShowGuide;
    int _sortType;
    int _enterType;
    int _countryProperty;
    int _serviceSendLocation;
    int _distanceType;
    int _reqPersonaliseCouponVer;
    HotelListSearchV2Request *_lastRequest;
    HotelListSearchV2Request *_lastSuccessRequest;
    HotelSeniorFilterModel *_filterModel;
    long long _cityIDFromResponse;
    long long _hotelTotal;
    NSMutableArray *_hotelList;
    NSArray *_lastPageHotelList;
    NSMutableArray *_hotelListOfGHI;
    CurrentPosotionEntityModel *_currentPositionModel;
    NSString *_distanceInfo;
    NSMutableArray *_nearbyHotelsList;
    NSString *_recommendInfo;
    HotelListSearchV2Request *_lastOverSeaSurrandingHotelSuccessRequest;
    long long _overSeaSurrandingHotelTotal;
    NSMutableArray *_hotelListOverSeaSurrounding;
    CTBusinessBean *_selectHotelViewModel;
    RegionInformationModel *_regionInfoModel;
    NSString *_extraDistanceInfo;
    NSMutableArray *_unifyPortolList;
    CTHotelFilterRootNode *_filterRootNode;
    CTHotelFilterRootNode *_locationRootNode;
    CTHotelFilterRootNode *_priceStarRootNode;
    NSString *_releatedFullContenxt;
    NSString *_releatedPlaceHolder;
    long long _relatedSearchType;
    NSMutableArray *_hotelListReleated;
    NSString *_lastHotelListTraceId;
    NSDictionary *_lastServiceTraceAdditionValues;
    NSString *_lastHotelListServiceCode;
    NSString *_hotelListTip;
    NSArray *_additionSettingList;
    NSMutableArray *_recommendCities;
    long long _selectedHotelIndex;
    NSMutableArray *_personalRecommendHotels;
    long long _queryBitMap;
    long long _queryBitMapUse;
    HotelListSearchV2Request *_lastDomesticExpandRecommendSuccessRequest;
    long long _domesticExpandRecommendHotelTotal;
    NSString *_domesticExpandRecommendDesc;
    NSMutableArray *_domesticExpandRecommendList;
    long long _priceTimer;
    NSArray *_priceDataList;
    NSString *_jumpBuzURL;
    NSArray *_hotelBussinessZoneItemList;
    NSArray *_hotelGuideItemList;
    NSAttributedString *_listEncourageTips;
    HotelListRecommendFilterItem *_recommendFilterItem;
    NSArray *_filterSortModels;
    struct CLLocationCoordinate2D _listFilterCoord;
}

@property(nonatomic) _Bool bShowGuide; // @synthesize bShowGuide=_bShowGuide;
@property(copy, nonatomic) NSArray *filterSortModels; // @synthesize filterSortModels=_filterSortModels;
@property(nonatomic) _Bool isFromListDirectSearch; // @synthesize isFromListDirectSearch=_isFromListDirectSearch;
@property(retain, nonatomic) HotelListRecommendFilterItem *recommendFilterItem; // @synthesize recommendFilterItem=_recommendFilterItem;
@property(nonatomic) struct CLLocationCoordinate2D listFilterCoord; // @synthesize listFilterCoord=_listFilterCoord;
@property(nonatomic) _Bool blockSaveFilterToMainView; // @synthesize blockSaveFilterToMainView=_blockSaveFilterToMainView;
@property(retain, nonatomic) NSAttributedString *listEncourageTips; // @synthesize listEncourageTips=_listEncourageTips;
@property(nonatomic) _Bool needRequestListEncourage; // @synthesize needRequestListEncourage=_needRequestListEncourage;
@property(nonatomic) _Bool isFromPositionLocation; // @synthesize isFromPositionLocation=_isFromPositionLocation;
@property(retain, nonatomic) NSArray *hotelGuideItemList; // @synthesize hotelGuideItemList=_hotelGuideItemList;
@property(retain, nonatomic) NSArray *hotelBussinessZoneItemList; // @synthesize hotelBussinessZoneItemList=_hotelBussinessZoneItemList;
@property(retain, nonatomic) NSString *jumpBuzURL; // @synthesize jumpBuzURL=_jumpBuzURL;
@property(retain) NSArray *priceDataList; // @synthesize priceDataList=_priceDataList;
@property(nonatomic) long long priceTimer; // @synthesize priceTimer=_priceTimer;
@property(retain, nonatomic) NSMutableArray *domesticExpandRecommendList; // @synthesize domesticExpandRecommendList=_domesticExpandRecommendList;
@property(copy, nonatomic) NSString *domesticExpandRecommendDesc; // @synthesize domesticExpandRecommendDesc=_domesticExpandRecommendDesc;
@property(nonatomic) long long domesticExpandRecommendHotelTotal; // @synthesize domesticExpandRecommendHotelTotal=_domesticExpandRecommendHotelTotal;
@property(retain, nonatomic) HotelListSearchV2Request *lastDomesticExpandRecommendSuccessRequest; // @synthesize lastDomesticExpandRecommendSuccessRequest=_lastDomesticExpandRecommendSuccessRequest;
@property(nonatomic) _Bool isGetDomesticExpandRecommend; // @synthesize isGetDomesticExpandRecommend=_isGetDomesticExpandRecommend;
@property(nonatomic) int reqPersonaliseCouponVer; // @synthesize reqPersonaliseCouponVer=_reqPersonaliseCouponVer;
@property(nonatomic) _Bool needRequestWolves; // @synthesize needRequestWolves=_needRequestWolves;
@property(nonatomic) long long queryBitMapUse; // @synthesize queryBitMapUse=_queryBitMapUse;
@property(nonatomic) long long queryBitMap; // @synthesize queryBitMap=_queryBitMap;
@property(retain, nonatomic) NSMutableArray *personalRecommendHotels; // @synthesize personalRecommendHotels=_personalRecommendHotels;
@property(nonatomic) long long selectedHotelIndex; // @synthesize selectedHotelIndex=_selectedHotelIndex;
@property(nonatomic) int distanceType; // @synthesize distanceType=_distanceType;
@property(retain, nonatomic) NSMutableArray *recommendCities; // @synthesize recommendCities=_recommendCities;
@property(nonatomic) _Bool directSearchKeywordIsCity; // @synthesize directSearchKeywordIsCity=_directSearchKeywordIsCity;
@property(nonatomic) _Bool isDirectSearchNoResult; // @synthesize isDirectSearchNoResult=_isDirectSearchNoResult;
@property(retain, nonatomic) NSArray *additionSettingList; // @synthesize additionSettingList=_additionSettingList;
@property(nonatomic) _Bool isAdjustPOIDirectSearch; // @synthesize isAdjustPOIDirectSearch=_isAdjustPOIDirectSearch;
@property(nonatomic) _Bool isFromLocation; // @synthesize isFromLocation=_isFromLocation;
@property(copy, nonatomic) NSString *hotelListTip; // @synthesize hotelListTip=_hotelListTip;
@property(retain, nonatomic) NSString *lastHotelListServiceCode; // @synthesize lastHotelListServiceCode=_lastHotelListServiceCode;
@property(retain, nonatomic) NSDictionary *lastServiceTraceAdditionValues; // @synthesize lastServiceTraceAdditionValues=_lastServiceTraceAdditionValues;
@property(retain, nonatomic) NSString *lastHotelListTraceId; // @synthesize lastHotelListTraceId=_lastHotelListTraceId;
@property(retain, nonatomic) NSMutableArray *hotelListReleated; // @synthesize hotelListReleated=_hotelListReleated;
@property(nonatomic) long long relatedSearchType; // @synthesize relatedSearchType=_relatedSearchType;
@property(copy, nonatomic) NSString *releatedPlaceHolder; // @synthesize releatedPlaceHolder=_releatedPlaceHolder;
@property(retain, nonatomic) NSString *releatedFullContenxt; // @synthesize releatedFullContenxt=_releatedFullContenxt;
@property(nonatomic) _Bool hasReleatedCity; // @synthesize hasReleatedCity=_hasReleatedCity;
@property(nonatomic) _Bool isMainNearbyHotelList; // @synthesize isMainNearbyHotelList=_isMainNearbyHotelList;
@property(retain, nonatomic) CTHotelFilterRootNode *priceStarRootNode; // @synthesize priceStarRootNode=_priceStarRootNode;
@property(retain, nonatomic) CTHotelFilterRootNode *locationRootNode; // @synthesize locationRootNode=_locationRootNode;
@property(retain, nonatomic) CTHotelFilterRootNode *filterRootNode; // @synthesize filterRootNode=_filterRootNode;
@property(nonatomic) _Bool isSaleHotel; // @synthesize isSaleHotel=_isSaleHotel;
@property(retain, nonatomic) NSMutableArray *unifyPortolList; // @synthesize unifyPortolList=_unifyPortolList;
@property(nonatomic) _Bool isSelectedByUser; // @synthesize isSelectedByUser=_isSelectedByUser;
@property(nonatomic) _Bool isSelectSortType; // @synthesize isSelectSortType=_isSelectSortType;
@property(retain, nonatomic) NSString *extraDistanceInfo; // @synthesize extraDistanceInfo=_extraDistanceInfo;
@property(nonatomic) _Bool comeFromUrl; // @synthesize comeFromUrl=_comeFromUrl;
@property(nonatomic) int serviceSendLocation; // @synthesize serviceSendLocation=_serviceSendLocation;
@property(nonatomic) int countryProperty; // @synthesize countryProperty=_countryProperty;
@property(retain, nonatomic) RegionInformationModel *regionInfoModel; // @synthesize regionInfoModel=_regionInfoModel;
@property(retain, nonatomic) CTBusinessBean *selectHotelViewModel; // @synthesize selectHotelViewModel=_selectHotelViewModel;
@property(retain, nonatomic) NSMutableArray *hotelListOverSeaSurrounding; // @synthesize hotelListOverSeaSurrounding=_hotelListOverSeaSurrounding;
@property(nonatomic) long long overSeaSurrandingHotelTotal; // @synthesize overSeaSurrandingHotelTotal=_overSeaSurrandingHotelTotal;
@property(nonatomic) _Bool isGetOverSeaSurrandingHotelData; // @synthesize isGetOverSeaSurrandingHotelData=_isGetOverSeaSurrandingHotelData;
@property(retain, nonatomic) HotelListSearchV2Request *lastOverSeaSurrandingHotelSuccessRequest; // @synthesize lastOverSeaSurrandingHotelSuccessRequest=_lastOverSeaSurrandingHotelSuccessRequest;
@property(copy, nonatomic) NSString *recommendInfo; // @synthesize recommendInfo=_recommendInfo;
@property(retain, nonatomic) NSMutableArray *nearbyHotelsList; // @synthesize nearbyHotelsList=_nearbyHotelsList;
@property(nonatomic) _Bool isNeedRefreshMapView; // @synthesize isNeedRefreshMapView=_isNeedRefreshMapView;
@property(nonatomic) _Bool isNeedRefreshList; // @synthesize isNeedRefreshList=_isNeedRefreshList;
@property(nonatomic) _Bool isShowFavorite; // @synthesize isShowFavorite=_isShowFavorite;
@property(nonatomic) _Bool isInterestedHotel; // @synthesize isInterestedHotel=_isInterestedHotel;
@property(copy, nonatomic) NSString *distanceInfo; // @synthesize distanceInfo=_distanceInfo;
@property(retain, nonatomic) CurrentPosotionEntityModel *currentPositionModel; // @synthesize currentPositionModel=_currentPositionModel;
@property(retain, nonatomic) NSMutableArray *hotelListOfGHI; // @synthesize hotelListOfGHI=_hotelListOfGHI;
@property(retain, nonatomic) NSArray *lastPageHotelList; // @synthesize lastPageHotelList=_lastPageHotelList;
@property(retain, nonatomic) NSMutableArray *hotelList; // @synthesize hotelList=_hotelList;
@property(nonatomic) long long hotelTotal; // @synthesize hotelTotal=_hotelTotal;
@property(nonatomic) _Bool hasMoreHotel; // @synthesize hasMoreHotel=_hasMoreHotel;
@property(nonatomic) int enterType; // @synthesize enterType=_enterType;
@property(nonatomic) long long cityIDFromResponse; // @synthesize cityIDFromResponse=_cityIDFromResponse;
@property(nonatomic) int sortType; // @synthesize sortType=_sortType;
@property(copy, nonatomic) HotelSeniorFilterModel *filterModel; // @synthesize filterModel=_filterModel;
@property(retain, nonatomic) HotelListSearchV2Request *lastSuccessRequest; // @synthesize lastSuccessRequest=_lastSuccessRequest;
@property(retain, nonatomic) HotelListSearchV2Request *lastRequest; // @synthesize lastRequest=_lastRequest;
- (void).cxx_destruct;
- (void)filterType:(id)arg1 DataArray:(id)arg2;
- (void)setDefaultfiterlist:(id)arg1;
- (void)resetOtherAndOutfilterRoot:(id)arg1:(id)arg2;
- (_Bool)isDirectSearchPOI;
- (long long)getSelectedFilterCount;
- (id)getSaveInfo:(id)arg1 value:(id)arg2;
- (id)getCompensateCityModel;
- (void)bindListFilterToRoomFilter:(id)arg1 hotelType:(int)arg2;
- (void)save:(id)arg1 nextCacheBean:(id)arg2;
- (void)initCache;
- (void)setHotelBussinessZoneItemList:(id)arg1 dataFor:(int)arg2;

@end

