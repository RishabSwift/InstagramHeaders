//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGVideoRendererProgressDelegate.h"
#import "NSCoding.h"

@class IGUploadVideoMetaData, IGUserSession, IGVideoRenderer, NSArray, NSData, NSDate, NSMutableArray, NSMutableDictionary, NSProgress, NSSet, NSString, NSURL, UIImage;

@interface IGUploadModel : NSObject <NSCoding, IGVideoRendererProgressDelegate>
{
    UIImage *_image;
    NSData *_imageData;
    _Bool _createdOffline;
    NSString *_userPK;
    long long _uploadDataType;
    NSDate *_uploadStartTime;
    double _configureStartTimestamp;
    long long _postAction;
    long long _postStatus;
    long long _fromStatus;
    long long _toStatus;
    id <IGRequestToken> _requestToken;
    NSMutableDictionary *_postDict;
    NSSet *_directRecipients;
    NSArray *_storyMentions;
    NSArray *_storyLinks;
    NSArray *_storyLocationStickers;
    NSProgress *_progress;
    long long _resultStatus;
    unsigned long long _uploadTaskIdentifier;
    unsigned long long _configureTaskIdentifier;
    long long _shareType;
    NSURL *_videoDataFileURL;
    NSArray *_videoUploadURLs;
    unsigned long long _currentVideoUploadURLIndex;
    NSString *_transcodeVideoID;
    NSString *_sessionID;
    IGVideoRenderer *_videoRenderer;
    long long _errorResponseStatusCode;
    NSString *_errorMessage;
    long long _errorType;
    long long _numberOfFailedConfigures;
    long long _numberOfFailedUploads;
    NSDate *_lastConfigureFailureTimestamp;
    NSDate *_lastUploadFailureTimestamp;
    long long _numberOfAutoRetryAttempts;
    long long _numberOfManualCancels;
    long long _uploadRetryPolicy;
    long long _autoRetryResumeUploadCount;
    long long _autoRetryConfigureCount;
    NSMutableArray *_currentRangesUploadedAlready;
    id <IGAnalyticsUploadWaterfall> _waterfall;
    NSDate *_videoStartUploadTime;
    double _videoUploadSpeed;
    IGUploadVideoMetaData *_videoMetadata;
    unsigned long long _photoBytesUploaded;
    unsigned long long _videoBytesUploaded;
    NSProgress *_renderProgress;
    NSProgress *_uploadProgress;
    NSProgress *_configureProgress;
    double _videoMaxDuration;
    long long _numberOfManualRetries;
    long long _qeUseSVE;
    NSDate *_lastUserActionTime;
    NSDate *_shareActionTime;
    NSMutableArray *_uploadStepCounts;
    long long _uploadWidthMin;
    long long _uploadWidthMax;
    long long _uploadWidthMaxForHiResLandscape;
    double _minDownscaleHQResize;
    IGUserSession *_userSession_ANTIPATTERN_ONLY_SET_FOR_RENDERER;
}

+ (long long)version;
- (void).cxx_destruct;
- (id)advanceToNextNotExpiredVideoUploadURL;
@property(nonatomic) long long autoRetryConfigureCount; // @synthesize autoRetryConfigureCount=_autoRetryConfigureCount;
@property(nonatomic) long long autoRetryResumeUploadCount; // @synthesize autoRetryResumeUploadCount=_autoRetryResumeUploadCount;
- (void)commonInit;
@property(readonly, nonatomic) NSProgress *configureProgress; // @synthesize configureProgress=_configureProgress;
@property(nonatomic) double configureStartTimestamp; // @synthesize configureStartTimestamp=_configureStartTimestamp;
@property(nonatomic) unsigned long long configureTaskIdentifier; // @synthesize configureTaskIdentifier=_configureTaskIdentifier;
@property(nonatomic) _Bool createdOffline; // @synthesize createdOffline=_createdOffline;
- (id)currentNotExpiredVideoUploadURL;
@property(retain, nonatomic) NSMutableArray *currentRangesUploadedAlready; // @synthesize currentRangesUploadedAlready=_currentRangesUploadedAlready;
@property(nonatomic) unsigned long long currentVideoUploadURLIndex; // @synthesize currentVideoUploadURLIndex=_currentVideoUploadURLIndex;
- (void)dealloc;
- (void)didFailUpload;
@property(copy, nonatomic) NSSet *directRecipients; // @synthesize directRecipients=_directRecipients;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(nonatomic) long long errorResponseStatusCode; // @synthesize errorResponseStatusCode=_errorResponseStatusCode;
@property(nonatomic) long long errorType; // @synthesize errorType=_errorType;
@property(readonly, nonatomic) long long fromStatus; // @synthesize fromStatus=_fromStatus;
- (struct _NSRange)getNextUploadRange;
- (void)handleConfigureFailure;
- (void)handleLoggingForPostActionUpdate;
- (void)handleUploadFailure;
- (void)handleUploadSuspended;
- (_Bool)hasDoneUploadWithAllRanges;
- (_Bool)hasFailed;
- (_Bool)hasVideo;
@property(retain, nonatomic) UIImage *image;
@property(readonly, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
- (void)incrementUploadStepCount:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartTime:(id)arg1 userPK:(id)arg2 dataType:(long long)arg3;
- (_Bool)isDirectStoryUpload;
- (_Bool)isExpiredStoryUpload;
- (_Bool)isStoryUpload;
- (_Bool)isURLExpired:(id)arg1;
@property(retain, nonatomic) NSDate *lastConfigureFailureTimestamp; // @synthesize lastConfigureFailureTimestamp=_lastConfigureFailureTimestamp;
@property(retain, nonatomic) NSDate *lastUploadFailureTimestamp; // @synthesize lastUploadFailureTimestamp=_lastUploadFailureTimestamp;
@property(retain, nonatomic) NSDate *lastUserActionTime; // @synthesize lastUserActionTime=_lastUserActionTime;
- (void)logActionUpdate;
- (void)logRemoval;
- (void)logRetry;
- (void)logStatusUpdate;
- (id)logWaterfallEvent:(id)arg1;
- (void)logWaterfallEventForVideoRenderEvent:(id)arg1 videoRenderer:(id)arg2;
@property(nonatomic) double minDownscaleHQResize; // @synthesize minDownscaleHQResize=_minDownscaleHQResize;
- (id)nameForUploadStatus:(long long)arg1;
@property(nonatomic) long long numberOfAutoRetryAttempts; // @synthesize numberOfAutoRetryAttempts=_numberOfAutoRetryAttempts;
@property(nonatomic) long long numberOfFailedConfigures; // @synthesize numberOfFailedConfigures=_numberOfFailedConfigures;
@property(nonatomic) long long numberOfFailedUploads; // @synthesize numberOfFailedUploads=_numberOfFailedUploads;
@property(nonatomic) long long numberOfManualCancels; // @synthesize numberOfManualCancels=_numberOfManualCancels;
@property(nonatomic) long long numberOfManualRetries; // @synthesize numberOfManualRetries=_numberOfManualRetries;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(nonatomic) unsigned long long photoBytesUploaded; // @synthesize photoBytesUploaded=_photoBytesUploaded;
@property(nonatomic) long long postAction; // @synthesize postAction=_postAction;
@property(retain, nonatomic) NSMutableDictionary *postDict; // @synthesize postDict=_postDict;
@property(nonatomic) long long postStatus; // @synthesize postStatus=_postStatus;
- (long long)postStatusFromPostStatusV0:(long long)arg1;
- (id)postStatusName;
@property(readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(nonatomic) long long qeUseSVE; // @synthesize qeUseSVE=_qeUseSVE;
@property(readonly, nonatomic) NSProgress *renderProgress; // @synthesize renderProgress=_renderProgress;
@property(retain, nonatomic) id <IGRequestToken> requestToken; // @synthesize requestToken=_requestToken;
- (void)resetUploadSpeed;
@property(nonatomic) long long resultStatus; // @synthesize resultStatus=_resultStatus;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (void)setPostStatus:(long long)arg1 fromStatus:(long long)arg2 toStatus:(long long)arg3;
- (void)setPostStatus:(long long)arg1 toStatus:(long long)arg2;
@property(retain, nonatomic) NSDate *shareActionTime; // @synthesize shareActionTime=_shareActionTime;
@property(nonatomic) long long shareType; // @synthesize shareType=_shareType;
@property(copy, nonatomic) NSArray *storyLinks; // @synthesize storyLinks=_storyLinks;
@property(copy, nonatomic) NSArray *storyLocationStickers; // @synthesize storyLocationStickers=_storyLocationStickers;
@property(copy, nonatomic) NSArray *storyMentions; // @synthesize storyMentions=_storyMentions;
@property(copy, nonatomic) NSString *transcodeVideoID; // @synthesize transcodeVideoID=_transcodeVideoID;
@property(nonatomic) long long uploadRetryPolicy; // @synthesize uploadRetryPolicy=_uploadRetryPolicy;
@property(retain, nonatomic) NSDate *uploadStartTime; // @synthesize uploadStartTime=_uploadStartTime;
@property(retain, nonatomic) NSMutableArray *uploadStepCounts; // @synthesize uploadStepCounts=_uploadStepCounts;
@property(nonatomic) unsigned long long uploadTaskIdentifier; // @synthesize uploadTaskIdentifier=_uploadTaskIdentifier;
@property(nonatomic) long long uploadWidthMax; // @synthesize uploadWidthMax=_uploadWidthMax;
@property(nonatomic) long long uploadWidthMaxForHiResLandscape; // @synthesize uploadWidthMaxForHiResLandscape=_uploadWidthMaxForHiResLandscape;
@property(nonatomic) long long uploadWidthMin; // @synthesize uploadWidthMin=_uploadWidthMin;
@property(retain, nonatomic) NSString *userPK; // @synthesize userPK=_userPK;
@property(nonatomic) unsigned long long videoBytesUploaded; // @synthesize videoBytesUploaded=_videoBytesUploaded;
@property(copy, nonatomic) NSURL *videoDataFileURL; // @synthesize videoDataFileURL=_videoDataFileURL;
@property(nonatomic) double videoMaxDuration; // @synthesize videoMaxDuration=_videoMaxDuration;
@property(retain, nonatomic) IGUploadVideoMetaData *videoMetadata; // @synthesize videoMetadata=_videoMetadata;
- (void)setVideoRenderer:(id)arg1 userSession:(id)arg2;
@property(copy, nonatomic) NSDate *videoStartUploadTime; // @synthesize videoStartUploadTime=_videoStartUploadTime;
@property(nonatomic) double videoUploadSpeed; // @synthesize videoUploadSpeed=_videoUploadSpeed;
@property(retain, nonatomic) NSArray *videoUploadURLs; // @synthesize videoUploadURLs=_videoUploadURLs;
@property(retain, nonatomic) id <IGAnalyticsUploadWaterfall> waterfall; // @synthesize waterfall=_waterfall;
- (void)setupProgress;
- (_Bool)shouldAutoRetryUpload;
@property(readonly, nonatomic) unsigned long long suggestedChunkSize;
@property(readonly, nonatomic) long long targetStatus;
@property(readonly, nonatomic) long long toStatus; // @synthesize toStatus=_toStatus;
@property(readonly, nonatomic) unsigned long long totalVideoBytesExpectToUpload;
@property(readonly, nonatomic) unsigned long long totalVideoBytesUploaded;
- (void)updatePhotoUploadProgressByFractionCompleted:(double)arg1;
- (void)updatePostStatusAfterInitFromCoder;
- (void)updateUploadRangesInfo:(id)arg1;
- (void)updateVideoUploadProgressByFractionCompleted:(double)arg1;
- (void)updateVideoUploadSpeedWithTotalFractionCompleted:(double)arg1;
@property(readonly, nonatomic) long long uploadDataType; // @synthesize uploadDataType=_uploadDataType;
@property(readonly, nonatomic) NSString *uploadID;
@property(readonly, nonatomic) NSProgress *uploadProgress; // @synthesize uploadProgress=_uploadProgress;
@property(readonly, nonatomic) __weak IGUserSession *userSession_ANTIPATTERN_ONLY_SET_FOR_RENDERER; // @synthesize userSession_ANTIPATTERN_ONLY_SET_FOR_RENDERER=_userSession_ANTIPATTERN_ONLY_SET_FOR_RENDERER;
- (id)videoAnalyticsExtraDataForActionEvent;
- (id)videoAnalyticsExtraDataForStatusEvent;
- (id)videoData;
- (id)videoQEAnalyticsExtraData;
@property(readonly, nonatomic) __weak IGVideoRenderer *videoRenderer; // @synthesize videoRenderer=_videoRenderer;
- (void)videoRenderer:(id)arg1 didFailWithError:(id)arg2;
- (void)videoRenderer:(id)arg1 didFinishRenderingVideoToURL:(id)arg2 canceled:(_Bool)arg3;
- (void)videoRenderer:(id)arg1 didProgress:(double)arg2;
- (void)videoRendererDidStartRenderingVideo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

