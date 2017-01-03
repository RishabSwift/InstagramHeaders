//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface IGStoryLocalStats : NSObject
{
    double _total;
    double _count;
    double _max;
    double _min;
}

- (void)addValue:(double)arg1;
- (void)addValue:(double)arg1 withWeight:(double)arg2;
@property(readonly, nonatomic) NSDictionary *asDictionary;
@property(readonly, nonatomic) double count; // @synthesize count=_count;
- (id)init;
@property(readonly, nonatomic) double max; // @synthesize max=_max;
@property(readonly, nonatomic) double mean;
@property(readonly, nonatomic) double min; // @synthesize min=_min;
@property(readonly, nonatomic) double total; // @synthesize total=_total;

@end

