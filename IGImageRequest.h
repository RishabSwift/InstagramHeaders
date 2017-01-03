//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString, NSURL;

@interface IGImageRequest : NSObject
{
    _Bool _ignoreCache;
    _Bool _shouldDecodeImage;
    _Bool _needsUIImage;
    NSURL *_url;
    NSString *_originalCacheKey;
    NSString *_processedCacheKey;
    long long _imageFetchPriority;
    unsigned long long _fetchBehavior;
    unsigned long long _cacheBehavior;
    NSData *_previewData;
    id <IGImageProcessor> _imageProcessor;
    CDUnknownBlockType _imageCompletionBlock;
    CDUnknownBlockType _imageProgressBlock;
    CDUnknownBlockType _previewImageCompletionBlock;
    struct CGSize _previewSize;
}

- (void).cxx_destruct;
- (void)begin;
@property(readonly, nonatomic) unsigned long long cacheBehavior; // @synthesize cacheBehavior=_cacheBehavior;
- (void)cancel;
@property(readonly, nonatomic) unsigned long long fetchBehavior; // @synthesize fetchBehavior=_fetchBehavior;
- (id)generateCacheKey;
@property(readonly, nonatomic) _Bool ignoreCache; // @synthesize ignoreCache=_ignoreCache;
@property(readonly, nonatomic) CDUnknownBlockType imageCompletionBlock; // @synthesize imageCompletionBlock=_imageCompletionBlock;
@property(readonly, nonatomic) long long imageFetchPriority; // @synthesize imageFetchPriority=_imageFetchPriority;
@property(readonly, nonatomic) id <IGImageProcessor> imageProcessor; // @synthesize imageProcessor=_imageProcessor;
@property(readonly, nonatomic) CDUnknownBlockType imageProgressBlock; // @synthesize imageProgressBlock=_imageProgressBlock;
- (id)initWithUrl:(id)arg1 imageFetchPriority:(long long)arg2 fetchBehavior:(unsigned long long)arg3 cacheBehavior:(unsigned long long)arg4 ignoreCache:(_Bool)arg5 shouldDecodeImage:(_Bool)arg6 needsUIImage:(_Bool)arg7 previewData:(id)arg8 previewSize:(struct CGSize)arg9 imageProcessor:(id)arg10 imageCompletionBlock:(CDUnknownBlockType)arg11 imageProgressBlock:(CDUnknownBlockType)arg12 previewImageCompletionBlock:(CDUnknownBlockType)arg13;
@property(readonly, nonatomic) _Bool needsUIImage; // @synthesize needsUIImage=_needsUIImage;
@property(readonly, nonatomic) NSString *originalCacheKey; // @synthesize originalCacheKey=_originalCacheKey;
@property(readonly, nonatomic) NSData *previewData; // @synthesize previewData=_previewData;
@property(readonly, nonatomic) CDUnknownBlockType previewImageCompletionBlock; // @synthesize previewImageCompletionBlock=_previewImageCompletionBlock;
@property(readonly, nonatomic) struct CGSize previewSize; // @synthesize previewSize=_previewSize;
@property(readonly, nonatomic) NSString *processedCacheKey; // @synthesize processedCacheKey=_processedCacheKey;
@property(readonly, nonatomic) _Bool shouldDecodeImage; // @synthesize shouldDecodeImage=_shouldDecodeImage;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;

@end
