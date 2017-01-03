//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURLCache.h"

@interface NSURLCache (PartialData)
- (void)invalidatePartialDataForURL:(id)arg1;
- (id)loadPartialDataForURL:(id)arg1 isVideo:(_Bool)arg2;
- (id)loadPartialImageDataForURL:(id)arg1;
- (id)loadPartialVideoDataForURL:(id)arg1;
- (void)storePartialData:(id)arg1 forURL:(id)arg2 isVideo:(_Bool)arg3;
- (void)storePartialImageData:(id)arg1 forURL:(id)arg2;
- (void)storePartialVideoData:(id)arg1 forURL:(id)arg2;
@end

