//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSSet, NSString;

@interface FNFAssetResourceLoader : NSObject
{
    id <FNFAssetResourceLoaderDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSString *_videoID;
    NSString *_trackerID;
    NSSet *_analyticsTags;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSSet *analyticsTags; // @synthesize analyticsTags=_analyticsTags;
@property(readonly, nonatomic) __weak id <FNFAssetResourceLoaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
- (void)setDelegate:(id)arg1 queue:(id)arg2 videoID:(id)arg3 trackerID:(id)arg4 analyticsTags:(id)arg5;
@property(readonly, copy, nonatomic) NSString *trackerID; // @synthesize trackerID=_trackerID;
@property(readonly, copy, nonatomic) NSString *videoID; // @synthesize videoID=_videoID;

@end

