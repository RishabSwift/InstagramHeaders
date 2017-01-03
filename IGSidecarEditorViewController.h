//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGCameraViewControllerProtocol.h"
#import "IGFilterCollectionControllerDelegate.h"
#import "IGFilterControlViewDelegate.h"
#import "IGMediaLibraryViewControllerDelegate.h"
#import "IGPhotoEditorDelegate.h"
#import "IGSidecarMediaCollectionControllerDelegate.h"
#import "IGVideoEditorDelegate.h"

@class IGCameraNavigationController, IGCaptureFlowViewModel, IGComposition, IGFilterCollectionController, IGFilterControlView, IGShareListManager, IGSidecarCollectionController, IGUserSession, NSMutableDictionary, NSString, UIBarButtonItem, UICollectionView, UIImageView;

@interface IGSidecarEditorViewController : IGViewController <IGFilterCollectionControllerDelegate, IGFilterControlViewDelegate, IGMediaLibraryViewControllerDelegate, IGPhotoEditorDelegate, IGSidecarMediaCollectionControllerDelegate, IGVideoEditorDelegate, IGCameraViewControllerProtocol>
{
    _Bool _adjustingAllFilterStrength;
    id <IGSidecarEditorDelegate> _delegate;
    UIBarButtonItem *_backButton;
    UIBarButtonItem *_doneButton;
    IGCaptureFlowViewModel *_captureFlowViewModel;
    IGUserSession *_userSession;
    IGShareListManager *_shareListManager;
    IGComposition *_composition;
    UICollectionView *_filterCollectionView;
    IGFilterCollectionController *_filterTrayController;
    IGFilterControlView *_filterControlView;
    NSMutableDictionary *_adjustedFilterStrengthValues;
    NSString *_filterThumbnailsAssetID;
    IGSidecarCollectionController *_mediaCollectionController;
    Class _filterClass;
    long long _editingIndex;
    UIImageView *_deleteImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *adjustedFilterStrengthValues; // @synthesize adjustedFilterStrengthValues=_adjustedFilterStrengthValues;
@property(nonatomic) _Bool adjustingAllFilterStrength; // @synthesize adjustingAllFilterStrength=_adjustingAllFilterStrength;
- (id)analyticsModule;
@property(retain, nonatomic) UIBarButtonItem *backButton; // @synthesize backButton=_backButton;
- (void)buildFilterPicker;
- (void)buildNavBar;
- (void)cancel;
@property(retain, nonatomic) IGCaptureFlowViewModel *captureFlowViewModel; // @synthesize captureFlowViewModel=_captureFlowViewModel;
@property(retain, nonatomic) IGComposition *composition; // @synthesize composition=_composition;
@property(nonatomic) __weak id <IGSidecarEditorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *deleteImageView; // @synthesize deleteImageView=_deleteImageView;
- (void)dismissFilterControlView:(id)arg1;
- (void)done;
@property(retain, nonatomic) UIBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;
@property(nonatomic) long long editingIndex; // @synthesize editingIndex=_editingIndex;
@property(retain, nonatomic) Class filterClass; // @synthesize filterClass=_filterClass;
@property(retain, nonatomic) UICollectionView *filterCollectionView; // @synthesize filterCollectionView=_filterCollectionView;
@property(retain, nonatomic) IGFilterControlView *filterControlView; // @synthesize filterControlView=_filterControlView;
- (void)filterControlView:(id)arg1 didChangeBorderSelection:(_Bool)arg2;
- (void)filterControlView:(id)arg1 didChangeTintColor:(unsigned long long)arg2 withTintType:(unsigned long long)arg3;
- (void)filterControlView:(id)arg1 didChangeValue:(double)arg2;
- (void)filterControlView:(id)arg1 didChangetintIntensity:(double)arg2 tintType:(unsigned long long)arg3;
- (void)filterControlViewDidEndDragging:(id)arg1;
- (void)filterControlViewDidPressCancel:(id)arg1;
- (void)filterControlViewDidPressDone:(id)arg1;
- (void)filterControlViewDidStartDragging:(id)arg1;
- (void)filterControlViewDidTapRotate:(id)arg1;
- (void)filterControlViewDidToggleGrid:(_Bool)arg1;
- (void)filterControlViewNeedUpdateValue;
- (void)filterController:(id)arg1 didSelectFilterStrengthForClass:(Class)arg2;
- (void)filterController:(id)arg1 didSelectFilterWithClass:(Class)arg2 changed:(_Bool)arg3 willScroll:(_Bool)arg4;
@property(retain, nonatomic) NSString *filterThumbnailsAssetID; // @synthesize filterThumbnailsAssetID=_filterThumbnailsAssetID;
@property(retain, nonatomic) IGFilterCollectionController *filterTrayController; // @synthesize filterTrayController=_filterTrayController;
- (void)generateFilterThumbnailsForMediaMetadata:(id)arg1;
- (struct NSString *)generateUpload;
- (double)getAdjustedFilterStrengthForFilter:(Class)arg1;
- (id)initWithComposition:(id)arg1 shareListManager:(id)arg2 captureFlowViewModel:(id)arg3 userSession:(id)arg4;
- (id)initWithDraft:(id)arg1 shareListManager:(id)arg2 captureFlowViewModel:(id)arg3 userSession:(id)arg4;
@property(retain, nonatomic) IGSidecarCollectionController *mediaCollectionController; // @synthesize mediaCollectionController=_mediaCollectionController;
- (void)mediaLibraryViewController:(id)arg1 didProduceComposition:(id)arg2;
- (void)mediaLibraryViewControllerDidCancel:(id)arg1;
@property(readonly, nonatomic) IGCameraNavigationController *navController;
- (void)onToolCancel:(id)arg1;
- (void)onToolDone:(id)arg1;
- (void)photoEditor:(id)arg1 didProduceDraft:(id)arg2;
- (void)photoEditor:(id)arg1 didProducePhotoWithMediaMetadata:(id)arg2 shareListManager:(id)arg3;
- (void)photoEditorDidCancel:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)presentFilterControlView:(id)arg1 withTitle:(id)arg2 subtitle:(id)arg3 andCompletion:(CDUnknownBlockType)arg4;
- (void)presentFilterControlView:(id)arg1 withTitle:(id)arg2 subtitle:(id)arg3 leftBarButtonItem:(id)arg4 rightBarButtonItem:(id)arg5 andCompletion:(CDUnknownBlockType)arg6;
@property(retain, nonatomic) IGShareListManager *shareListManager; // @synthesize shareListManager=_shareListManager;
- (void)sidecarCollectionController:(id)arg1 didReorderAssetsWithFirstAsset:(id)arg2;
- (void)sidecarCollectionController:(id)arg1 didSelectCellAtIndex:(long long)arg2;
- (void)sidecarCollectionController:(id)arg1 draggedIntoDeleteZone:(_Bool)arg2;
- (void)sidecarCollectionControllerDidTapAddCell:(id)arg1;
- (void)sidecarCollectionControllerWantsEditMedia:(id)arg1 atIndex:(long long)arg2;
- (void)sidecarCollectionControllerWillBeginReorderingAssets:(id)arg1;
- (void)sidecarCollectionControllerWillFinishReorderingAssets:(id)arg1;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)videoEditor:(id)arg1 didProduceDraft:(id)arg2;
- (void)videoEditor:(id)arg1 didProduceVideoWithMetadata:(id)arg2 shareListManager:(id)arg3;
- (void)videoEditorDidCancel:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
