//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGAuthUserInterfaceHelper : NSObject
{
}

+ (void)cancelUserSwitchLogoutUI;
+ (void)initiateLoginUIForUserID:(id)arg1 shouldAnimate:(_Bool)arg2 authLogInType:(long long)arg3 defaultSelectedTab:(long long)arg4;
+ (void)initiateLoginUIForUserID:(id)arg1 shouldAnimate:(_Bool)arg2 authLogInType:(long long)arg3 defaultSelectedTab:(long long)arg4 entryPoint:(unsigned long long)arg5;
+ (void)initiateLoginUIWithUserInfo:(id)arg1;
+ (void)initiateUserSwitchLogoutUIAnimated:(_Bool)arg1 entryPoint:(unsigned long long)arg2 failureBlock:(CDUnknownBlockType)arg3;
+ (void)showAccountSwitchedAlertBarForUser:(id)arg1;
+ (void)showForceLogoutAlertViewForUser:(id)arg1 dismissBlock:(CDUnknownBlockType)arg2;
+ (void)showHasMaximumNumberOfAccountsAlertViewWithDismissBlock:(CDUnknownBlockType)arg1;

@end
