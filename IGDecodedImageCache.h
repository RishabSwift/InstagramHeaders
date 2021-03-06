//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGCacheWithSnapshot.h"

@class IGLRUCache, NSMapTable, NSObject<OS_dispatch_queue>, NSString;

@interface IGDecodedImageCache : NSObject <IGCacheWithSnapshot>
{
    IGLRUCache *_cache;
    NSMapTable *_weakTrackingMapTable;
    NSObject<OS_dispatch_queue> *_mapTableAccessQueue;
}

+ (long long)defaultCostLimit;
+ (id)sharedDecodedImageCache;
- (void).cxx_destruct;
@property(readonly, nonatomic) IGLRUCache *cache; // @synthesize cache=_cache;
- (void)fetchSnapshot:(CDUnknownBlockType)arg1;
- (id)imageForCacheKey:(id)arg1;
- (id)init;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *mapTableAccessQueue; // @synthesize mapTableAccessQueue=_mapTableAccessQueue;
- (void)removeAllImages;
- (void)removeImageForCacheKey:(id)arg1;
- (void)saveImage:(id)arg1 forCacheKey:(id)arg2;
- (void)setTotalCostLimit:(long long)arg1;
@property(readonly, nonatomic) NSMapTable *weakTrackingMapTable; // @synthesize weakTrackingMapTable=_weakTrackingMapTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

