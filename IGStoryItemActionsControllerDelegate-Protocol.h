//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGStoryItemActionsController, NSString;

@protocol IGStoryItemActionsControllerDelegate <NSObject>
- (void)storyItemActionsControllerDidFinish:(IGStoryItemActionsController *)arg1;
- (void)storyItemActionsControllerDidHideSponsoredPost:(IGStoryItemActionsController *)arg1 withReason:(NSString *)arg2;
- (void)storyItemActionsControllerWillDeletePost:(IGStoryItemActionsController *)arg1;
- (void)storyItemActionsControllerWillHideSponsoredPost:(IGStoryItemActionsController *)arg1;
- (void)storyItemActionsControllerWillReportPost:(IGStoryItemActionsController *)arg1;
- (void)storyItemActionsControllerWillSFSLTPost:(IGStoryItemActionsController *)arg1;
- (void)storyItemActionsControllerWillSavePost:(IGStoryItemActionsController *)arg1;
- (void)storyItemActionsControllerWillSharePost:(IGStoryItemActionsController *)arg1;
@end

