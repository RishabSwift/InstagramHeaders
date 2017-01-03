//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGLocationMetadata, NSArray, NSString;

@interface IGComposition : NSObject
{
    _Bool _disableComments;
    NSString *_compositionIdentifier;
    NSArray *_assets;
    struct NSString *_uploadIdentifier;
    NSString *_caption;
    IGLocationMetadata *_locationMetadata;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *assets; // @synthesize assets=_assets;
@property(copy, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(readonly, copy, nonatomic) NSString *compositionIdentifier; // @synthesize compositionIdentifier=_compositionIdentifier;
@property(nonatomic) _Bool disableComments; // @synthesize disableComments=_disableComments;
- (id)initWithIdentifier:(id)arg1 assets:(id)arg2;
@property(readonly, nonatomic) IGLocationMetadata *locationMetadata; // @synthesize locationMetadata=_locationMetadata;
- (void)updateUploadIdentifier:(struct NSString *)arg1;
@property(readonly, nonatomic) NSString *uploadIdentifier; // @synthesize uploadIdentifier=_uploadIdentifier;

@end
