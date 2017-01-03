//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIScrollViewDelegate.h"

@class IGUnifiedWebViewToolbar, NSString, UIScrollView;

@interface IGUnifiedWebViewScrollViewToolbarCoordinator : NSObject <UIScrollViewDelegate>
{
    _Bool _navigationToolbarIsTransitioning;
    _Bool _navigationToolbarIsPresented;
    UIScrollView *_scrollView;
    IGUnifiedWebViewToolbar *_navigationToolbar;
}

- (void).cxx_destruct;
- (void)hideToolbar;
- (id)initWithScrollView:(id)arg1 navigationToolbar:(id)arg2;
@property(readonly, nonatomic) __weak IGUnifiedWebViewToolbar *navigationToolbar; // @synthesize navigationToolbar=_navigationToolbar;
@property(nonatomic) _Bool navigationToolbarIsPresented; // @synthesize navigationToolbarIsPresented=_navigationToolbarIsPresented;
@property(nonatomic) _Bool navigationToolbarIsTransitioning; // @synthesize navigationToolbarIsTransitioning=_navigationToolbarIsTransitioning;
- (void)panGestureRecognizerEnded:(id)arg1;
- (void)presentToolbar;
@property(readonly, nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)scrollViewPanGestureRecognized:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
