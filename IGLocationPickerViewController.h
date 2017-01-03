//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGAnalyticsModule.h"
#import "IGLocationPickerDelegate.h"
#import "IGNearbyLocationDataSourceDelegate.h"
#import "IGSearchControllerDelegate.h"
#import "UITableViewDelegate.h"

@class IGKVOHandle, IGNearbyLocationDataSource, IGPlainTableView, IGSearchBar, IGSearchController, NSString, UIBarButtonItem;

@interface IGLocationPickerViewController : IGViewController <IGAnalyticsModule, IGLocationPickerDelegate, UITableViewDelegate, IGSearchControllerDelegate, IGNearbyLocationDataSourceDelegate>
{
    IGSearchController *_searchController;
    IGSearchBar *_locationSearchBar;
    IGPlainTableView *_tableView;
    UIBarButtonItem *_locateButton;
    long long _previousStatusBarStyle;
    NSString *_searchSessionId;
    _Bool _isInteractive;
    IGNearbyLocationDataSource *_locationDataSource;
    id <IGLocationPickerDelegate> _delegate;
    long long _numOfViewedResults;
    IGKVOHandle *_contentOffsetObserver;
    NSString *_rankToken;
}

- (void).cxx_destruct;
- (id)analyticsModule;
@property(retain, nonatomic) IGKVOHandle *contentOffsetObserver; // @synthesize contentOffsetObserver=_contentOffsetObserver;
- (void)dealloc;
@property(nonatomic) __weak id <IGLocationPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)enableNavState;
- (void)fetchLocations;
- (id)initWithSearchSessionId:(id)arg1 userSession:(id)arg2;
@property(nonatomic) _Bool isInteractive; // @synthesize isInteractive=_isInteractive;
- (void)loadLocationDataSource;
@property(retain, nonatomic) IGNearbyLocationDataSource *locationDataSource; // @synthesize locationDataSource=_locationDataSource;
- (void)locationDataSourceDidFailLoading;
- (void)locationDataSourceDidFailToLocate;
- (void)locationDataSourceDidFinishLoadingDataSource:(id)arg1;
- (void)locationDataSourceDidStartLoading;
- (void)locationDataSourceWasDeniedAccess;
- (void)locationPickerViewController:(id)arg1 didFinish:(_Bool)arg2 withLocation:(id)arg3;
- (void)logSearchQueryResponseForDataSource:(id)arg1;
- (void)logSelectedLocationForCell:(id)arg1 indexPath:(id)arg2 locations:(id)arg3;
- (void)makeCancelButton;
- (void)makeRefreshButton;
- (void)makeSearchBar;
@property(nonatomic) long long numOfViewedResults; // @synthesize numOfViewedResults=_numOfViewedResults;
- (void)onCancelModal;
- (void)onLocateButtonTapped;
- (void)onLocationDenied:(id)arg1;
- (_Bool)prefersNavigationBarHidden;
- (_Bool)prefersStatusBarHidden;
@property(readonly, nonatomic) NSString *rankToken; // @synthesize rankToken=_rankToken;
- (void)searchController:(id)arg1 searchTextDidChange:(id)arg2;
- (void)searchControllerSearchButtonTapped:(id)arg1;
- (void)searchControllerWillBeginSearch:(id)arg1;
- (void)searchControllerWillEndSearch:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)updateTableInsets;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

