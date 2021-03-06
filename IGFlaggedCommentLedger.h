//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUserSessionClearableObject.h"

@class IGUserDefaults, NSMutableDictionary, NSString;

@interface IGFlaggedCommentLedger : NSObject <IGUserSessionClearableObject>
{
    NSMutableDictionary *_flaggedComments;
    IGUserDefaults *_sessionUserDefaults;
}

+ (void)clearForUserPK:(id)arg1;
- (void).cxx_destruct;
- (void)addComment:(id)arg1;
- (void)archive;
- (void)clear;
- (_Bool)containsComment:(id)arg1;
- (void)dealloc;
- (id)filterComments:(id)arg1;
- (id)initWithSessionUserDefaults:(id)arg1;
- (void)migrateUserDefaultsIfNecessary;
@property(retain, nonatomic) IGUserDefaults *sessionUserDefaults; // @synthesize sessionUserDefaults=_sessionUserDefaults;
- (void)willLogOut;
- (void)willSwitchUsers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

