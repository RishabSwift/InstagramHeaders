//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface FileUploadAttachment : NSObject
{
    NSString *_filename;
    NSString *_name;
    NSString *_contentType;
    NSString *_filePath;
    NSData *_contents;
}

- (void).cxx_destruct;
- (id)contentType;
- (id)contents;
- (id)filePath;
- (id)filename;
- (id)initWithFilename:(id)arg1 name:(id)arg2 contentType:(id)arg3 filePath:(id)arg4 contents:(id)arg5;
- (id)initWithFilename:(id)arg1 name:(id)arg2 contents:(id)arg3 shouldCompress:(_Bool)arg4;
- (id)name;

@end

