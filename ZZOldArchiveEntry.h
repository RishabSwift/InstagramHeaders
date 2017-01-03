//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ZZArchiveEntry.h"

@class NSDate, NSString;

@interface ZZOldArchiveEntry : ZZArchiveEntry
{
    struct ZZCentralFileHeader *_centralFileHeader;
    struct ZZLocalFileHeader *_localFileHeader;
    unsigned long long _encoding;
    long long _encryptionMode;
}

- (_Bool)check:(out id *)arg1;
- (_Bool)checkEncryptionAndCompression:(out id *)arg1;
@property(readonly, nonatomic) _Bool compressed;
@property(readonly, nonatomic) unsigned long long compressedSize;
- (unsigned short)compressionMethod;
@property(readonly, nonatomic) unsigned long long crc32;
@property(readonly, nonatomic) _Bool encrypted;
- (id)fileData;
@property(readonly, nonatomic) unsigned short fileMode;
@property(readonly, nonatomic) NSString *fileName;
- (id)initWithCentralFileHeader:(struct ZZCentralFileHeader *)arg1 localFileHeader:(struct ZZLocalFileHeader *)arg2 encoding:(unsigned long long)arg3;
@property(readonly, nonatomic) NSDate *lastModified;
- (struct CGDataProvider *)newDataProviderWithPassword:(id)arg1 error:(out id *)arg2;
- (id)newDataWithPassword:(id)arg1 error:(out id *)arg2;
- (id)newStreamWithPassword:(id)arg1 error:(out id *)arg2;
- (id)newWriterCanSkipLocalFile:(_Bool)arg1;
- (id)streamForData:(id)arg1 withPassword:(id)arg2 error:(out id *)arg3;
- (id)stringWithBytes:(char *)arg1 length:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long uncompressedSize;

@end

