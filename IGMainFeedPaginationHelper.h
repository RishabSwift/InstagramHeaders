//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGFeedScrollViewDelegate.h"
#import "IGFeedScrollViewListener.h"

@class IGListAdapter, NSString;

@interface IGMainFeedPaginationHelper : NSObject <IGFeedScrollViewDelegate, IGFeedScrollViewListener>
{
    double _targetY;
    _Bool _stopAtTargetY;
    _Bool _fastMode;
    _Bool _lastWasUp;
    IGListAdapter *_listAdapter;
}

- (void).cxx_destruct;
- (id)initWithListAdapter:(id)arg1;
@property(readonly, nonatomic) IGListAdapter *listAdapter; // @synthesize listAdapter=_listAdapter;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

