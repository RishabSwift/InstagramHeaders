//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGLoginAPI : NSObject
{
}

+ (id)loginRequestWithUserID:(id)arg1 nonce:(id)arg2;
+ (id)loginRequestWithUserID:(id)arg1 token:(id)arg2 source:(id)arg3;
+ (id)loginRequestWithUsername:(id)arg1 password:(id)arg2 attempts:(unsigned long long)arg3;
+ (id)loginRequestWithUsername:(id)arg1 twoFactorIdentifier:(id)arg2 verificationCode:(id)arg3;

@end

