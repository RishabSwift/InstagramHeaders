//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGStoryCreationViewController, NSSet;

@protocol IGStoryCreationViewControllerNavigationDelegate <NSObject>
- (void)creationViewController:(IGStoryCreationViewController *)arg1 didDismissWithExitPoint:(long long)arg2 destination:(long long)arg3 toDirectRecipients:(NSSet *)arg4;
- (void)creationViewController:(IGStoryCreationViewController *)arg1 didEnterState:(long long)arg2;
- (void)creationViewController:(IGStoryCreationViewController *)arg1 didFinishWithExitPoint:(long long)arg2 shouldAnimateTransition:(_Bool)arg3;
- (void)creationViewController:(IGStoryCreationViewController *)arg1 didSharePostToStory:(_Bool)arg2 toDirect:(_Bool)arg3;
@end

