//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGAPIClient.h"
#import "IGNetworking.h"

@class NSMutableArray, NSString;

@interface IGNetworker : NSObject <IGAPIClient, IGNetworking>
{
    id <IGHTTPStack> _stack;
    NSMutableArray *_operations;
    NSString *_acceptLanguageHeader;
    _Bool _shouldRemoveCancelRetryHack;
}

+ (void)configureWithStack:(id)arg1;
+ (_Bool)errorIsNetworkError:(id)arg1;
+ (id)sharedNetworker;
- (void).cxx_destruct;
- (void)cancelRequestsWithToken:(id)arg1;
- (id)commonHeaders;
- (id)errorStringFromMessage:(id)arg1;
- (id)errorStringsFromObject:(id)arg1;
- (void)handleAPIRequestFailure:(id)arg1 withFailureHandler:(CDUnknownBlockType)arg2 response:(id)arg3 responseData:(id)arg4 parsedDictionary:(id)arg5 error:(id)arg6;
- (void)handleAPIRequestSuccess:(CDUnknownBlockType)arg1 withHTTPResponse:(id)arg2 parsedObject:(id)arg3;
- (void)handleSystemMessages:(id)arg1;
- (id)init;
- (_Bool)isRequestQueueFull;
- (id)operations;
- (unsigned long long)operationsCount;
- (void)postHelpURLReceivedNotification:(id)arg1 error:(id)arg2;
@property(nonatomic) _Bool shouldRemoveCancelRetryHack; // @synthesize shouldRemoveCancelRetryHack=_shouldRemoveCancelRetryHack;
- (id)startAPIRequest:(id)arg1 parsingHandler:(CDUnknownBlockType)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;
- (id)startAPIRequest:(id)arg1 policy:(id)arg2 parsingHandler:(CDUnknownBlockType)arg3 successHandler:(CDUnknownBlockType)arg4 failureHandler:(CDUnknownBlockType)arg5;
- (id)startAPIRequest:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (id)startGraphQLRequest:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (id)startRequest:(id)arg1 policy:(id)arg2;
- (id)startRequest:(id)arg1 policy:(id)arg2 callbackQueue:(id)arg3 responseReceivedHandler:(CDUnknownBlockType)arg4 bytesReceivedHandler:(CDUnknownBlockType)arg5 successHandler:(CDUnknownBlockType)arg6 failureHandler:(CDUnknownBlockType)arg7;
- (id)startRequest:(id)arg1 policy:(id)arg2 requestToken:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

