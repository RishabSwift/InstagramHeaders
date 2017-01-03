//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RCTView.h"

#import "RCTAutoInsetsProtocol.h"
#import "RCTScrollableProtocol.h"
#import "UIScrollViewDelegate.h"

@class NSHashTable, NSIndexSet, NSMutableArray, NSString, RCTCustomScrollView, RCTEventDispatcher, UIScrollView, UIView;

@interface RCTScrollView : RCTView <UIScrollViewDelegate, RCTScrollableProtocol, RCTAutoInsetsProtocol>
{
    RCTEventDispatcher *_eventDispatcher;
    RCTCustomScrollView *_scrollView;
    UIView *_contentView;
    double _lastScrollDispatchTime;
    NSMutableArray *_cachedChildFrames;
    _Bool _allowNextScrollNoMatterWhat;
    struct CGRect _lastClippedToRect;
    unsigned short _coalescingKey;
    NSString *_lastEmittedEventName;
    NSHashTable *_scrollListeners;
    double _lastNonZeroTranslationAlongAxis;
    _Bool _automaticallyAdjustContentInsets;
    int _snapToInterval;
    double _scrollEventThrottle;
    NSString *_snapToAlignment;
    CDUnknownBlockType _onScrollBeginDrag;
    CDUnknownBlockType _onScroll;
    CDUnknownBlockType _onScrollEndDrag;
    CDUnknownBlockType _onMomentumScrollBegin;
    CDUnknownBlockType _onMomentumScrollEnd;
    CDUnknownBlockType _onScrollAnimationEnd;
    struct CGSize _contentSize;
    struct UIEdgeInsets _contentInset;
}

- (void).cxx_destruct;
- (struct CGSize)_calculateViewportSize;
- (void)addScrollListener:(id)arg1;
- (_Bool)alwaysBounceHorizontal;
- (_Bool)alwaysBounceVertical;
@property(nonatomic) _Bool automaticallyAdjustContentInsets; // @synthesize automaticallyAdjustContentInsets=_automaticallyAdjustContentInsets;
- (_Bool)bounces;
- (_Bool)bouncesZoom;
- (id)calculateChildFramesData;
- (struct CGPoint)calculateOffsetForContentSize:(struct CGSize)arg1;
- (_Bool)canCancelContentTouches;
@property(nonatomic) _Bool centerContent;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)dealloc;
- (double)decelerationRate;
- (void)didSetProps:(id)arg1;
- (void)didUpdateReactSubviews;
- (long long)indicatorStyle;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventDispatcher:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)insertReactSubview:(id)arg1 atIndex:(long long)arg2;
- (_Bool)isDirectionalLockEnabled;
- (_Bool)isPagingEnabled;
- (_Bool)isScrollEnabled;
- (long long)keyboardDismissMode;
- (void)layoutSubviews;
- (double)maximumZoomScale;
- (double)minimumZoomScale;
@property(copy, nonatomic) CDUnknownBlockType onMomentumScrollBegin; // @synthesize onMomentumScrollBegin=_onMomentumScrollBegin;
@property(copy, nonatomic) CDUnknownBlockType onMomentumScrollEnd; // @synthesize onMomentumScrollEnd=_onMomentumScrollEnd;
@property(copy, nonatomic) CDUnknownBlockType onScroll; // @synthesize onScroll=_onScroll;
@property(copy, nonatomic) CDUnknownBlockType onScrollAnimationEnd; // @synthesize onScrollAnimationEnd=_onScrollAnimationEnd;
@property(copy, nonatomic) CDUnknownBlockType onScrollBeginDrag; // @synthesize onScrollBeginDrag=_onScrollBeginDrag;
@property(copy, nonatomic) CDUnknownBlockType onScrollEndDrag; // @synthesize onScrollEndDrag=_onScrollEndDrag;
- (void)reactBridgeDidFinishTransaction;
- (void)refreshContentInset;
- (void)removeReactSubview:(id)arg1;
- (void)removeScrollListener:(id)arg1;
@property(nonatomic) double scrollEventThrottle; // @synthesize scrollEventThrottle=_scrollEventThrottle;
- (struct UIEdgeInsets)scrollIndicatorInsets;
- (void)scrollToOffset:(struct CGPoint)arg1;
- (void)scrollToOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (_Bool)scrollsToTop;
- (void)sendScrollEventWithName:(id)arg1 scrollView:(id)arg2 userData:(id)arg3;
- (void)setAlwaysBounceHorizontal:(_Bool)arg1;
- (void)setAlwaysBounceVertical:(_Bool)arg1;
- (void)setBounces:(_Bool)arg1;
- (void)setBouncesZoom:(_Bool)arg1;
- (void)setCanCancelContentTouches:(_Bool)arg1;
- (void)setClipsToBounds:(_Bool)arg1;
- (void)setDecelerationRate:(double)arg1;
- (void)setDirectionalLockEnabled:(_Bool)arg1;
- (void)setIndicatorStyle:(long long)arg1;
- (void)setKeyboardDismissMode:(long long)arg1;
- (void)setMaximumZoomScale:(double)arg1;
- (void)setMinimumZoomScale:(double)arg1;
- (void)setPagingEnabled:(_Bool)arg1;
- (void)setRemoveClippedSubviews:(_Bool)arg1;
- (void)setScrollEnabled:(_Bool)arg1;
- (void)setScrollIndicatorInsets:(struct UIEdgeInsets)arg1;
- (void)setScrollsToTop:(_Bool)arg1;
- (void)setShowsHorizontalScrollIndicator:(_Bool)arg1;
- (void)setShowsVerticalScrollIndicator:(_Bool)arg1;
@property(copy, nonatomic) NSString *snapToAlignment; // @synthesize snapToAlignment=_snapToAlignment;
@property(nonatomic) int snapToInterval; // @synthesize snapToInterval=_snapToInterval;
@property(copy, nonatomic) NSIndexSet *stickyHeaderIndices;
- (void)setZoomScale:(double)arg1;
- (_Bool)showsHorizontalScrollIndicator;
- (_Bool)showsVerticalScrollIndicator;
- (void)updateClippedSubviews;
- (id)viewForZoomingInScrollView:(id)arg1;
- (double)zoomScale;
- (void)zoomToRect:(struct CGRect)arg1 animated:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

