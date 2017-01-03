//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBLigerProvidesNetworkState.h"

@class NSString;

@interface IGLigerReachabilityListener : NSObject <FBLigerProvidesNetworkState>
{
    long long _reachabilityStatus;
}

- (void)dealloc;
- (id)init;
- (id)networkState;
- (void)networkStateChanged:(id)arg1;
@property(nonatomic) long long reachabilityStatus; // @synthesize reachabilityStatus=_reachabilityStatus;
- (id)stringFromNetworkReachabilityStatus:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

