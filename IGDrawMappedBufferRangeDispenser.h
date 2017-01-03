//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGContext, IGDrawMappedBufferDispenser;

@interface IGDrawMappedBufferRangeDispenser : NSObject
{
    IGDrawMappedBufferDispenser *_bufferDispenser;
    IGContext *_context;
    unsigned long long _pageSize;
    unsigned long long _headroom;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long headroom; // @synthesize headroom=_headroom;
- (id)initWithContext:(id)arg1;
@property(readonly, nonatomic) _Bool locked;
- (id)nextRange;
@property(nonatomic) unsigned long long pageSize; // @synthesize pageSize=_pageSize;

@end
