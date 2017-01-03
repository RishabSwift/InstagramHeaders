//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSURLRequest, NSURLResponse;

@protocol IGAssetResourceLoadingRequest <NSObject>
@property(copy, nonatomic) id associatedObject;
@property(readonly, nonatomic) id <IGAssetResourceLoadingContentInformationRequest> contentInformationRequest;
@property(readonly, nonatomic) id <IGAssetResourceLoadingDataRequest> dataRequest;
- (void)finishLoading;
- (void)finishLoadingWithError:(NSError *)arg1;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
@property(readonly, nonatomic) _Bool isFinished;
@property(copy, nonatomic) NSURLRequest *redirect;
@property(readonly, nonatomic) NSURLRequest *request;
@property(copy, nonatomic) NSURLResponse *response;
@end

