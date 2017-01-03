//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGLoadMoreResponseType.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSMutableOrderedSet, NSString;

@interface IGEventFeedData : NSObject <IGLoadMoreResponseType, NSCoding, NSCopying>
{
    NSString *_eventId;
    NSString *_eventTitle;
    NSString *_maxId;
    NSMutableOrderedSet *_posts;
}

- (void).cxx_destruct;
- (id)allPosts;
- (_Bool)containsPost:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
@property(readonly, copy, nonatomic) NSString *eventTitle; // @synthesize eventTitle=_eventTitle;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPosts:(id)arg1 eventId:(id)arg2 eventTitle:(id)arg3 maxId:(id)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *maxId; // @synthesize maxId=_maxId;
@property(readonly, nonatomic) NSMutableOrderedSet *posts; // @synthesize posts=_posts;
- (void)removePost:(id)arg1;
- (void)removePostsInArray:(id)arg1;

@end

