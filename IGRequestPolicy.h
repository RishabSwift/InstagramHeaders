//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGRequestPolicy : NSObject
{
    _Bool _HTTPShouldHandleCookies;
    double _timeoutInterval;
    unsigned long long _requestType;
    unsigned long long _behavior;
}

@property(readonly, nonatomic) _Bool HTTPShouldHandleCookies; // @synthesize HTTPShouldHandleCookies=_HTTPShouldHandleCookies;
@property(readonly, nonatomic) unsigned long long behavior; // @synthesize behavior=_behavior;
- (id)initWithHTTPShouldHandleCookies:(_Bool)arg1 timeoutInterval:(double)arg2 requestType:(unsigned long long)arg3 behavior:(unsigned long long)arg4;
@property(readonly, nonatomic) unsigned long long requestType; // @synthesize requestType=_requestType;
@property(readonly, nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;

@end
