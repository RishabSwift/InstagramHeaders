//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGSearchResultsTab.h"

@class IGSearchAsyncDataSource, IGUserSession, NSString;

@interface IGHashtagSearchResults : NSObject <IGSearchResultsTab>
{
    _Bool _enableNavState;
    _Bool _canShowLocationCell;
    _Bool _canShowPreviewMedia;
    _Bool _shouldShowSectionHeader;
    _Bool _enableFrequentItems;
    IGUserSession *_userSession;
    NSString *_moduleName;
    NSString *_searchType;
    NSString *_viewSubType;
    NSString *_noResultsMessage;
    NSString *_queryType;
    NSString *_tapEventName;
    NSString *_tapCancelEventName;
    IGSearchAsyncDataSource *_dataSource;
}

- (void).cxx_destruct;
- (id)accessibilityIdentifier;
- (void)addLoadedNotifications;
- (void)addLocationTracker;
- (id)allListItemsForSearchText:(id)arg1;
- (id)allSearchResults;
@property(readonly, nonatomic) _Bool canShowLocationCell; // @synthesize canShowLocationCell=_canShowLocationCell;
@property(readonly, nonatomic) _Bool canShowPreviewMedia; // @synthesize canShowPreviewMedia=_canShowPreviewMedia;
@property(readonly, nonatomic) IGSearchAsyncDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) _Bool enableFrequentItems; // @synthesize enableFrequentItems=_enableFrequentItems;
@property(readonly, nonatomic) _Bool enableNavState; // @synthesize enableNavState=_enableNavState;
- (id)fallbackIcon;
- (void)filterBySearchString:(id)arg1 searchInfo:(id)arg2 loadMore:(_Bool)arg3;
- (long long)filterResultState:(long long)arg1;
- (id)filteredRecentItems;
- (void)frequentItemsLoaded;
- (_Bool)hasMore;
- (id)idResultsList;
- (id)initWithUserSession:(id)arg1 dataSource:(id)arg2;
- (_Bool)isLocalItem:(id)arg1;
@property(readonly, copy, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
@property(readonly, copy, nonatomic) NSString *noResultsMessage; // @synthesize noResultsMessage=_noResultsMessage;
- (_Bool)noSearchQuery:(id)arg1;
- (unsigned long long)numberOfLocalResults;
- (void)onSearchTextDidChange:(id)arg1;
@property(readonly, copy, nonatomic) NSString *queryType; // @synthesize queryType=_queryType;
- (id)searchBarPlaceholder;
@property(readonly, copy, nonatomic) NSString *searchType; // @synthesize searchType=_searchType;
- (_Bool)shouldShowFrequentSection;
@property(readonly, nonatomic) _Bool shouldShowSectionHeader; // @synthesize shouldShowSectionHeader=_shouldShowSectionHeader;
- (id)tableSectionsWithViewController:(id)arg1;
@property(readonly, copy, nonatomic) NSString *tapCancelEventName; // @synthesize tapCancelEventName=_tapCancelEventName;
@property(readonly, copy, nonatomic) NSString *tapEventName; // @synthesize tapEventName=_tapEventName;
- (id)title;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, copy, nonatomic) NSString *viewSubType; // @synthesize viewSubType=_viewSubType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

