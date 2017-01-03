//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectRecipientDataSourceProtocol.h"
#import "IGWebDataSource.h"

@class IGCacheProxy, IGUser, NSArray, NSMutableArray, NSString;

@interface IGDirectRecipientDataSource2 : NSObject <IGWebDataSource, IGDirectRecipientDataSourceProtocol>
{
    _Bool _isLocal;
    _Bool _showThreads;
    _Bool _fetchNullStateResults;
    id <IGDirectRecipientDataSourceDelegate> _delegate;
    NSString *_searchString;
    NSArray *_currentResults;
    long long _mode;
    id <IGAPIClient> _networker;
    IGUser *_currentUser;
    NSMutableArray *_pendingSearchQueue;
    NSMutableArray *_runningSearchQueue;
    IGCacheProxy *_searchCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *currentResults; // @synthesize currentResults=_currentResults;
@property(readonly, nonatomic) IGUser *currentUser; // @synthesize currentUser=_currentUser;
@property(nonatomic) __weak id <IGDirectRecipientDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)drainQueue;
- (void)enqueueSearchForString:(id)arg1 recipientHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (id)errorMessage;
- (void)fetchData;
- (void)fetchDataWithRecipientUseLocalCache:(_Bool)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) _Bool fetchNullStateResults; // @synthesize fetchNullStateResults=_fetchNullStateResults;
- (id)initWithMode:(long long)arg1 delegate:(id)arg2 showThreads:(_Bool)arg3 fetchNullStateResults:(_Bool)arg4 networker:(id)arg5 currentUser:(id)arg6;
@property(readonly, nonatomic) _Bool isLocal; // @synthesize isLocal=_isLocal;
@property(readonly, nonatomic) long long mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) __weak id <IGAPIClient> networker; // @synthesize networker=_networker;
@property(retain, nonatomic) NSMutableArray *pendingSearchQueue; // @synthesize pendingSearchQueue=_pendingSearchQueue;
- (void)performSearch:(id)arg1;
@property(retain, nonatomic) NSMutableArray *runningSearchQueue; // @synthesize runningSearchQueue=_runningSearchQueue;
@property(retain, nonatomic) IGCacheProxy *searchCache; // @synthesize searchCache=_searchCache;
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(readonly, nonatomic) _Bool showThreads; // @synthesize showThreads=_showThreads;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
