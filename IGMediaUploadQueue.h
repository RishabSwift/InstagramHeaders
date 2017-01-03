//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableSet;

@interface IGMediaUploadQueue : NSObject
{
    NSMutableSet *_activeUploadsSet;
    NSMutableSet *_allUploadsSet;
    NSMutableArray *_failedUploadsQueue;
    NSMutableArray *_stagedUploadsQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *activeUploadsSet; // @synthesize activeUploadsSet=_activeUploadsSet;
@property(retain, nonatomic) NSMutableSet *allUploadsSet; // @synthesize allUploadsSet=_allUploadsSet;
- (_Bool)containsUpload:(id)arg1;
- (void)dealloc;
- (void)enqueueUpload:(id)arg1;
- (void)evaluateFailedUpload:(id)arg1;
- (void)evaluateUploads;
@property(retain, nonatomic) NSMutableArray *failedUploadsQueue; // @synthesize failedUploadsQueue=_failedUploadsQueue;
- (id)init;
- (id)nextUpload;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(retain, nonatomic) NSMutableArray *stagedUploadsQueue; // @synthesize stagedUploadsQueue=_stagedUploadsQueue;
- (_Bool)shouldRetryUpload:(id)arg1;
- (void)uploadFailure:(id)arg1;
- (void)uploadSuccess:(id)arg1;

@end

