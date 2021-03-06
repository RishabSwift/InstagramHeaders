//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGRangedDataListener : NSObject
{
    _Bool _headerSent;
    _Bool _done;
    long long _readOffset;
    CDUnknownBlockType _dataReceived;
    CDUnknownBlockType _headerReceived;
    CDUnknownBlockType _completion;
    struct _NSRange _range;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) CDUnknownBlockType dataReceived; // @synthesize dataReceived=_dataReceived;
- (id)description;
@property(nonatomic) _Bool done; // @synthesize done=_done;
@property(copy, nonatomic) CDUnknownBlockType headerReceived; // @synthesize headerReceived=_headerReceived;
@property(readonly, nonatomic) _Bool headerSent; // @synthesize headerSent=_headerSent;
- (id)initWithDataRange:(struct _NSRange)arg1 headerReceived:(CDUnknownBlockType)arg2 dataReceived:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) _Bool isEntireRange;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(nonatomic) long long readOffset; // @synthesize readOffset=_readOffset;
- (void)sendHeaderWithContentType:(id)arg1 contentLength:(long long)arg2;

@end

