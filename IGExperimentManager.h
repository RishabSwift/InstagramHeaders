//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGExperimentManager : NSObject
{
}

+ (id)checkValueForExperiment:(id)arg1 parameterName:(id)arg2 shouldExpose:(_Bool)arg3;
+ (id)currentExperimentSets;
+ (void)disableExperiments;
+ (id)dumpExperimentGroupMappingForDebugging;
+ (void)enableExperiments;
+ (_Bool)exposeValueForBoolExperiment:(id)arg1;
+ (id)exposeValueForExperiment:(id)arg1 parameterName:(id)arg2;
+ (_Bool)peekValueForBoolExperiment:(id)arg1;
+ (id)peekValueForExperiment:(id)arg1 parameterName:(id)arg2;
+ (void)refreshExperimentsIfNecessary;
+ (void)setConfigurationProvider:(id)arg1;
+ (_Bool)wantsColdStart;

@end

