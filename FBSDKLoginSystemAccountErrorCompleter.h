//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSDKLoginCompleting.h"

@class FBSDKLoginCompletionParameters;

@interface FBSDKLoginSystemAccountErrorCompleter : NSObject <FBSDKLoginCompleting>
{
    FBSDKLoginCompletionParameters *_parameters;
}

- (void).cxx_destruct;
- (void)completeLogIn:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithError:(id)arg1 permissions:(id)arg2;

@end

