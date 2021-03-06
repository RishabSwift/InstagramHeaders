//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class IGDirectShareRecipient, IGUserSession, UIButton, UINavigationController, UIToolbar;

@interface IGDirectDebuggingViewController : UIViewController
{
    _Bool _isSendingMessages;
    IGUserSession *_userSession;
    UIToolbar *_toolbar;
    UIButton *_quickMessageButton;
    UIButton *_realtimeToggleButton;
    IGDirectShareRecipient *_recipient;
    UINavigationController *_navigationController;
    long long _messageCount;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)didTapMessageButton:(id)arg1;
- (void)didTapPushRealtimeVC:(id)arg1;
- (void)didTapRealtimeToggle:(id)arg1;
- (id)initWithRecipient:(id)arg1 navigationController:(id)arg2 userSession:(id)arg3;
@property(nonatomic) _Bool isSendingMessages; // @synthesize isSendingMessages=_isSendingMessages;
@property(nonatomic) long long messageCount; // @synthesize messageCount=_messageCount;
@property(readonly, nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(readonly, nonatomic) UIButton *quickMessageButton; // @synthesize quickMessageButton=_quickMessageButton;
@property(readonly, nonatomic) UIButton *realtimeToggleButton; // @synthesize realtimeToggleButton=_realtimeToggleButton;
@property(readonly, nonatomic) IGDirectShareRecipient *recipient; // @synthesize recipient=_recipient;
- (void)sendMessage:(id)arg1;
- (void)sendMessages;
- (void)setupBottomSeparator;
- (void)setupToolbar;
@property(readonly, nonatomic) UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
- (void)updateMessageButtonTitle;
- (void)updateRealtimeButtonTitle;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;

@end

