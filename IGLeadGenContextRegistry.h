//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUserSessionClearableObject.h"

@class NSMutableDictionary, NSString;

@interface IGLeadGenContextRegistry : NSObject <IGUserSessionClearableObject>
{
    NSMutableDictionary *_contexts;
}

+ (void)clearForUserPK:(id)arg1;
- (void).cxx_destruct;
- (id)contextForMediaId:(id)arg1;
- (id)init;
- (void)registerContextForFeedItem:(id)arg1 feedItemTracker:(id)arg2 mediaPosition:(long long)arg3 pageCellState:(id)arg4 leadGenController:(id)arg5 loggingDelegate:(id)arg6;
- (void)unregisterContext:(id)arg1;
- (void)willLogOut;
- (void)willSwitchUsers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

