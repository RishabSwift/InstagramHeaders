//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSDate, NSDictionary, NSString, NSURL;

@interface FBAutoupdaterUpdate : NSObject <NSCoding, NSCopying>
{
    NSString *_installPath;
    NSDate *_installDate;
    NSURL *_url;
    NSURL *_deltaUrl;
    NSString *_version;
    NSDictionary *_manifest;
    NSDictionary *_checksums;
    NSDictionary *_uncompressedFilesizeMap;
    long long _size;
    long long _uncompressedSize;
    NSString *_installFolderPrefix;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *checksums; // @synthesize checksums=_checksums;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSURL *deltaUrl; // @synthesize deltaUrl=_deltaUrl;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 version:(id)arg2;
- (id)initWithURL:(id)arg1 version:(id)arg2 size:(long long)arg3;
@property(retain, nonatomic) NSDate *installDate; // @synthesize installDate=_installDate;
@property(copy, nonatomic) NSString *installFolderPrefix; // @synthesize installFolderPrefix=_installFolderPrefix;
@property(copy, nonatomic) NSString *installPath; // @synthesize installPath=_installPath;
- (_Bool)isEqual:(id)arg1;
@property(copy, nonatomic) NSDictionary *manifest; // @synthesize manifest=_manifest;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(copy, nonatomic) NSDictionary *uncompressedFilesizeMap; // @synthesize uncompressedFilesizeMap=_uncompressedFilesizeMap;
@property(nonatomic) long long uncompressedSize; // @synthesize uncompressedSize=_uncompressedSize;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;

@end

