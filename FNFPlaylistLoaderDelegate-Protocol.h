//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSError;

@protocol FNFPlaylistLoaderDelegate
- (void)loadingDidFailWithError:(NSError *)arg1;
- (void)playlistUpdated;
- (void)reportWarning:(NSError *)arg1;
@end

