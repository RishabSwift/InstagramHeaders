//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGDirectContent.h"

#import "IGDirectMessageProtocol.h"
#import "IGDirectMessageReactable.h"
#import "IGDirectShareProtocol.h"
#import "IGDirectUploadable.h"

@class IGDirectContentUploadInfo, IGLocation, NSArray, NSString;

@interface IGDirectLocationShare : IGDirectContent <IGDirectMessageProtocol, IGDirectUploadable, IGDirectMessageReactable, IGDirectShareProtocol>
{
    _Bool _reactionsNeedsReRender;
    NSArray *_reactions;
    unsigned long long _likeCount;
    unsigned long long _lastReactionType;
    IGLocation *_location;
    NSArray *_previewMedia;
    IGDirectContentUploadInfo *_uploadInfo;
    NSString *_comment;
}

- (void).cxx_destruct;
- (id)actionable;
- (_Bool)canConvertToPublishedMessage;
@property(copy, nonatomic) NSString *comment; // @synthesize comment=_comment;
- (id)contentTypeString;
- (id)copyOfContentWithReactionFilter:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)digestDescriptionWithCurrentUser:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)hideInThread;
- (id)initAsUploadWithComment:(id)arg1 location:(id)arg2 recipient:(id)arg3 currentUser:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (_Bool)isUploading;
@property(nonatomic) unsigned long long lastReactionType; // @synthesize lastReactionType=_lastReactionType;
@property(nonatomic) unsigned long long likeCount; // @synthesize likeCount=_likeCount;
@property(retain, nonatomic) IGLocation *location; // @synthesize location=_location;
- (id)mediaUploadable;
- (id)metadata;
@property(retain, nonatomic) NSArray *previewMedia; // @synthesize previewMedia=_previewMedia;
- (id)reactable;
@property(retain, nonatomic) NSArray *reactions; // @synthesize reactions=_reactions;
@property(nonatomic) _Bool reactionsNeedsReRender; // @synthesize reactionsNeedsReRender=_reactionsNeedsReRender;
- (id)realtimeUploadData;
- (id)requestFiles;
- (id)requestParameters;
- (id)requestURLStringDetail;
@property(copy, nonatomic) IGDirectContentUploadInfo *uploadInfo; // @synthesize uploadInfo=_uploadInfo;
- (id)subtitle;
- (_Bool)supportsPendingState;
- (_Bool)supportsRealtime;
- (id)title;
- (id)uploadComment;
- (id)uploadable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

