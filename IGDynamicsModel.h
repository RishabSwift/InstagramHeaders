//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGDynamicsProperties;

@interface IGDynamicsModel : NSObject
{
    _Bool _isDone;
    IGDynamicsProperties *_properties;
    CDUnknownBlockType _completionBlock;
}

- (void).cxx_destruct;
- (void)callCompletionHandlerWithCompleted:(_Bool)arg1;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, nonatomic) _Bool isDone; // @synthesize isDone=_isDone;
- (_Bool)notify;
@property(retain, nonatomic) IGDynamicsProperties *properties; // @synthesize properties=_properties;
- (void)step:(double)arg1;

@end

