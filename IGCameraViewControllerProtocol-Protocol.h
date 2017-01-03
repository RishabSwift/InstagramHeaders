//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGCameraNavigationController, IGCaptureFlowViewModel, IGMediaMetadata, IGShareListManager, IGUserSession;

@protocol IGCameraViewControllerProtocol <NSObject>
- (id)initWithDraft:(IGMediaMetadata *)arg1 shareListManager:(IGShareListManager *)arg2 captureFlowViewModel:(IGCaptureFlowViewModel *)arg3 userSession:(IGUserSession *)arg4;
@property(readonly, nonatomic) IGCameraNavigationController *navController;
- (_Bool)prefersStatusBarHidden;
@end
