//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface FBFilterContext : NSObject
{
    NSMutableDictionary *_filterContextDictionary;
    id <FBFilterContextDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)getObjectForKey:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)postNotification:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end

