//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IGDirectRealtimeMessageOperation : NSObject
{
    CDUnknownBlockType _successHandler;
    CDUnknownBlockType _failureHandler;
    NSString *_messageKey;
    NSString *_message;
}

- (void).cxx_destruct;
- (id)description;
@property(readonly, copy, nonatomic) CDUnknownBlockType failureHandler; // @synthesize failureHandler=_failureHandler;
- (id)initWithMessageKey:(id)arg1 message:(id)arg2 successHandler:(CDUnknownBlockType)arg3 failureHandler:(CDUnknownBlockType)arg4;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, copy, nonatomic) NSString *messageKey; // @synthesize messageKey=_messageKey;
@property(readonly, copy, nonatomic) CDUnknownBlockType successHandler; // @synthesize successHandler=_successHandler;

@end
