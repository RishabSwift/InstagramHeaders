//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCTJavaScriptExecutor.h"

@class NSObject<OS_dispatch_queue>, NSString, NSThread, RCTBridge, RCTJavaScriptContext, RCTPerformanceLogger;

@interface RCTJSCExecutor : NSObject <RCTJavaScriptExecutor>
{
    _Bool _useCustomJSCLibrary;
    _Bool _tryBytecode;
    NSThread *_javaScriptThread;
    RCTPerformanceLogger *_performanceLogger;
    RCTJavaScriptContext *_context;
    struct RandomAccessBundleData _randomAccessBundle;
    struct OpaqueJSValue *_batchedBridgeRef;
    _Bool _valid;
    RCTBridge *_bridge;
}

+ (id)__rct_export__5560;
+ (id)initializedExecutorWithContextProvider:(id)arg1 JSContext:(id *)arg2;
+ (void)load;
+ (id)moduleName;
+ (void)runRunLoopThread;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_callFunctionOnModule:(id)arg1 method:(id)arg2 arguments:(id)arg3 returnValue:(_Bool)arg4 unwrapResult:(_Bool)arg5 callback:(CDUnknownBlockType)arg6;
- (void)_executeJSCall:(id)arg1 arguments:(id)arg2 unwrapResult:(_Bool)arg3 callback:(CDUnknownBlockType)arg4;
- (void)_nativeRequire:(id)arg1;
@property(readonly, nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
@property(readonly, nonatomic) int bytecodeFileFormatVersion;
- (void)callFunctionOnModule:(id)arg1 method:(id)arg2 arguments:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)callFunctionOnModule:(id)arg1 method:(id)arg2 arguments:(id)arg3 jsValueCallback:(CDUnknownBlockType)arg4;
- (id)context;
@property(copy, nonatomic) NSString *contextName;
- (void)dealloc;
- (void)executeApplicationScript:(id)arg1 sourceURL:(id)arg2 onComplete:(CDUnknownBlockType)arg3;
- (void)executeAsyncBlockOnJavaScriptQueue:(CDUnknownBlockType)arg1;
- (void)executeBlockOnJavaScriptQueue:(CDUnknownBlockType)arg1;
- (void)flushedQueue:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithJSContextData:(const struct RCTJSContextData *)arg1;
- (id)initWithUseCustomJSCLibrary:(_Bool)arg1;
- (id)initWithUseCustomJSCLibrary:(_Bool)arg1 tryBytecode:(_Bool)arg2;
- (void)injectJSONText:(id)arg1 asGlobalObjectNamed:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)invalidate;
- (void)invokeCallbackID:(id)arg1 arguments:(id)arg2 callback:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic, getter=isValid) _Bool valid; // @synthesize valid=_valid;
- (id)jsContext;
- (void)setBridge:(id)arg1;
- (void)setUp;
- (id)synchronouslyExecuteApplicationScript:(id)arg1 sourceURL:(id)arg2;
- (void)toggleProfilingFlag:(id)arg1;
@property(readonly, nonatomic) _Bool useCustomJSCLibrary; // @synthesize useCustomJSCLibrary=_useCustomJSCLibrary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

