//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGCellSwipeActionManager, UIView;

@protocol IGCellSwipeActionManagerSwipingDelegate <NSObject>
- (void)cellSwipeActionManager:(IGCellSwipeActionManager *)arg1 didCompleteSwipeActionForButton:(UIView *)arg2;
- (void)cellSwipeActionManager:(IGCellSwipeActionManager *)arg1 willCompleteSwipeActionForButton:(UIView *)arg2;
- (_Bool)cellSwipeActionManagerShouldAllowSwipeToAction:(IGCellSwipeActionManager *)arg1;
@end
