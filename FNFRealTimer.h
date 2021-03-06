//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FNFTimer.h"

@class NSObject<OS_dispatch_source>, NSString;

@interface FNFRealTimer : NSObject <FNFTimer>
{
    NSObject<OS_dispatch_source> *_timer;
    _Bool _suspended;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithInterval:(unsigned long long)arg1 fireOnce:(_Bool)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;
- (void)pause;
- (void)resume;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

