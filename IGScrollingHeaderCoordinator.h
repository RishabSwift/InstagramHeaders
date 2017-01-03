//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGNavigationBar, IGScrollingHeaderItem, NSSet, UIScrollView, UIView, UIViewController;

@interface IGScrollingHeaderCoordinator : NSObject
{
    _Bool _isAnimatingTransition;
    UIViewController *_activeViewController;
    IGNavigationBar *_navigationBar;
    UIView *_statusBar;
    IGScrollingHeaderItem *_activeHeaderItem;
    double _headerAdjustmentAmount;
    UIScrollView *_activeScrollView;
    NSSet *_scrollingViews;
    double _headerAnchor;
}

+ (id)headerSnapshotForViewController:(id)arg1 navigationBar:(id)arg2;
+ (unsigned long long)navigationBarStateForViewController:(id)arg1;
+ (id)scrollingHeaderItemForViewController:(id)arg1;
+ (id)scrollingHeaderViewControllerForViewController:(id)arg1;
+ (unsigned long long)statusBarStateForViewController:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak IGScrollingHeaderItem *activeHeaderItem; // @synthesize activeHeaderItem=_activeHeaderItem;
@property(nonatomic) __weak UIScrollView *activeScrollView; // @synthesize activeScrollView=_activeScrollView;
@property(nonatomic) __weak UIViewController *activeViewController; // @synthesize activeViewController=_activeViewController;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)dealloc;
@property(nonatomic) double headerAdjustmentAmount; // @synthesize headerAdjustmentAmount=_headerAdjustmentAmount;
@property(nonatomic) double headerAnchor; // @synthesize headerAnchor=_headerAnchor;
- (id)initWithNavigationBar:(id)arg1;
@property(nonatomic) _Bool isAnimatingTransition; // @synthesize isAnimatingTransition=_isAnimatingTransition;
- (void)layoutHeaderForActiveViewControllerAnimated:(_Bool)arg1;
- (void)layoutHeaderForViewController:(id)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) __weak IGNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onDidBeginDragging:(id)arg1;
- (void)onDidEndDecelerating:(id)arg1;
- (void)onDidEndDragging:(id)arg1;
- (void)positionHeaderAfterScrolling;
- (void)releaseActiveViewController:(id)arg1;
@property(readonly, nonatomic) NSSet *scrollingViews; // @synthesize scrollingViews=_scrollingViews;
- (void)setHeaderScrolledAway:(_Bool)arg1 forViewController:(id)arg2 animated:(_Bool)arg3;
- (void)setHeaderY:(double)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) __weak UIView *statusBar; // @synthesize statusBar=_statusBar;
- (void)statusBarFrameWillChange:(id)arg1;
- (void)synchronizeViewControllerHeaderState:(id)arg1;
- (void)updateHeaderAnimated:(_Bool)arg1;
- (void)updateNavigationOverlayWithPercentVisible:(double)arg1;
- (void)updateStatusBarIfNeededWithTransform:(struct CGAffineTransform)arg1;
- (void)updateTransformNavigationViews:(id)arg1 percentVisible:(double)arg2;

@end
