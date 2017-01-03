//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BFCancellationToken;

@interface BFCancellationTokenSource : NSObject
{
    BFCancellationToken *_token;
}

+ (id)cancellationTokenSource;
- (void).cxx_destruct;
- (void)cancel;
- (void)cancelAfterDelay:(int)arg1;
- (void)dispose;
- (id)init;
@property(readonly, nonatomic, getter=isCancellationRequested) _Bool cancellationRequested;
@property(readonly, nonatomic) BFCancellationToken *token; // @synthesize token=_token;

@end

