//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface IGDirectMessageLoggingContext : NSObject
{
    long long _triggerType;
    NSDate *_triggerTime;
}

+ (id)autoRetryContext;
+ (id)debugContext;
+ (id)manualContext;
+ (id)manualRetryContext;
- (void).cxx_destruct;
- (id)initWithTriggerType:(long long)arg1 triggerTime:(id)arg2;
@property(retain, nonatomic) NSDate *triggerTime; // @synthesize triggerTime=_triggerTime;
@property(nonatomic) long long triggerType; // @synthesize triggerType=_triggerType;

@end

