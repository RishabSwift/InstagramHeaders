//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RCTInvalidating.h"

@class JSContext, NSString, NSThread;

@interface RCTJavaScriptContext : NSObject <RCTInvalidating>
{
    RCTJavaScriptContext *_selfReference;
    NSThread *_javaScriptThread;
    JSContext *_context;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) JSContext *context; // @synthesize context=_context;
- (id)init;
- (id)initWithJSContext:(id)arg1 onThread:(id)arg2;
- (void)invalidate;
- (_Bool)isValid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

