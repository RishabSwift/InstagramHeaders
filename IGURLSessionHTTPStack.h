//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGHTTPStack.h"
#import "NSURLSessionDataDelegate.h"

@class NSLock, NSMutableDictionary, NSString, NSURLSession;

@interface IGURLSessionHTTPStack : NSObject <IGHTTPStack, NSURLSessionDataDelegate>
{
    NSURLSession *_session;
    NSMutableDictionary *_tasksToControllers;
    NSLock *_lock;
    long long maxConcurrentOperationCount;
}

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (id)controllerForTask:(id)arg1;
- (id)initWithSessionConfiguration:(id)arg1;
@property(nonatomic) long long maxConcurrentOperationCount; // @synthesize maxConcurrentOperationCount;
- (void)removeControllerForTask:(id)arg1;
- (void)setController:(id)arg1 forTask:(id)arg2;
- (id)startRequest:(id)arg1 policy:(id)arg2 callbackQueue:(id)arg3 responseReceivedHandler:(CDUnknownBlockType)arg4 bytesReceivedHandler:(CDUnknownBlockType)arg5 successHandler:(CDUnknownBlockType)arg6 failureHandler:(CDUnknownBlockType)arg7;
- (id)taskFromIGURLRequest:(id)arg1 policy:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

