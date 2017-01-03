//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface IGLocalExperiment : NSObject
{
    _Bool _hasBeenExposed;
    NSString *_experimentName;
    NSString *_salt;
    unsigned long long _totalSegments;
    NSArray *_groups;
    unsigned long long _deployGroupIndex;
    NSString *_selectedGroupName;
    unsigned long long _selectedSegment;
    unsigned long long _totalGroupSize;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long deployGroupIndex; // @synthesize deployGroupIndex=_deployGroupIndex;
@property(retain, nonatomic) NSString *experimentName; // @synthesize experimentName=_experimentName;
- (id)groupName;
@property(retain, nonatomic) NSArray *groups; // @synthesize groups=_groups;
@property(nonatomic) _Bool hasBeenExposed; // @synthesize hasBeenExposed=_hasBeenExposed;
- (id)initWithExperimentName:(id)arg1 salt:(id)arg2 totalSegments:(unsigned long long)arg3 groups:(id)arg4 deployGroupIndex:(unsigned long long)arg5;
@property(retain, nonatomic) NSString *salt; // @synthesize salt=_salt;
@property(retain, nonatomic) NSString *selectedGroupName; // @synthesize selectedGroupName=_selectedGroupName;
@property(nonatomic) unsigned long long selectedSegment; // @synthesize selectedSegment=_selectedSegment;
@property(nonatomic) unsigned long long totalGroupSize; // @synthesize totalGroupSize=_totalGroupSize;
@property(nonatomic) unsigned long long totalSegments; // @synthesize totalSegments=_totalSegments;

@end
