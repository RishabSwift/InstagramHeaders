//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGMediaPreloader, NSURL;

@protocol IGMediaPreloaderPhotoProgressDelegate <NSObject>
- (void)mediaPreloader:(IGMediaPreloader *)arg1 didFailPhotoForItem:(id <IGMediaPreloaderItem>)arg2 url:(NSURL *)arg3;
- (void)mediaPreloader:(IGMediaPreloader *)arg1 didLoadPhotoForItem:(id <IGMediaPreloaderItem>)arg2 url:(NSURL *)arg3;
@end

