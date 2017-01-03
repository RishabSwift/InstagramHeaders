//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface IGReactPerformanceLoggerSessionData : NSObject
{
    NSString *_viewName;
    NSString *_tag;
    NSString *_bridgeInitState;
    double _initialTime;
    double _bridgeInitStartTime;
    double _bridgeInitEndTime;
    double _initialContentDidAppearTime;
    double _contentDidAppearTime;
    unsigned long long _initialResidentMemory;
    unsigned long long _contentDidAppearResidentMemory;
    NSDictionary *_jsEvents;
    NSArray *_bridgeLoggerOutput;
}

- (void).cxx_destruct;
@property(nonatomic) double bridgeInitEndTime; // @synthesize bridgeInitEndTime=_bridgeInitEndTime;
@property(nonatomic) double bridgeInitStartTime; // @synthesize bridgeInitStartTime=_bridgeInitStartTime;
@property(copy, nonatomic) NSString *bridgeInitState; // @synthesize bridgeInitState=_bridgeInitState;
@property(copy, nonatomic) NSArray *bridgeLoggerOutput; // @synthesize bridgeLoggerOutput=_bridgeLoggerOutput;
@property(nonatomic) unsigned long long contentDidAppearResidentMemory; // @synthesize contentDidAppearResidentMemory=_contentDidAppearResidentMemory;
@property(nonatomic) double contentDidAppearTime; // @synthesize contentDidAppearTime=_contentDidAppearTime;
- (id)format;
@property(nonatomic) double initialContentDidAppearTime; // @synthesize initialContentDidAppearTime=_initialContentDidAppearTime;
@property(nonatomic) unsigned long long initialResidentMemory; // @synthesize initialResidentMemory=_initialResidentMemory;
@property(nonatomic) double initialTime; // @synthesize initialTime=_initialTime;
@property(copy, nonatomic) NSDictionary *jsEvents; // @synthesize jsEvents=_jsEvents;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSString *viewName; // @synthesize viewName=_viewName;

@end

