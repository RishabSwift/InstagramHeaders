//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGUploadModel;

@interface IGPendingStoryItemStatusObserver : NSObject
{
    _Bool _manuallyCancelled;
    IGUploadModel *_pendingUpload;
    id <IGPendingStoryItemStatusDelegate> _delegate;
    long long _status;
    double _progress;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGPendingStoryItemStatusDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool manuallyCancelled; // @synthesize manuallyCancelled=_manuallyCancelled;
- (void)numberOfManualCancelsDidChange;
@property(retain, nonatomic) IGUploadModel *pendingUpload; // @synthesize pendingUpload=_pendingUpload;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void)updateForNumberOfCancelsChange;
- (void)updateForProgressChange;
- (void)updateForStatusChange;
- (void)uploadProgressDidChange;
- (void)uploadStatusDidChange;

@end

