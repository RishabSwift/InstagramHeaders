//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGFeedStatusViewDataSource.h"

@class IGUserSession, NSArray, NSString;

@interface IGInviteFriendsDataSource : NSObject <IGFeedStatusViewDataSource>
{
    _Bool _isLoading;
    _Bool _hasMoreFriends;
    _Bool _moreAvailable;
    _Bool _loadedOnce;
    NSArray *_friendsList;
    id <IGInviteFriendsDataSourceDelegate> _delegate;
    IGUserSession *_userSession;
    long long _offset;
    long long _status;
    long long _authorizationError;
    NSString *_errorMessage;
}

- (void).cxx_destruct;
@property(nonatomic) long long authorizationError; // @synthesize authorizationError=_authorizationError;
- (id)authorizationErrorMessage;
- (id)authorizationErrorMessageDetail;
- (id)createRequestBuilder;
@property(nonatomic) __weak id <IGInviteFriendsDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (id)emptyMessage;
@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
- (void)fbAuthAndFetchFriendsList;
- (void)fetchFriendsCount;
- (void)fetchFriendsList;
@property(retain, nonatomic) NSArray *friendsList; // @synthesize friendsList=_friendsList;
@property(nonatomic) _Bool hasMoreFriends; // @synthesize hasMoreFriends=_hasMoreFriends;
- (id)initWithUserSession:(id)arg1;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
- (unsigned long long)itemCount;
@property(nonatomic) _Bool loadedOnce; // @synthesize loadedOnce=_loadedOnce;
@property(nonatomic) _Bool moreAvailable; // @synthesize moreAvailable=_moreAvailable;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
