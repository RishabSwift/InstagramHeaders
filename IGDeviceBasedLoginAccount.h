//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IGDeviceBasedLoginAccount : NSObject
{
    _Bool _isPrivate;
    NSString *_pk;
    NSString *_username;
    NSString *_profilePicURL;
    NSString *_fullName;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *fullName; // @synthesize fullName=_fullName;
- (_Bool)hasAuthenticated;
- (id)initWithPK:(id)arg1 username:(id)arg2 profilePicURL:(id)arg3;
@property(readonly) _Bool isPrivate; // @synthesize isPrivate=_isPrivate;
@property(readonly, copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
@property(readonly, copy, nonatomic) NSString *profilePicURL; // @synthesize profilePicURL=_profilePicURL;
- (id)toDict;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;

@end

