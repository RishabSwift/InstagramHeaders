//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGActionSheetDelegate.h"
#import "IGCameraNavigationControllerDelegate.h"
#import "IGCaptureControllerDelegate.h"
#import "IGTwitterProfilePictureDelegate.h"
#import "UIImagePickerControllerDelegate.h"

@class IGUserSession, NSString, NSURL, UIViewController;

@interface IGProfilePictureHelper : NSObject <IGCameraNavigationControllerDelegate, IGCaptureControllerDelegate, IGActionSheetDelegate, IGTwitterProfilePictureDelegate, UIImagePickerControllerDelegate>
{
    _Bool _showLocalOptionsOnly;
    id <IGProfilePictureHelperDelegate> _delegate;
    UIViewController *_viewController;
    IGUserSession *_userSession;
    id <UIViewControllerTransitioningDelegate> _cameraTransitionDelegate;
    NSURL *_currentDownloadingImageURL;
    long long _waterfallEntryPointForActionSheet;
}

+ (void)logProfilePictureUpdatedWithOption:(long long)arg1;
- (void).cxx_destruct;
- (void)actionSheetDismissedWithButtonTitled:(id)arg1;
- (void)actionSheetFinishedHiding;
- (void)cameraControllerDidCancel;
- (void)cameraControllerDidFinishWithDirectShare:(_Bool)arg1;
- (void)cameraControllerDidFinishWithPhoto:(id)arg1 fromOrigin:(long long)arg2;
- (void)cameraControllerDidFinishWithVideoComposition:(id)arg1;
@property(retain, nonatomic) id <UIViewControllerTransitioningDelegate> cameraTransitionDelegate; // @synthesize cameraTransitionDelegate=_cameraTransitionDelegate;
- (void)captureController:(id)arg1 didChangeToCameraMode:(long long)arg2;
- (void)captureController:(id)arg1 didConfirmVideoComposition:(id)arg2 mediaMetadata:(id)arg3;
- (void)captureController:(id)arg1 didTakePhotoWithBuffer:(id)arg2 mediaMetadata:(id)arg3 deviceOrientation:(long long)arg4;
- (void)captureController:(id)arg1 didUpdateVideoComposition:(id)arg2;
- (void)captureController:(id)arg1 willTakePhotoWithPreviewBuffer:(id)arg2 mediaMetadata:(id)arg3;
- (void)captureControllerDidCancelCapture:(id)arg1;
- (void)captureControllerDidEndFilmingClip:(id)arg1;
- (void)captureControllerWillBeginFilmingClip:(id)arg1;
@property(retain, nonatomic) NSURL *currentDownloadingImageURL; // @synthesize currentDownloadingImageURL=_currentDownloadingImageURL;
- (void)dealloc;
@property(nonatomic) __weak id <IGProfilePictureHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)delegateDidFailDownloadingProfilePicture;
- (void)delegateDidFinishDownloadingProfilePicture:(id)arg1 fromOption:(long long)arg2;
- (void)delegateDidFinishDownloadingProfilePictureWithURL:(id)arg1 fromOption:(long long)arg2;
- (void)delegateRemovePictureButtonTapped;
- (_Bool)delegateShouldShowRemoveCurrentPicture;
- (void)delegateWillPerformAction:(long long)arg1;
- (void)delegateWillStartDownloadingProfilePicture;
- (void)didChooseProfilePicture:(id)arg1 fromOrigin:(long long)arg2 withMediaMetadata:(id)arg3;
- (void)facebookAuthDidFinishWithAccessToken:(id)arg1;
- (void)imageTicketDidFail;
- (void)imageTicketDidFinishWithData:(id)arg1;
- (void)imageTicketDidFinishWithURL:(id)arg1;
- (void)importProfilePictureFromCamera;
- (void)importProfilePictureFromFacebook;
- (void)importProfilePictureFromLibrary;
- (void)importProfilePictureFromTwitter;
- (id)initWithViewController:(id)arg1 userSession:(id)arg2;
- (void)loadFacebookProfilePictureFromAccessToken:(id)arg1;
- (void)loadFacebookProfilePictureWithFacebookUserInfo:(id)arg1;
- (void)loadTwitterProfilePicture;
- (void)onTwitterLoginCompleted:(id)arg1;
- (void)openCameraWithMode:(long long)arg1;
- (void)openCameraWithMode:(long long)arg1 entryPoint:(long long)arg2;
- (void)presentCamera;
- (void)presentFacebookLogin;
- (void)presentLoggedOutFacebookLogin;
- (void)presentPhotoLibrary;
- (void)presentTwitterLogin;
- (void)removeTwitterObserver;
@property(nonatomic) _Bool showLocalOptionsOnly; // @synthesize showLocalOptionsOnly=_showLocalOptionsOnly;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) long long waterfallEntryPointForActionSheet; // @synthesize waterfallEntryPointForActionSheet=_waterfallEntryPointForActionSheet;
- (void)showActionSheetWithMode:(long long)arg1 waterfallEntryPoint:(long long)arg2;
- (void)twitterLoginCancelled;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

