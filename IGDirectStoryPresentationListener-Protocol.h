//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGDirectStoryMessage, IGDirectStoryPresentationManager, NSString;

@protocol IGDirectStoryPresentationListener <NSObject>
- (void)directStoryPresentationManager:(IGDirectStoryPresentationManager *)arg1 didDismissViewerForStoryId:(NSString *)arg2;
- (void)directStoryPresentationManager:(IGDirectStoryPresentationManager *)arg1 didFocusOnMessage:(IGDirectStoryMessage *)arg2 forStoryId:(NSString *)arg3 isReplay:(_Bool)arg4;
@end
