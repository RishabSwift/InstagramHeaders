//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ZZChannelOutput.h"

@interface ZZFileChannelOutput : NSObject <ZZChannelOutput>
{
    int _fileDescriptor;
    unsigned int _offset;
}

- (void)close;
- (id)initWithFileDescriptor:(int)arg1;
@property(nonatomic) unsigned int offset; // @synthesize offset=_offset;
- (_Bool)seekToOffset:(unsigned int)arg1 error:(out id *)arg2;
- (_Bool)truncateAtOffset:(unsigned int)arg1 error:(out id *)arg2;
- (_Bool)writeData:(id)arg1 error:(out id *)arg2;

@end

