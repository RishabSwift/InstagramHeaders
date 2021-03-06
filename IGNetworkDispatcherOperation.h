//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class IGNetworkDispatcherOperationRequestToken, IGRequestPolicy, IGURLRequest, NSObject<OS_dispatch_queue>;

@interface IGNetworkDispatcherOperation : NSOperation
{
    _Bool _isExecuting;
    _Bool _isFinished;
    _Bool _isCancelled;
    unsigned long long _requestType;
    id <IGNetworkLayer> _layer;
    IGURLRequest *_request;
    IGRequestPolicy *_policy;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CDUnknownBlockType _responseReceivedHandler;
    CDUnknownBlockType _bytesReceivedHandler;
    CDUnknownBlockType _successHandler;
    CDUnknownBlockType _failureHandler;
    NSObject<OS_dispatch_queue> *_queue;
    IGNetworkDispatcherOperationRequestToken *_operationRequestToken;
    unsigned long long _behavior;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long behavior; // @synthesize behavior=_behavior;
- (void)cancel;
- (void)finish;
- (id)initWithLayer:(id)arg1 request:(id)arg2 policy:(id)arg3 callbackQueue:(id)arg4 responseReceivedHandler:(CDUnknownBlockType)arg5 bytesReceivedHandler:(CDUnknownBlockType)arg6 successHandler:(CDUnknownBlockType)arg7 failureHandler:(CDUnknownBlockType)arg8;
- (_Bool)isAsynchronous;
- (_Bool)isCancelled;
- (_Bool)isExecuting;
- (_Bool)isFinished;
@property(nonatomic) __weak IGNetworkDispatcherOperationRequestToken *operationRequestToken; // @synthesize operationRequestToken=_operationRequestToken;
@property(readonly, nonatomic) unsigned long long requestType;
- (void)setFinished;
- (void)setIsExecuting:(_Bool)arg1;
- (void)start;

@end

