//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGPhotoFilter.h"

@class NSData, NSDictionary, NSString;

@interface IGSerializedPhotoFilter : IGPhotoFilter
{
    long long _filterType;
    NSString *_filterName;
    NSDictionary *_samplers;
    NSData *_borderImageData;
    NSString *_fragmentFunctions;
    NSString *_fragmentShader;
}

+ (id)photoFilterFromFile:(id)arg1;
+ (id)photoFilterWithDictionary:(id)arg1;
- (void).cxx_destruct;
- (id)borderImage;
@property(retain, nonatomic) NSData *borderImageData; // @synthesize borderImageData=_borderImageData;
@property(retain, nonatomic) NSString *filterName; // @synthesize filterName=_filterName;
@property(nonatomic) long long filterType; // @synthesize filterType=_filterType;
@property(retain, nonatomic) NSString *fragmentFunctions; // @synthesize fragmentFunctions=_fragmentFunctions;
@property(retain, nonatomic) NSString *fragmentShader; // @synthesize fragmentShader=_fragmentShader;
- (id)init;
- (id)initWithDictionary:(id)arg1;
@property(retain, nonatomic) NSDictionary *samplers; // @synthesize samplers=_samplers;

@end

