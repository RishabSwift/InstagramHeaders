//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCTURLRequestHandler.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, RCTBridge;

@interface RCTImageStoreManager : NSObject <RCTURLRequestHandler>
{
    NSMutableDictionary *_store;
    unsigned long long _id;
    NSObject<OS_dispatch_queue> *_methodQueue;
}

+ (id)__rct_export__1002;
+ (id)__rct_export__1153;
+ (id)__rct_export__860;
+ (id)__rct_export__921;
+ (void)load;
+ (id)moduleName;
- (void).cxx_destruct;
- (id)_storeImageData:(id)arg1;
- (void)addImageFromBase64:(id)arg1 successCallback:(CDUnknownBlockType)arg2 errorCallback:(CDUnknownBlockType)arg3;
- (_Bool)canHandleRequest:(id)arg1;
- (void)cancelRequest:(id)arg1;
- (void)getBase64ForTag:(id)arg1 successCallback:(CDUnknownBlockType)arg2 errorCallback:(CDUnknownBlockType)arg3;
- (void)getImageDataForTag:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)getImageForTag:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)hasImageForTag:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)imageForTag:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue; // @synthesize methodQueue=_methodQueue;
- (void)removeImageForTag:(id)arg1;
- (void)removeImageForTag:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)sendRequest:(id)arg1 withDelegate:(id)arg2;
- (id)storeImage:(id)arg1;
- (void)storeImage:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)storeImageData:(id)arg1 withBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

