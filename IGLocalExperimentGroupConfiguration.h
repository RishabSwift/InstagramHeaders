//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IGLocalExperimentGroupConfiguration : NSObject
{
    NSString *_groupName;
    unsigned long long _numberOfAllocatedSegments;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
- (id)initWithGroupName:(id)arg1 numberOfAllocatedSegments:(unsigned long long)arg2;
@property(nonatomic) unsigned long long numberOfAllocatedSegments; // @synthesize numberOfAllocatedSegments=_numberOfAllocatedSegments;

@end

