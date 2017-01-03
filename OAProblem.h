//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface OAProblem : NSObject
{
    NSString *problem;
}

+ (id)ConsumerKeyUnknown;
+ (id)NonceUsed;
+ (id)ParameterAbsent;
+ (id)SignatureInvalid;
+ (id)SignatureMethodRejected;
+ (id)TimestampRefused;
+ (id)TokenExpired;
+ (id)TokenNotRenewable;
+ (id)TokenRejected;
+ (id)VersionRejected;
+ (id)problemWithResponseBody:(id)arg1;
+ (id)validProblems;
- (long long)code;
- (void)dealloc;
- (id)description;
- (id)initWithPointer:(id)arg1;
- (id)initWithProblem:(id)arg1;
- (id)initWithResponseBody:(id)arg1;
- (_Bool)isEqualTo:(id)arg1;
- (_Bool)isEqualToProblem:(id)arg1;
- (_Bool)isEqualToString:(id)arg1;
@property(readonly) NSString *problem; // @synthesize problem;

@end
