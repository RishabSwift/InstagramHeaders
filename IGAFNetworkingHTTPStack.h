//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGHTTPStack.h"

@class AFHTTPRequestOperationManager, NSString;

@interface IGAFNetworkingHTTPStack : NSObject <IGHTTPStack>
{
    AFHTTPRequestOperationManager *_client;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic) long long maxConcurrentOperationCount;
- (id)requestFromIGURLRequest:(id)arg1 policy:(id)arg2;
- (id)startIGRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (id)startRequest:(id)arg1 policy:(id)arg2 callbackQueue:(id)arg3 responseReceivedHandler:(CDUnknownBlockType)arg4 bytesReceivedHandler:(CDUnknownBlockType)arg5 successHandler:(CDUnknownBlockType)arg6 failureHandler:(CDUnknownBlockType)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

