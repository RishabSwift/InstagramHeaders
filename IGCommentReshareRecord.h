//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface IGCommentReshareRecord : NSObject
{
    NSArray *_usernames;
    NSString *_threadID;
}

- (void).cxx_destruct;
- (id)diffIdentifier;
- (id)initWithUsernames:(id)arg1 threadID:(id)arg2;
@property(readonly, nonatomic) NSString *threadID; // @synthesize threadID=_threadID;
@property(readonly, nonatomic) NSArray *usernames; // @synthesize usernames=_usernames;

@end

