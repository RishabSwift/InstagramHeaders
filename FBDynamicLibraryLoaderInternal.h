//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBDynamicLibraryLoaderInternal : NSObject
{
    id <FBQuickPerformanceLoggerProtocol> _qplogger;
    CDUnknownBlockType _dynamicLoadErrorBlock;
}

- (void).cxx_destruct;
- (id)initWithQpl:(id)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)logErrorMessage:(id)arg1 forLibrary:(unsigned long long)arg2;
- (void)logStartDynamicLoad:(unsigned long long)arg1 withPath:(const char *)arg2;
- (void)logStopDynamicLoadFail:(unsigned long long)arg1;
- (void)logStopDynamicLoadSuccess:(unsigned long long)arg1;

@end

