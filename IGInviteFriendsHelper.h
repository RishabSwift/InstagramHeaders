//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGInviteFriendsHelper : NSObject
{
    id <IGAPIClient> _networker;
}

- (void).cxx_destruct;
- (id)initWithNetworker:(id)arg1;
@property(retain, nonatomic) id <IGAPIClient> networker; // @synthesize networker=_networker;
- (void)sendInviteRequestToFBID:(id)arg1 senderFBID:(id)arg2 fbAccessToken:(id)arg3 referringScreen:(id)arg4 successHandler:(CDUnknownBlockType)arg5 failureHanlder:(CDUnknownBlockType)arg6;

@end
