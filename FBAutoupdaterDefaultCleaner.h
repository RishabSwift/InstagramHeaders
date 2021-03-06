//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBAutoupdaterCleaner.h"

@class FBAutoupdaterHost, NSFileManager, NSObject<OS_dispatch_queue>, NSString;

@interface FBAutoupdaterDefaultCleaner : NSObject <FBAutoupdaterCleaner>
{
    FBAutoupdaterHost *_host;
    NSFileManager *_fileManager;
    NSString *_trashPath;
    NSObject<OS_dispatch_queue> *_trashQueue;
}

- (void).cxx_destruct;
- (_Bool)_createPathIfNeeded:(id)arg1 error:(id *)arg2;
- (void)cleanUpAfterUpdateInstallationAttempt;
@property(readonly, nonatomic) FBAutoupdaterHost *host;
- (id)initWithHost:(id)arg1;
- (void)removePath:(id)arg1;
- (void)removeUnappliedUpdates;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

