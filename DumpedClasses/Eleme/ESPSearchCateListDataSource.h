//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ESPSearchSortFilterDataType.h"
#import "IGListAdapterDataSource.h"

@class ESPFilterKeyValueGroupSeletionStatus, ESPSearchBatchResult, ESPSearchFilterViewModel, ESPSearchSortFilterToolbarSectionController, ESPSortFilterItem, NSArray, NSDictionary, NSSet, NSString;

@interface ESPSearchCateListDataSource : NSObject <IGListAdapterDataSource, ESPSearchSortFilterDataType>
{
    NSString *highlightText;
    NSString *_searchText;
    NSString *_rankID;
    long long _restaurantsCount;
    CDUnknownBlockType _didTapCleanAction;
    CDUnknownBlockType _didSelectRewriteHandler;
    NSDictionary *_sharedTrackInfo;
    CDUnknownBlockType _didSelectSortItem;
    CDUnknownBlockType _selectionCompletionHandler;
    CDUnknownBlockType _didSelectTags;
    NSSet *_selectedDeliveries;
    NSSet *_selectedActivityTypes;
    NSSet *_selectedCosts;
    NSSet *_selectedAttributes;
    ESPSortFilterItem *_selectedSortItem;
    ESPFilterKeyValueGroupSeletionStatus *_tagsData;
    NSArray *_sectionObjects;
    ESPSearchFilterViewModel *_filterDataViewModel;
    ESPSearchBatchResult *_oldBatchResult;
    ESPSearchSortFilterToolbarSectionController *_toolBarController;
}

@property(retain, nonatomic) ESPSearchSortFilterToolbarSectionController *toolBarController; // @synthesize toolBarController=_toolBarController;
@property(retain, nonatomic) ESPSearchBatchResult *oldBatchResult; // @synthesize oldBatchResult=_oldBatchResult;
@property(retain, nonatomic) ESPSearchFilterViewModel *filterDataViewModel; // @synthesize filterDataViewModel=_filterDataViewModel;
@property(copy, nonatomic) NSArray *sectionObjects; // @synthesize sectionObjects=_sectionObjects;
@property(retain, nonatomic) ESPFilterKeyValueGroupSeletionStatus *tagsData; // @synthesize tagsData=_tagsData;
@property(retain, nonatomic) ESPSortFilterItem *selectedSortItem; // @synthesize selectedSortItem=_selectedSortItem;
@property(copy, nonatomic) NSSet *selectedAttributes; // @synthesize selectedAttributes=_selectedAttributes;
@property(copy, nonatomic) NSSet *selectedCosts; // @synthesize selectedCosts=_selectedCosts;
@property(copy, nonatomic) NSSet *selectedActivityTypes; // @synthesize selectedActivityTypes=_selectedActivityTypes;
@property(copy, nonatomic) NSSet *selectedDeliveries; // @synthesize selectedDeliveries=_selectedDeliveries;
@property(copy, nonatomic) CDUnknownBlockType didSelectTags; // @synthesize didSelectTags=_didSelectTags;
@property(copy, nonatomic) CDUnknownBlockType selectionCompletionHandler; // @synthesize selectionCompletionHandler=_selectionCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType didSelectSortItem; // @synthesize didSelectSortItem=_didSelectSortItem;
@property(copy, nonatomic) NSDictionary *sharedTrackInfo; // @synthesize sharedTrackInfo=_sharedTrackInfo;
@property(copy, nonatomic) CDUnknownBlockType didSelectRewriteHandler; // @synthesize didSelectRewriteHandler=_didSelectRewriteHandler;
@property(copy, nonatomic) CDUnknownBlockType didTapCleanAction; // @synthesize didTapCleanAction=_didTapCleanAction;
@property(nonatomic) long long restaurantsCount; // @synthesize restaurantsCount=_restaurantsCount;
@property(copy, nonatomic) NSString *rankID; // @synthesize rankID=_rankID;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(copy, nonatomic) NSString *highlightText; // @synthesize highlightText;
- (void).cxx_destruct;
- (id)trackSortType;
- (void)cleanAllFilters;
- (_Bool)isFiltered;
- (id)generateSortFilterParameterOfThisPass;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)replaceObject:(id)arg1 with:(id)arg2;
- (void)calculateRankIDWhenReset;
- (id)sectionObjectsFromLoadMoreResult:(id)arg1;
- (void)constructLoadingData:(_Bool)arg1;
- (id)sectionObjectsFromBatchResult:(id)arg1 shouldCleanSortFilter:(_Bool)arg2 shouldCleanTags:(_Bool)arg3;
- (void)appendLoadMoreResult:(id)arg1;
- (void)resetWithBatchResult:(id)arg1 shouldCleanSortFilter:(_Bool)arg2 shouldCleanTags:(_Bool)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

