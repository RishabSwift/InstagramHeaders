//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSSet;

@interface IGItemVisibilityTracker : NSObject
{
    NSSet *_lastVisibleItems;
    NSMutableSet *_viewedItems;
    _Bool _trackingDisabled;
    id <IGItemVisibilityTrackerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGItemVisibilityTrackerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
@property(nonatomic) _Bool trackingDisabled; // @synthesize trackingDisabled=_trackingDisabled;
- (void)updateItemViewedWithItem:(id)arg1;
- (void)updateItemVisibilitiesWithSet:(id)arg1;

@end

