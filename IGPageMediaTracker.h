//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGPageMediaTracker : NSObject
{
}

+ (void)logEvent:(id)arg1 post:(id)arg2 itemIndex:(long long)arg3 isSponsored:(_Bool)arg4 extra:(id)arg5;
+ (void)logEventWithSuffix:(id)arg1 post:(id)arg2 itemIndex:(long long)arg3 isSponsored:(_Bool)arg4 extra:(id)arg5;
+ (void)mediaDidAppearForItemIndex:(long long)arg1 post:(id)arg2 isSponsored:(_Bool)arg3 extra:(id)arg4;
+ (void)mediaDidDisappearForItemIndex:(long long)arg1 post:(id)arg2 isSponsored:(_Bool)arg3 extra:(id)arg4;
+ (void)mediaDidStartViewingForItemIndex:(long long)arg1 post:(id)arg2 isSponsored:(_Bool)arg3 extra:(id)arg4;
+ (id)tracker;

@end
