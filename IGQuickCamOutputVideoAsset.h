//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectMessageProducer.h"
#import "IGQuickCamOutputAsset.h"
#import "IGVideoRendererDelegate.h"

@class IGVideoInfo, IGVideoRenderer, NSData, NSDate, NSString, NSURL, UIImage;

@interface IGQuickCamOutputVideoAsset : NSObject <IGDirectMessageProducer, IGQuickCamOutputAsset, IGVideoRendererDelegate>
{
    _Bool _isFromLibrary;
    UIImage *_displayImage;
    UIImage *_displayImageWithEdits;
    UIImage *_croppedImage;
    UIImage *_croppedImageWithEdits;
    long long _flashMode;
    NSDate *_creationDate;
    IGVideoInfo *_videoInfo;
    CDUnknownBlockType _completionBlock;
    NSURL *_exportedMediaURL;
    IGVideoRenderer *_videoRenderer;
}

- (void).cxx_destruct;
- (void)applyCropRectToClips:(struct CGRect)arg1;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) UIImage *croppedImage; // @synthesize croppedImage=_croppedImage;
@property(retain, nonatomic) UIImage *croppedImageWithEdits; // @synthesize croppedImageWithEdits=_croppedImageWithEdits;
- (void)dealloc;
- (long long)devicePosition;
@property(retain, nonatomic) UIImage *displayImage; // @synthesize displayImage=_displayImage;
@property(retain, nonatomic) UIImage *displayImageWithEdits; // @synthesize displayImageWithEdits=_displayImageWithEdits;
@property(retain, nonatomic) NSURL *exportedMediaURL; // @synthesize exportedMediaURL=_exportedMediaURL;
- (id)firstClip;
@property(nonatomic) long long flashMode; // @synthesize flashMode=_flashMode;
@property(readonly, nonatomic) NSData *imageData;
@property(nonatomic) _Bool isFromLibrary; // @synthesize isFromLibrary=_isFromLibrary;
@property(readonly, nonatomic) _Bool isPhoto;
- (id)lastClip;
- (id)messageWithParameter:(id)arg1 mediaUploadManager:(id)arg2 currentUser:(id)arg3;
- (void)prepareVideoDataForExportWithCompletion:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) IGVideoInfo *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(retain, nonatomic) IGVideoRenderer *videoRenderer; // @synthesize videoRenderer=_videoRenderer;
- (void)trimVideoToDuration:(double)arg1;
@property(readonly, nonatomic) NSData *videoData;
- (void)videoRenderer:(id)arg1 didFailWithError:(id)arg2;
- (void)videoRenderer:(id)arg1 didFinishRenderingVideoToURL:(id)arg2 videoSize:(struct CGSize)arg3 canceled:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

