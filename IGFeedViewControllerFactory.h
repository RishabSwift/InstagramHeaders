//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGFeedViewControllerFactory : NSObject
{
}

+ (void)configureContextualFeed:(id)arg1 title:(id)arg2 subtitle:(id)arg3;
+ (id)contextualFeedViewControllerWithNetworkSource:(id)arg1 userSession:(id)arg2 title:(id)arg3 subtitle:(id)arg4 entityId:(id)arg5 showPullToRefresh:(_Bool)arg6 focusCoordinator:(id)arg7 showExploreContext:(_Bool)arg8 entryPoint:(long long)arg9 loadingPerformanceLogger:(id)arg10;
+ (id)mainFeedViewControllerWithUserSession:(id)arg1 networkSourceController:(id)arg2;
+ (id)profileViewControllerForConfiguration:(id)arg1;
+ (id)singleFeedViewControllerWithItemConfiguration:(id)arg1 networkSource:(id)arg2 userSession:(id)arg3;
+ (id)singleFeedViewControllerWithNetworkSource:(id)arg1 userSession:(id)arg2;

@end
