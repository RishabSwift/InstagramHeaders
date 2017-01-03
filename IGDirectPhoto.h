//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGDirectContent.h"

#import "IGDirectContentFirstAppearance.h"
#import "IGDirectMediaContent.h"
#import "IGDirectMediaUploadable.h"
#import "IGDirectMediaViewerProducer.h"
#import "IGDirectMessageActionable.h"
#import "IGDirectMessageProtocol.h"
#import "IGDirectMessageReactable.h"
#import "IGImageURLProvider.h"
#import "NSCoding.h"

@class IGDirectContentUploadInfo, IGDirectItemIdBasedImageURLProcessor, IGPhoto, IGUploadModel, NSArray, NSData, NSString, NSURL;

@interface IGDirectPhoto : IGDirectContent <IGDirectMessageProtocol, IGDirectMediaUploadable, IGDirectMessageReactable, IGDirectMediaContent, IGImageURLProvider, NSCoding, IGDirectMediaViewerProducer, IGDirectContentFirstAppearance, IGDirectMessageActionable>
{
    _Bool _isFirstAppearance;
    _Bool _reactionsNeedsReRender;
    _Bool _useMainCameraUploadFlow;
    IGUploadModel *_uploadModel;
    NSData *_imageData;
    NSArray *_reactions;
    unsigned long long _likeCount;
    unsigned long long _lastReactionType;
    IGDirectItemIdBasedImageURLProcessor *_previewImageURLProcessor;
    IGPhoto *_photo;
    IGDirectContentUploadInfo *_uploadInfo;
    NSString *_comment;
    struct CGSize _aspectRatio;
}

- (void).cxx_destruct;
- (id)actionable;
@property(nonatomic) struct CGSize aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(readonly, nonatomic) NSURL *cacheKeyURL;
- (_Bool)canConvertToPublishedMessage;
- (_Bool)canCopy;
- (_Bool)canPostToFeed;
- (_Bool)canReport;
- (_Bool)canSave;
@property(copy, nonatomic) NSString *comment; // @synthesize comment=_comment;
- (id)contentTypeString;
- (id)copyOfContentWithReactionFilter:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)digestDescriptionWithCurrentUser:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)hideInThread;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
- (id)imageURLForWidth:(double)arg1;
- (id)imageURLForWidth:(double)arg1 option:(long long)arg2;
- (id)imageURLForWidth:(double)arg1 option:(long long)arg2 scale:(double)arg3;
- (id)imageURLOfAtLeastWidth:(double)arg1 scale:(double)arg2;
- (id)initAsUploadWithComment:(id)arg1 recipient:(id)arg2 aspectRatio:(struct CGSize)arg3 useMainCameraUploadFlow:(_Bool)arg4 currentUser:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithPhoto:(id)arg1 sender:(id)arg2 sentDate:(id)arg3 itemId:(id)arg4 recipient:(id)arg5 comment:(id)arg6 aspectRatio:(struct CGSize)arg7 useMainCamera:(_Bool)arg8;
@property(nonatomic) _Bool isFirstAppearance; // @synthesize isFirstAppearance=_isFirstAppearance;
- (_Bool)isUploading;
@property(nonatomic) unsigned long long lastReactionType; // @synthesize lastReactionType=_lastReactionType;
@property(nonatomic) unsigned long long likeCount; // @synthesize likeCount=_likeCount;
- (id)mediaUploadable;
- (id)mediaViewerWithPreviewImage:(id)arg1;
- (id)metadata;
@property(retain, nonatomic) IGPhoto *photo; // @synthesize photo=_photo;
- (id)preloadedImage;
@property(readonly, nonatomic) IGDirectItemIdBasedImageURLProcessor *previewImageURLProcessor; // @synthesize previewImageURLProcessor=_previewImageURLProcessor;
- (id)reactable;
@property(retain, nonatomic) NSArray *reactions; // @synthesize reactions=_reactions;
@property(nonatomic) _Bool reactionsNeedsReRender; // @synthesize reactionsNeedsReRender=_reactionsNeedsReRender;
- (id)realtimeUploadData;
- (id)requestFiles;
- (id)requestParameters;
- (id)requestURLStringDetail;
@property(copy, nonatomic) IGDirectContentUploadInfo *uploadInfo; // @synthesize uploadInfo=_uploadInfo;
@property(retain, nonatomic) IGUploadModel *uploadModel; // @synthesize uploadModel=_uploadModel;
@property(nonatomic) _Bool useMainCameraUploadFlow; // @synthesize useMainCameraUploadFlow=_useMainCameraUploadFlow;
- (_Bool)supportsPendingState;
- (_Bool)supportsRealtime;
- (id)thumbnailURLForAspectFillSize:(struct CGSize)arg1 option:(long long)arg2;
- (id)uploadComment;
- (id)uploadable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

