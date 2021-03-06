//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"

@class IGFeedItemRowIdentifier;

@interface IGFeedItemRow : NSObject <IGListDiffable>
{
    IGFeedItemRowIdentifier *_identifier;
    unsigned long long _hash;
    long long _type;
    long long _textType;
    id _value;
}

- (void).cxx_destruct;
- (id)description;
- (id)diffIdentifier;
- (unsigned long long)hash;
- (id)initWithType:(long long)arg1;
- (id)initWithType:(long long)arg1 textType:(long long)arg2;
- (id)initWithType:(long long)arg1 textType:(long long)arg2 value:(id)arg3;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToDiffableObject:(id)arg1;
@property(readonly, nonatomic) long long textType; // @synthesize textType=_textType;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) id value; // @synthesize value=_value;

@end

