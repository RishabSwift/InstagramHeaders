//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGReelCreationModel, IGStoryCameraPreviewViewController, NSSet;

@protocol IGStoryCameraPreviewViewControllerDelegate <NSObject>
- (void)cameraPreviewViewController:(IGStoryCameraPreviewViewController *)arg1 postToStory:(_Bool)arg2 directRecipients:(NSSet *)arg3 storyModel:(IGReelCreationModel *)arg4 asset:(id <IGQuickCamOutputAsset>)arg5 exitPoint:(long long)arg6;
- (void)cameraPreviewViewControllerDidTapCancel:(IGStoryCameraPreviewViewController *)arg1;
@end

