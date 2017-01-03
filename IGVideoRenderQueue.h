//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUserSessionClearableObject.h"
#import "IGVideoRendererDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface IGVideoRenderQueue : NSObject <IGVideoRendererDelegate, IGUserSessionClearableObject>
{
    NSMutableDictionary *_metadataRendererMap;
    NSMutableDictionary *_metadataVideoURLMap;
    NSMutableArray *_renderQueue;
    NSMutableArray *_hibernaculum;
}

+ (void)clearForUserPK:(id)arg1;
- (void).cxx_destruct;
- (void)cancelAllRenderings;
- (void)cancelRenderWithMetadata:(id)arg1;
- (id)createRendererWithVideo:(id)arg1 mediaMetadata:(id)arg2;
- (void)dealloc;
- (void)enqueueRenderer:(id)arg1;
@property(retain, nonatomic) NSMutableArray *hibernaculum; // @synthesize hibernaculum=_hibernaculum;
- (id)initPrivate;
@property(retain, nonatomic) NSMutableDictionary *metadataRendererMap; // @synthesize metadataRendererMap=_metadataRendererMap;
@property(retain, nonatomic) NSMutableDictionary *metadataVideoURLMap; // @synthesize metadataVideoURLMap=_metadataVideoURLMap;
- (void)onAppBackground;
- (void)onAppForeground;
- (void)processRenderQueue;
- (void)removeRendererFromRenderQueue:(id)arg1;
@property(retain, nonatomic) NSMutableArray *renderQueue; // @synthesize renderQueue=_renderQueue;
- (id)renderVideo:(id)arg1 withMetadata:(id)arg2 progressDelegate:(id)arg3;
- (id)rendererWithMetadata:(id)arg1;
- (void)saveRenderWithMetadataWhenDone:(id)arg1;
- (void)saveURLToPhotoLibrary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)videoRenderer:(id)arg1 didFailWithError:(id)arg2;
- (void)videoRenderer:(id)arg1 didFinishRenderingVideoToURL:(id)arg2 videoSize:(struct CGSize)arg3 canceled:(_Bool)arg4;
- (void)willLogOut;
- (void)willSwitchUsers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
