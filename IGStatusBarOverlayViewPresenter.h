//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGStatusBarProxyViewController, UIView, UIWindow;

@interface IGStatusBarOverlayViewPresenter : NSObject
{
    _Bool _showing;
    _Bool _hiding;
    UIWindow *_overlayWindow;
    UIView *_contentView;
    IGStatusBarProxyViewController *_statusBarViewController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)hideWithCompletion:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool hiding; // @synthesize hiding=_hiding;
- (id)initWithContentView:(id)arg1;
@property(readonly, nonatomic) UIWindow *overlayWindow; // @synthesize overlayWindow=_overlayWindow;
@property(nonatomic) _Bool showing; // @synthesize showing=_showing;
@property(retain, nonatomic) IGStatusBarProxyViewController *statusBarViewController; // @synthesize statusBarViewController=_statusBarViewController;
- (void)showWithCompletion:(CDUnknownBlockType)arg1;

@end

