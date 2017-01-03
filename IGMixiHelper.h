//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGMixiAuthDelegate.h"
#import "IGServiceHelperProtocol.h"

@class IGUserDefaults, NSString;

@interface IGMixiHelper : NSObject <IGMixiAuthDelegate, IGServiceHelperProtocol>
{
    IGUserDefaults *_sessionUserDefaults;
    id <IGAPIClient> _networker;
    NSString *_accessToken;
}

+ (id)accessTokenKey;
+ (void)clearForUserPK:(id)arg1;
+ (_Bool)hasAdvancedOptions;
+ (id)serviceName;
+ (id)sharedHelperForUserSession:(id)arg1;
+ (id)shortServiceName;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
- (id)authURLString;
- (id)callbackURLString;
- (id)clientID;
@property(nonatomic) long long currentPrivacySetting;
- (void)fetchTokenFinished:(id)arg1;
- (id)getLabelForPrivacySetting:(long long)arg1;
- (id)getMixiConstantForPrivacySetting:(long long)arg1;
- (_Bool)hasEverBeenConfigured;
- (_Bool)hasSelectedPrivacySetting;
- (id)initWithSessionUserDefaults:(id)arg1 networker:(id)arg2;
- (_Bool)isAvailableInCurrentLocale;
- (_Bool)isConfigurable;
- (_Bool)isConfigured;
- (void)logout;
- (void)logoutAndUnlink;
- (void)mixiAuthController:(id)arg1 didLoginWithCode:(id)arg2;
- (void)mixiAuthControllerLoginFailed:(id)arg1;
- (_Bool)needsToReauthorize;
@property(retain, nonatomic) id <IGAPIClient> networker; // @synthesize networker=_networker;
- (void)onFetchTokenFailed;
- (void)reauthorizationNeedsLogin;
- (void)reauthorize;
- (void)reauthorizeIfNeeded;
- (id)refreshToken;
- (_Bool)requiresLocationCoordinate;
@property(retain, nonatomic) IGUserDefaults *sessionUserDefaults; // @synthesize sessionUserDefaults=_sessionUserDefaults;
- (void)setAccessAndRefreshToken:(id)arg1 expirationInSeconds:(int)arg2 refreshToken:(id)arg3;
- (void)setNeedsReauthorization;
- (id)sharingInfo;
- (_Bool)supportsMediaType:(long long)arg1;
- (id)viewControllerForAdvancedOptionsWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
