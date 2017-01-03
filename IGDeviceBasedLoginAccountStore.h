//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface IGDeviceBasedLoginAccountStore : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedStore;
- (void).cxx_destruct;
- (void)fetchAccountForUserPK:(id)arg1 onQueue:(id)arg2 completion:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (void)fetchAccountsOnQueue:(id)arg1 completion:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)fetchCredentialForUserPK:(id)arg1 onQueue:(id)arg2 completion:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (id)init;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)removeAccountForUserPK:(id)arg1 onQueue:(id)arg2 completion:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (void)writeAccountData:(id)arg1 forUserPK:(id)arg2 onQueue:(id)arg3 completion:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5;

@end

