//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBAutoupdaterUpdate.h"

@class NSString;

@interface FBAutoupdaterReactUpdate : FBAutoupdaterUpdate
{
    _Bool _fallbackToFullUpdate;
    NSString *_policy;
    long long _deltaFileSize;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) long long deltaFileSize; // @synthesize deltaFileSize=_deltaFileSize;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic) _Bool fallbackToFullUpdate; // @synthesize fallbackToFullUpdate=_fallbackToFullUpdate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 version:(id)arg2 size:(long long)arg3;
@property(copy, nonatomic) NSString *policy; // @synthesize policy=_policy;

@end

