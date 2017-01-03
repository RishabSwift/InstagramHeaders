//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JSContext, NSObject<OS_dispatch_semaphore>, NSThread;

@interface RCTJSContextProvider : NSObject
{
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSThread *_javaScriptThread;
    JSContext *_context;
    _Bool _useCustomJSCLibrary;
    _Bool _tryBytecode;
}

- (void).cxx_destruct;
- (void)_createContext;
- (struct RCTJSContextData)data;
- (id)initWithUseCustomJSCLibrary:(_Bool)arg1 tryBytecode:(_Bool)arg2;
@property(readonly, nonatomic) _Bool tryBytecode; // @synthesize tryBytecode=_tryBytecode;
@property(readonly, nonatomic) _Bool useCustomJSCLibrary; // @synthesize useCustomJSCLibrary=_useCustomJSCLibrary;

@end
