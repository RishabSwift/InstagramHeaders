//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class FNFAssetResourceLoader, FNFDataBlockDistributor;

@protocol FNFDataLoader
- (void)cancelRequests;
- (unsigned long long)currentReceiveOffsetForTrack:(long long)arg1;
- (unsigned long long)currentRequestOffsetForTrack:(long long)arg1;
- (void)fetchFirstRequestForSeconds:(unsigned int)arg1 initializationAtomSize:(unsigned long long)arg2 track:(long long)arg3;
- (_Bool)fetchInProgressForTrack:(long long)arg1;
- (void)fetchToOffset:(unsigned long long)arg1 forTrack:(long long)arg2;
- (_Bool)isFullyDownloaded:(long long)arg1;
- (void)resetWithNewVideoDataBlockDistributor:(FNFDataBlockDistributor *)arg1 audioDataBlockDistributor:(FNFDataBlockDistributor *)arg2;
- (FNFAssetResourceLoader *)resourceLoader;
- (void)seekForwardToOffset:(unsigned long long)arg1 forTrack:(long long)arg2;
- (void)setDelegate:(id <FNFDataLoaderDelegate>)arg1;
@end
