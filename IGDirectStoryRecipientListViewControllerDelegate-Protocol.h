//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGDirectStoryRecipientListViewController, IGReelCreationModel, NSSet;

@protocol IGDirectStoryRecipientListViewControllerDelegate <NSObject>
- (void)selectRecipientViewControllerDidSend:(IGDirectStoryRecipientListViewController *)arg1 storyModel:(IGReelCreationModel *)arg2 asset:(id <IGQuickCamOutputAsset>)arg3 toStory:(_Bool)arg4 toDirectRecipients:(NSSet *)arg5;
@end

