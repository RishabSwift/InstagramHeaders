//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGEmojiSectionControllerDelegate.h"
#import "IGListAdapterDataSource.h"
#import "IGLocationPickerDelegate.h"
#import "IGStaticStickerSectionControllerDelegate.h"
#import "IGStoryEmojiDataSourceDelegate.h"
#import "IGTimeStickerSectionControllerDelegate.h"
#import "IGUniversalLocationStickerSectionControllerDelegate.h"
#import "UICollectionViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"

@class CAGradientLayer, IGEmojiFitzpatrickController, IGEmojiFitzpatrickTooltipPresenter, IGGridCollectionViewLayout, IGGridCollectionViewLayoutConfiguration, IGListAdapter, IGListCollectionView, IGStoryComposerWaterfallLoggingContext, IGStoryEmojiDataSource, IGUniversalLocationStickerModel, IGUserSession, NSDate, NSString, UIButton, UICollectionView, UILongPressGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer, UIView;

@interface IGStoryEmojiViewController : IGViewController <IGEmojiSectionControllerDelegate, IGListAdapterDataSource, IGStaticStickerSectionControllerDelegate, IGTimeStickerSectionControllerDelegate, IGUniversalLocationStickerSectionControllerDelegate, IGStoryEmojiDataSourceDelegate, IGLocationPickerDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate, UICollectionViewDelegate>
{
    UICollectionView *_fitzpatrickView;
    IGListCollectionView *_collectionView;
    id <IGStoryEmojiViewControllerDelegate> _delegate;
    IGGridCollectionViewLayout *_layout;
    IGGridCollectionViewLayoutConfiguration *_layoutConfig;
    IGListAdapter *_listAdapter;
    IGStoryEmojiDataSource *_dataSource;
    UILongPressGestureRecognizer *_longPressGesture;
    double _initialY;
    UIPanGestureRecognizer *_panGesture;
    UITapGestureRecognizer *_tapGesture;
    IGEmojiFitzpatrickController *_fitzpatrickController;
    IGEmojiFitzpatrickTooltipPresenter *_fitzpatrickPresenter;
    UIView *_containerView;
    UIView *_blurEffectView;
    UIButton *_chevronView;
    UIView *_collectionContainerView;
    CAGradientLayer *_collectionContainerMask;
    IGUserSession *_userSession;
    unsigned long long _state;
    IGStoryComposerWaterfallLoggingContext *_loggingContext;
    NSDate *_storyCreationDate;
    double _lastContentOffsetY;
    IGUniversalLocationStickerModel *_locationStickerModel;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (void)animateContainerViewToTop;
@property(readonly, nonatomic) UIView *blurEffectView; // @synthesize blurEffectView=_blurEffectView;
@property(readonly, nonatomic) UIButton *chevronView; // @synthesize chevronView=_chevronView;
@property(readonly, nonatomic) CAGradientLayer *collectionContainerMask; // @synthesize collectionContainerMask=_collectionContainerMask;
@property(readonly, nonatomic) UIView *collectionContainerView; // @synthesize collectionContainerView=_collectionContainerView;
@property(readonly, nonatomic) IGListCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) IGStoryEmojiDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)dealloc;
@property(nonatomic) __weak id <IGStoryEmojiViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didLongPress:(id)arg1;
- (void)didTapChevronButton:(id)arg1;
- (void)dismissSelf;
- (void)emojiSectionController:(id)arg1 didSelectEmojiUnicode:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (void)fetchStaticStickersWithLocationPermissionIfPossible;
@property(retain, nonatomic) IGEmojiFitzpatrickController *fitzpatrickController; // @synthesize fitzpatrickController=_fitzpatrickController;
@property(readonly, nonatomic) IGEmojiFitzpatrickTooltipPresenter *fitzpatrickPresenter; // @synthesize fitzpatrickPresenter=_fitzpatrickPresenter;
@property(readonly, nonatomic) UICollectionView *fitzpatrickView; // @synthesize fitzpatrickView=_fitzpatrickView;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handlePan:(id)arg1;
- (void)handleTap:(id)arg1;
- (id)indexPathForItem:(id)arg1;
- (id)initWithUserSession:(id)arg1 loggingContext:(id)arg2 dataSource:(id)arg3;
- (double)initialPaddingForContainerView;
@property(nonatomic) double initialY; // @synthesize initialY=_initialY;
- (_Bool)isCollectionViewBelowGesture:(id)arg1;
@property(nonatomic) double lastContentOffsetY; // @synthesize lastContentOffsetY=_lastContentOffsetY;
@property(readonly, nonatomic) IGGridCollectionViewLayout *layout; // @synthesize layout=_layout;
@property(readonly, nonatomic) IGGridCollectionViewLayoutConfiguration *layoutConfig; // @synthesize layoutConfig=_layoutConfig;
@property(readonly, nonatomic) IGListAdapter *listAdapter; // @synthesize listAdapter=_listAdapter;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (void)locationPickerViewController:(id)arg1 didFinish:(_Bool)arg2 withLocation:(id)arg3;
@property(retain, nonatomic) IGUniversalLocationStickerModel *locationStickerModel; // @synthesize locationStickerModel=_locationStickerModel;
@property(readonly, nonatomic) IGStoryComposerWaterfallLoggingContext *loggingContext; // @synthesize loggingContext=_loggingContext;
@property(readonly, nonatomic) UILongPressGestureRecognizer *longPressGesture; // @synthesize longPressGesture=_longPressGesture;
- (id)objectsForListAdapter:(id)arg1;
- (void)onLocationPermissionAuthorized;
- (void)onLocationPermissionDenied;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
- (void)presentFitzpatrickViewAtIndexPathIfNeeded:(id)arg1;
- (void)presentLocationPicker;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrolllViewDidEndScrolling:(id)arg1;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void)setUpCollectionViewAndAdapter;
- (void)setUpContainerView;
- (void)setUpGestures;
- (void)staticStickerSectionController:(id)arg1 didSelectStaticSticker:(id)arg2;
@property(readonly, nonatomic) NSDate *storyCreationDate; // @synthesize storyCreationDate=_storyCreationDate;
- (void)storyEmojiDataSource:(id)arg1 didLoadItems:(id)arg2;
@property(readonly, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
- (void)timeStickerSectionController:(id)arg1 didSelectTimeStickerModel:(id)arg2;
- (void)universalLocationStickerSectionController:(id)arg1 didSelectLocationStickerModel:(id)arg2;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
