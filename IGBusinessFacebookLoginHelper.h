//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGBusinessFacebookLoginHelper : NSObject
{
}

+ (void)fetchPageAccessTokenForPageWithID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 userSession:(id)arg3;
+ (void)logInToFacebookFromViewController:(id)arg1 withSuccessfulCompletion:(CDUnknownBlockType)arg2 unsuccessfulLogin:(CDUnknownBlockType)arg3 userSession:(id)arg4;
+ (void)loginToFacebookWithPagePermissionFromViewController:(id)arg1 successCompletion:(CDUnknownBlockType)arg2 errorCompletion:(CDUnknownBlockType)arg3 userSession:(id)arg4;

@end
