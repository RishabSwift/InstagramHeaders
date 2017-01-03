//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FNFAssetResourceLoader, FNFAssetResourceLoadingRequest, FNFDashPlaylistData, FNFDataBlockDistributor, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface FNFDashDataLoader : NSObject
{
    id <FNFDashDataLoaderDelegate> _delegate;
    FNFAssetResourceLoader *_resourceLoader;
    FNFDataBlockDistributor *_dataBlockDistributor;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    long long _track;
    NSString *_representationId;
    FNFAssetResourceLoadingRequest *_currentResourceLoaderRequest;
    struct FNFTrackDownloaderState _downloadTracker;
    _Bool _fetchedInitURL;
    NSURL *_cachedSegmentURL;
    FNFDashPlaylistData *_playlistData;
    unsigned long long _fileSize;
    _Bool _prefetchFirstDataSegment;
    _Bool _enablePrefetchLookupWhenBypassCache;
    _Bool _useInlineInitSegments;
    _Bool _async;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_dataCallback:(id)arg1 offset:(unsigned long long)arg2 dataRequest:(id)arg3;
- (void)_dataFinished:(id)arg1 dataRequest:(id)arg2 contentInfo:(id)arg3 loadingRequest:(id)arg4;
- (void)_fetchNextFragmentedRangeAtOffset:(unsigned long long)arg1 length:(unsigned long long)arg2;
- (void)_fetchNextSegment;
- (void)_fetchUrlRequest:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3 firstSegment:(_Bool)arg4;
- (void)_forTestingMakeSynchronous;
- (void)_handleInlineInitSegment;
- (void)_prefetchSegmentedUrlRequest:(id)arg1;
- (void)_setUrlIndex:(int)arg1;
- (int)_urlIndex;
- (void)cancelRequests;
- (unsigned long long)currentReceiveOffset;
- (unsigned long long)currentRequestOffset;
- (id)description;
- (void)fetchFirstRequestForSeconds:(unsigned int)arg1;
- (_Bool)fetchInProgress;
- (void)fetchToOffset:(unsigned long long)arg1;
- (void)forceFetchIfNecessary;
- (int)indexToFetchTo;
- (id)initWithPlaylistData:(id)arg1 resourceLoader:(id)arg2 dataBlockDistributor:(id)arg3 prefetchFirstDataSegment:(_Bool)arg4 useInlineInitSegments:(_Bool)arg5 enablePrefetchLookupWhenBypassCache:(_Bool)arg6 track:(long long)arg7;
- (_Bool)isFragmented;
- (_Bool)isFullyDownloaded;
- (_Bool)isSegmented;
- (_Bool)live;
- (id)playlistData;
- (unsigned long long)prefetchedBytesCached;
- (void)resetWithDataBlockDistributor:(id)arg1;
- (id)resourceLoader;
- (void)seekForwardToOffset:(unsigned long long)arg1;
- (int)segmentedCurrentRequestOffset;
- (id)segmentedInitUrl;
- (id)segmentedUrl;
- (void)setDelegate:(id)arg1;
- (int)unfetchedSegmentCount;

@end

