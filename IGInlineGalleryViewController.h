//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGInlineGalleryDataSourceDelegate.h"
#import "IGInlineGalleryViewDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class IGInlineGalleryHostingView, IGTooltipView, NSString;

@interface IGInlineGalleryViewController : UIViewController <IGInlineGalleryDataSourceDelegate, IGInlineGalleryViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate>
{
    _Bool _isDataSourceInitialized;
    id <IGInlineGalleryPresenter> _delegate;
    long long _style;
    long long _state;
    id <IGInlineGalleryDataSource> _libraryManager;
    IGTooltipView *_NUXView;
    IGInlineGalleryHostingView *_inlineGalleryView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGTooltipView *NUXView; // @synthesize NUXView=_NUXView;
- (void)applicationDidEnterForeground;
- (void)applicationWillResignActive;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)dealloc;
@property(nonatomic) __weak id <IGInlineGalleryPresenter> delegate; // @synthesize delegate=_delegate;
- (void)didTapCameraForInlineGalleryView:(id)arg1;
- (void)didTapCancelForInlineGalleryView:(id)arg1;
- (void)didTapOutsideInlineGalleryView:(id)arg1;
- (void)dismissButtonTappedForInlineGalleryView:(id)arg1;
- (id)init;
- (void)inlineGalleryDataSourceDidChange:(id)arg1;
@property(retain, nonatomic) IGInlineGalleryHostingView *inlineGalleryView; // @synthesize inlineGalleryView=_inlineGalleryView;
@property(nonatomic) _Bool isDataSourceInitialized; // @synthesize isDataSourceInitialized=_isDataSourceInitialized;
- (_Bool)isMediaReadyAndAvailable;
- (_Bool)isSeeAllCell:(id)arg1;
- (_Bool)isUserInitiated;
@property(retain, nonatomic) id <IGInlineGalleryDataSource> libraryManager; // @synthesize libraryManager=_libraryManager;
- (void)libraryManagerDoFetchAndCheck;
- (void)loadView;
- (id)loggingExtras;
- (void)openLibraryToAllMedia;
- (void)scrollViewDidScroll:(id)arg1;
- (void)seeAllTappedForInlineGalleryView:(id)arg1;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void)setState:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void)titleBarTappedForInlineGalleryView:(id)arg1;
- (void)updateViewFrame;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

