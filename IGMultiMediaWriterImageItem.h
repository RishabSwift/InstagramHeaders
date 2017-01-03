//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGMultiMediaWriterItem.h"

@class AVAsset, AVAssetWriter, UIImage;

@interface IGMultiMediaWriterImageItem : NSObject <IGMultiMediaWriterItem>
{
    long long _durationSeconds;
    double _outputWidth;
    UIImage *_image;
    AVAsset *_mediaAsset;
    AVAssetWriter *_assetWriter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AVAssetWriter *assetWriter; // @synthesize assetWriter=_assetWriter;
- (CDStruct_1b6d18a9)duration;
@property(nonatomic) long long durationSeconds; // @synthesize durationSeconds=_durationSeconds;
- (_Bool)hasAudioTrack;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)initWithImage:(id)arg1 durationSeconds:(long long)arg2 outputWidth:(double)arg3;
@property(retain, nonatomic) AVAsset *mediaAsset; // @synthesize mediaAsset=_mediaAsset;
@property(nonatomic) double outputWidth; // @synthesize outputWidth=_outputWidth;
- (void)prepareItemOnQueue:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)preparedMediaAsset;
- (void)respondWithCompletion:(CDUnknownBlockType)arg1 error:(id)arg2;
- (void)writeMediaAssetOnQueue:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end

