//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "UIWebViewDelegate.h"

@class IGUserSession, NSString, UIWebView;

@interface IGMixiAuthViewController : IGViewController <UIWebViewDelegate>
{
    IGUserSession *_userSession;
    UIWebView *_webView;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (_Bool)automaticallyAdjustsScrollViewInsets;
- (id)codeFromURL:(id)arg1;
- (void)dealloc;
- (_Bool)errorExistsInURL:(id)arg1;
- (id)initWithUserSession:(id)arg1;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
- (_Bool)stringContainsCallbackURL:(id)arg1;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

