//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGVideoRenderer, NSError, NSURL;

@protocol IGVideoRendererProgressDelegate <NSObject>
- (void)videoRenderer:(IGVideoRenderer *)arg1 didFailWithError:(NSError *)arg2;
- (void)videoRenderer:(IGVideoRenderer *)arg1 didFinishRenderingVideoToURL:(NSURL *)arg2 canceled:(_Bool)arg3;
- (void)videoRenderer:(IGVideoRenderer *)arg1 didProgress:(double)arg2;
- (void)videoRendererDidStartRenderingVideo:(IGVideoRenderer *)arg1;
@end

