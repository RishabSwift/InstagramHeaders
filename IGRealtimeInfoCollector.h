//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface IGRealtimeInfoCollector : NSObject
{
    NSMutableArray *_info;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)addInfo:(id)arg1;
- (void)clearCollectedInfo;
- (id)collectedInfo;
@property(readonly, nonatomic) NSMutableArray *info; // @synthesize info=_info;
- (id)init;

@end

