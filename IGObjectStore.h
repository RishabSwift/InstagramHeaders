//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable;

@interface IGObjectStore : NSObject
{
    NSMapTable *_objects;
}

- (void).cxx_destruct;
- (id)allObjects;
- (void)clear;
- (id)init;
- (Class)objectClass;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectForObject:(id)arg1;
- (id)objectFromDict:(id)arg1;
- (id)objectWithDict:(id)arg1;
- (id)objectWithPK:(id)arg1;
- (void)removeObjectWithPK:(id)arg1;
- (void)setStoredObject:(id)arg1 forKey:(id)arg2;
- (id)storedObjectForKey:(id)arg1;
- (id)storedObjectWithPK:(id)arg1;

@end
