//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL, NSUserDefaults;

@interface IGFacebookURLBuilder : NSObject
{
    NSString *_host;
    NSUserDefaults *_userDefaults;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *graphQLBaseURL;
@property(readonly, nonatomic) NSURL *graphQLBatchBaseURL;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
- (id)init;
- (id)initWithUserDefaults:(id)arg1;
@property(readonly, nonatomic) NSURL *mSiteBaseURL;
- (void)synchronize;
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;

@end

