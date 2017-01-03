//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGStoryLocalStats, NSDictionary;

@interface IGStoryBrushStats : NSObject
{
    unsigned long long _clearCount;
    unsigned long long _undoCount;
    double _size;
    IGStoryLocalStats *_durationStats;
    IGStoryLocalStats *_markSizeStats;
    IGStoryLocalStats *_markLengthStats;
    IGStoryLocalStats *_markSizeWeighted;
    unsigned long long _sizeCount;
    unsigned long long _colorCount;
    double _startTime;
}

- (void).cxx_destruct;
- (void)addMarkWithSize:(double)arg1 length:(double)arg2;
@property(readonly, nonatomic) NSDictionary *asDictionary;
- (void)clear;
- (void)endAt:(double)arg1;
- (id)init;
- (void)setColor:(id)arg1;
- (void)setSize:(double)arg1;
- (void)startAt:(double)arg1;
- (void)undo;

@end

