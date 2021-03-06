//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface IGAPIRequestBuilder : NSObject
{
    unsigned long long _HTTPMethod;
    NSString *_path;
    NSMutableDictionary *_parameters;
    NSMutableDictionary *_rawParameters;
    NSMutableDictionary *_fileParameters;
    NSMutableDictionary *_headers;
    _Bool _isSigned;
}

+ (id)builderWithHTTPMethod:(unsigned long long)arg1 format:(id)arg2;
+ (id)builderWithHTTPMethod:(unsigned long long)arg1 path:(id)arg2;
- (void).cxx_destruct;
- (id)addAdsHeader;
- (id)addDeviceIDHeader;
- (id)addInstalledAppsHeader;
- (id)advertisingID;
- (id)appendTopAggregatorOverride;
- (id)commonParametersForPostMethod;
- (id)description;
- (id)init;
- (id)installedAppsDictionary;
- (id)request;
- (id)setBool:(_Bool)arg1 forParameter:(id)arg2;
- (id)setDouble:(double)arg1 forParameter:(id)arg2;
- (id)setFile:(id)arg1 forParameter:(id)arg2;
- (id)setInteger:(long long)arg1 forParameter:(id)arg2;
- (id)setRawValue:(id)arg1 forParameter:(id)arg2;
- (id)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (id)setValue:(id)arg1 forParameter:(id)arg2;
- (id)sign;

@end

