//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RCTBridgeModule.h"
#import "RCTInvalidating.h"

@class NSArray, NSData, NSNumber, NSString, NSURL;

@protocol RCTJavaScriptExecutor <RCTInvalidating, RCTBridgeModule>
- (void)callFunctionOnModule:(NSString *)arg1 method:(NSString *)arg2 arguments:(NSArray *)arg3 callback:(void (^)(id, NSError *))arg4;
- (void)executeApplicationScript:(NSData *)arg1 sourceURL:(NSURL *)arg2 onComplete:(void (^)(NSError *))arg3;
- (void)executeAsyncBlockOnJavaScriptQueue:(void (^)(void))arg1;
- (void)executeBlockOnJavaScriptQueue:(void (^)(void))arg1;
- (void)flushedQueue:(void (^)(id, NSError *))arg1;
- (void)injectJSONText:(NSString *)arg1 asGlobalObjectNamed:(NSString *)arg2 callback:(void (^)(NSError *))arg3;
- (void)invokeCallbackID:(NSNumber *)arg1 arguments:(NSArray *)arg2 callback:(void (^)(id, NSError *))arg3;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (void)setUp;
@end
