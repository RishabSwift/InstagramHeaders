//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSThread;

@interface IGDrawMappedBufferRange : NSObject
{
    CDStruct_4c2bb342 *_base;
    unsigned long long _start;
    unsigned long long _alreadyDrawn;
    unsigned long long _alreadyFlushed;
    unsigned long long _end;
    unsigned long long _writeHead;
    NSThread *_mappedThread;
    _Bool _closed;
    id <IGDrawMappedBuffer> _buffer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long available;
- (void)bind;
@property(readonly, nonatomic) id <IGDrawMappedBuffer> buffer; // @synthesize buffer=_buffer;
- (void)close;
@property(readonly, nonatomic) _Bool closed; // @synthesize closed=_closed;
- (id)debugDescription;
- (void)didDrawIncremental;
@property(readonly, nonatomic) struct _NSRange dirtyToFlush;
- (void)dispose;
- (void)flush;
@property(readonly, nonatomic) struct _NSRange fullDrawRange;
@property(readonly, nonatomic) _Bool hasRoom;
@property(readonly, nonatomic) struct _NSRange incrementalDrawRange;
- (id)initWithBuffer:(id)arg1;
- (void)map;
- (void)push:(CDStruct_4c2bb342)arg1;

@end

