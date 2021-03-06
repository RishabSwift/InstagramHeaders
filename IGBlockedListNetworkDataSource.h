//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface IGBlockedListNetworkDataSource : NSObject
{
    _Bool _loading;
    _Bool _moreUsersAvailable;
    id <IGBlockedListNetworkDataSourceDelegate> _delegate;
    NSString *_errorMessage;
    NSMutableArray *_allUsers;
    NSString *_maxID;
    id <IGAPIClient> _networker;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *allUsers; // @synthesize allUsers=_allUsers;
@property(nonatomic) __weak id <IGBlockedListNetworkDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
- (void)fetchData;
- (void)fetchDataWithRequest:(id)arg1;
- (void)fetchMoreData;
- (id)initWithNetworker:(id)arg1;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) NSString *maxID; // @synthesize maxID=_maxID;
@property(nonatomic) _Bool moreUsersAvailable; // @synthesize moreUsersAvailable=_moreUsersAvailable;
@property(retain, nonatomic) id <IGAPIClient> networker; // @synthesize networker=_networker;
- (long long)numberOfResults;
- (void)onUserFetchFailed:(id)arg1 fromRequest:(id)arg2;
- (void)onUsersReceived:(id)arg1 fromRequest:(id)arg2;
- (id)resultForRow:(long long)arg1;

@end

