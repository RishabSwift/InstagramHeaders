//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface RCTJavaScriptLoader : NSObject
{
}

+ (id)attemptSynchronousLoadOfBundleAtURL:(id)arg1 runtimeBCVersion:(int)arg2 sourceLength:(long long *)arg3 error:(id *)arg4;
+ (void)loadBundleAtURL:(id)arg1 onProgress:(CDUnknownBlockType)arg2 onComplete:(CDUnknownBlockType)arg3;
- (id)init;

@end
