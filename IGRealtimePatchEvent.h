//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGSequence, NSArray, NSString, NSUUID;

@interface IGRealtimePatchEvent : NSObject
{
    NSArray *_operations;
    NSString *_topic;
    NSUUID *_uuid;
    IGSequence *_sequence;
}

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
@property(readonly, nonatomic) NSArray *operations; // @synthesize operations=_operations;
@property(readonly, nonatomic) IGSequence *sequence; // @synthesize sequence=_sequence;
@property(readonly, copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;

@end

