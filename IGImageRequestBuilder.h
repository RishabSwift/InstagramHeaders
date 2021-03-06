//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSURL;

@interface IGImageRequestBuilder : NSObject
{
    NSURL *_url;
    long long _imageFetchPriority;
    unsigned long long _fetchBehavior;
    unsigned long long _cacheBehavior;
    _Bool _ignoreCache;
    _Bool _shouldDecodeImage;
    _Bool _needsUIImage;
    NSData *_previewData;
    struct CGSize _previewSize;
    id <IGImageProcessor> _imageProcessor;
    CDUnknownBlockType _imageCompletionBlock;
    CDUnknownBlockType _imageProgressBlock;
    CDUnknownBlockType _previewImageCompletionBlock;
}

+ (id)builderWithUrl:(id)arg1;
- (void).cxx_destruct;
- (id)initWithUrl:(id)arg1;
- (id)request;
- (id)setCacheBehavior:(unsigned long long)arg1;
- (id)setFetchBehavior:(unsigned long long)arg1;
- (id)setIgnoreCache:(_Bool)arg1;
- (id)setImageCompletionBlock:(CDUnknownBlockType)arg1;
- (id)setImageFetchPriority:(long long)arg1;
- (id)setImageProcessor:(id)arg1;
- (id)setImageProgressBlock:(CDUnknownBlockType)arg1;
- (id)setNeedsUIImage:(_Bool)arg1;
- (id)setPreviewData:(id)arg1;
- (id)setPreviewImageCompletionBlock:(CDUnknownBlockType)arg1;
- (id)setPreviewSize:(struct CGSize)arg1;
- (id)setShouldDecodeImage:(_Bool)arg1;

@end

