//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGLocationPickerDelegate.h"
#import "IGLocationSuggestionDataSource.h"
#import "IGLocationSuggestionDelegate.h"

@class IGCollectionView, IGLocationMetadata, IGShareListManager, NSString, UIViewController;

@interface IGBroadcastShareLocationManager : NSObject <IGLocationPickerDelegate, IGLocationSuggestionDataSource, IGLocationSuggestionDelegate>
{
    UIViewController *_parentViewController;
    double _locationSuggestionCellHeight;
    IGLocationMetadata *_locationMetadata;
    IGShareListManager *_shareListManager;
    IGCollectionView *_collectionView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)initWithLocationMetadata:(id)arg1 shareListManager:(id)arg2 collectionView:(id)arg3;
@property(readonly, nonatomic) IGLocationMetadata *locationMetadata; // @synthesize locationMetadata=_locationMetadata;
- (void)locationPickerViewController:(id)arg1 didFinish:(_Bool)arg2 withLocation:(id)arg3;
- (void)locationSuggestionCell:(id)arg1 didFinishWithLocation:(id)arg2;
- (void)locationSuggestionCell:(id)arg1 stateChanged:(long long)arg2;
@property(nonatomic) double locationSuggestionCellHeight; // @synthesize locationSuggestionCellHeight=_locationSuggestionCellHeight;
- (void)locationSuggestionCelldidClearLocation:(id)arg1;
@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(readonly, nonatomic) IGShareListManager *shareListManager; // @synthesize shareListManager=_shareListManager;
- (void)updateLocationEnabled;
- (id)viewControllerForPresentingLocationPicker;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

