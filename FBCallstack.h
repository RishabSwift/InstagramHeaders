//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBCallstack : NSObject
{
    int _size;
    unsigned int _threadID;
    unsigned long long _timestamp;
    void **_callstack;
}

@property(readonly, nonatomic) void **callstack; // @synthesize callstack=_callstack;
- (void)dealloc;
- (id)initWithSize:(int)arg1 callstack:(void *)arg2 threadID:(unsigned int)arg3 timestamp:(unsigned long long)arg4;
@property(readonly, nonatomic) int size; // @synthesize size=_size;
@property(readonly, nonatomic) unsigned int threadID; // @synthesize threadID=_threadID;
@property(readonly, nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

@end

