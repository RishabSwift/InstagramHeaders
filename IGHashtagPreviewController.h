//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGFeedNetworkSourceDelegate.h"
#import "IGPreviewingAction.h"

@class IGFeedNetworkSource, IGHashtagModel, IGHashtagPreviewView, IGPreviewEventManager, IGUserSession, NSArray, NSString, UINavigationController;

@interface IGHashtagPreviewController : IGViewController <IGFeedNetworkSourceDelegate, IGPreviewingAction>
{
    double _previewWidth;
    UINavigationController *_navigationControllerForPushing;
    IGPreviewEventManager *_logger;
    IGUserSession *_userSession;
    IGHashtagModel *_hashtag;
    IGFeedNetworkSource *_feedSource;
    NSArray *_previewItems;
    IGHashtagPreviewView *_hashtagView;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (void)dealloc;
- (_Bool)enableNavState;
- (void)feedNetworkSource:(id)arg1 didFailToLoadForFetchAction:(long long)arg2;
- (void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 forFetchAction:(long long)arg3;
@property(retain, nonatomic) IGFeedNetworkSource *feedSource; // @synthesize feedSource=_feedSource;
@property(retain, nonatomic) IGHashtagModel *hashtag; // @synthesize hashtag=_hashtag;
- (void)hashtagFetchedAdditionalInfo:(id)arg1;
@property(retain, nonatomic) IGHashtagPreviewView *hashtagView; // @synthesize hashtagView=_hashtagView;
- (id)initWithUserSession:(id)arg1 hashtag:(id)arg2;
@property(retain, nonatomic) IGPreviewEventManager *logger; // @synthesize logger=_logger;
@property(nonatomic) __weak UINavigationController *navigationControllerForPushing; // @synthesize navigationControllerForPushing=_navigationControllerForPushing;
- (id)previewActionBarItems;
- (id)previewActionItems;
@property(retain, nonatomic) NSArray *previewItems; // @synthesize previewItems=_previewItems;
@property(nonatomic) double previewWidth; // @synthesize previewWidth=_previewWidth;
- (void)showDirectShare;
- (void)updateHashtagView;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
