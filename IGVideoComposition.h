//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class AVMutableComposition, IGVideoConfiguration, NSArray, NSCache, NSURL, UIImage;

@interface IGVideoComposition : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _shouldMuteAudio;
    NSArray *_clips;
    UIImage *_overlayImage;
    double _keyPosition;
    NSURL *_renderedVideoURL;
    long long _stabilizationMode;
    IGVideoConfiguration *_configuration;
    AVMutableComposition *_composition;
    double _renderProgress;
    UIImage *_thumbnail;
    UIImage *_unfilteredThumbnail;
    NSCache *_thumbnailCache;
    Class _filterClass;
    double _filterStrength;
}

+ (struct CGSize)calculateDownscaleSizeForInputSize:(struct CGSize)arg1 outputSize:(struct CGSize)arg2 clip:(id)arg3;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (void)addClip:(id)arg1;
- (_Bool)canEnableStabilization;
- (unsigned long long)clipIndexForFrameTime:(CDStruct_1b6d18a9)arg1;
@property(retain, nonatomic) NSArray *clips; // @synthesize clips=_clips;
@property(retain, nonatomic) AVMutableComposition *composition; // @synthesize composition=_composition;
@property(retain, nonatomic) IGVideoConfiguration *configuration; // @synthesize configuration=_configuration;
- (CDStruct_1b6d18a9)convertPresentationTime:(CDStruct_1b6d18a9)arg1 toClip:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (CDStruct_1b6d18a9)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)filter;
@property(retain, nonatomic) Class filterClass; // @synthesize filterClass=_filterClass;
@property(nonatomic) double filterStrength; // @synthesize filterStrength=_filterStrength;
- (struct CGImage *)generator:(id)arg1 generateImageForTimestamp:(CDStruct_1b6d18a9 *)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithVideoConfiguration:(id)arg1;
- (void)invalidateComposition;
- (_Bool)isFastVideo;
@property(nonatomic) double keyPosition; // @synthesize keyPosition=_keyPosition;
- (void)moveClipAtIndex:(id)arg1 toIndex:(id)arg2;
@property(retain, nonatomic) UIImage *overlayImage; // @synthesize overlayImage=_overlayImage;
- (id)rawVideoLocationString;
- (void)refreshThumbnail;
- (void)removeClipAtIndex:(id)arg1;
- (void)removeLastClip;
@property(nonatomic) double renderProgress; // @synthesize renderProgress=_renderProgress;
@property(retain, nonatomic) NSURL *renderedVideoURL; // @synthesize renderedVideoURL=_renderedVideoURL;
- (void)setBaseFilterClass:(Class)arg1 strength:(double)arg2;
@property(nonatomic) _Bool shouldMuteAudio; // @synthesize shouldMuteAudio=_shouldMuteAudio;
@property(nonatomic) long long stabilizationMode; // @synthesize stabilizationMode=_stabilizationMode;
@property(retain, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(retain, nonatomic) NSCache *thumbnailCache; // @synthesize thumbnailCache=_thumbnailCache;
@property(retain, nonatomic) UIImage *unfilteredThumbnail; // @synthesize unfilteredThumbnail=_unfilteredThumbnail;
- (_Bool)shouldEnableStabilization;
- (_Bool)shouldStabilizeClip:(id)arg1;
- (_Bool)shouldStabilizeFrameAtTime:(CDStruct_1b6d18a9)arg1;
- (long long)sourceType;
- (id)thumbnailHelper:(_Bool)arg1;

@end
