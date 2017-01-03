//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGDirectContent, IGDirectTypingIndicator, IGDirectTypingStatus, IGUser, IGUserSession, UICollectionView;

@interface IGDirectThreadCellFactory : NSObject
{
    _Bool _threadIsPending;
    IGDirectContent *_mediaMessageToHide;
    IGDirectTypingStatus *_typingStatus;
    IGUserSession *_userSession;
    UICollectionView *_collectionView;
    IGUser *_cellViewer;
    IGDirectTypingIndicator *_typingIndicator;
}

- (void).cxx_destruct;
- (id)cellForContents:(id)arg1 indexPath:(id)arg2 cellDelegate:(id)arg3 thread:(id)arg4;
@property(retain, nonatomic) IGUser *cellViewer; // @synthesize cellViewer=_cellViewer;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)initWithCollectionView:(id)arg1 cellViewer:(id)arg2 userSession:(id)arg3;
@property(nonatomic) __weak IGDirectContent *mediaMessageToHide; // @synthesize mediaMessageToHide=_mediaMessageToHide;
- (void)registerClassesForCollectionView:(id)arg1;
@property(nonatomic) _Bool threadIsPending; // @synthesize threadIsPending=_threadIsPending;
@property(retain, nonatomic) IGDirectTypingIndicator *typingIndicator; // @synthesize typingIndicator=_typingIndicator;
@property(retain, nonatomic) IGDirectTypingStatus *typingStatus; // @synthesize typingStatus=_typingStatus;
- (_Bool)shouldHideProfilePictureForIndexPath:(id)arg1 withContents:(id)arg2 cellViewer:(id)arg3;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;

@end

