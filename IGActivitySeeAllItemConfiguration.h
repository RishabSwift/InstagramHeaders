//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"

@class NSString;

@interface IGActivitySeeAllItemConfiguration : NSObject <IGListDiffable>
{
    long long _seeAllDestination;
    NSString *_title;
}

- (void).cxx_destruct;
- (id)diffIdentifier;
- (id)initWithSeeAllDestination:(long long)arg1 title:(id)arg2;
- (_Bool)isEqualToDiffableObject:(id)arg1;
@property(readonly, nonatomic) long long seeAllDestination; // @synthesize seeAllDestination=_seeAllDestination;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

