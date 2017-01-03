//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGDirectoryFinder, NSString;

@interface IGFileFinder : NSObject
{
    NSString *_fileName;
    IGDirectoryFinder *_directoryFinder;
}

- (void).cxx_destruct;
- (id)cachesFileURL;
@property(readonly, nonatomic) IGDirectoryFinder *directoryFinder; // @synthesize directoryFinder=_directoryFinder;
- (id)documentsFileURL;
@property(readonly, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
- (id)fileURLInDirectory:(id)arg1;
- (id)initWithFileName:(id)arg1;
- (id)initWithFileName:(id)arg1 directoryFinder:(id)arg2;
- (id)temporaryFileURL;

@end
