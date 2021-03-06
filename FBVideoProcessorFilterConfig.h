//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSDictionary, NSString;

@interface FBVideoProcessorFilterConfig : NSObject <NSCopying, NSCoding>
{
    NSString *_filterName;
    NSDictionary *_filterParameters;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *filterName; // @synthesize filterName=_filterName;
@property(readonly, copy, nonatomic) NSDictionary *filterParameters; // @synthesize filterParameters=_filterParameters;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFilterName:(id)arg1 filterParameters:(id)arg2;
- (_Bool)isEqual:(id)arg1;

@end

