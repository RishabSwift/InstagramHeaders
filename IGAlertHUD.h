//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CAAnimationDelegate.h"

@class NSDate, NSString, UIActivityIndicatorView, UILabel;

@interface IGAlertHUD : UIView <CAAnimationDelegate>
{
    UILabel *_textLabel;
    NSDate *_suppressAlertsUntil;
    UIActivityIndicatorView *_spinner;
}

+ (id)sharedHUD;
- (void).cxx_destruct;
- (_Bool)canDisplay;
- (void)dealloc;
- (void)doShowWithText:(id)arg1 inView:(id)arg2 showsProgressIndicator:(_Bool)arg3 removeAfterDelay:(_Bool)arg4 animated:(_Bool)arg5 force:(_Bool)arg6;
- (void)hide;
- (void)hideAfterDelay:(double)arg1 animated:(_Bool)arg2;
- (void)hideAfterShowingText:(id)arg1;
- (void)hideAfterShowingText:(id)arg1 animated:(_Bool)arg2;
- (void)hideAnimated:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)onAppResumed:(id)arg1;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
- (void)showInView:(id)arg1 animated:(_Bool)arg2;
- (void)showWithProgressIndicatorAndText:(id)arg1 inView:(id)arg2;
- (void)showWithProgressIndicatorInView:(id)arg1;
- (void)showWithProgressIndicatorInView:(id)arg1 animated:(_Bool)arg2;
- (void)showWithText:(id)arg1 inView:(id)arg2 removeAfterDelay:(_Bool)arg3;
- (void)showWithText:(id)arg1 inView:(id)arg2 removeAfterDelay:(_Bool)arg3 animated:(_Bool)arg4;
- (void)sizeToFitContentWidth:(double)arg1 contentHeight:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

