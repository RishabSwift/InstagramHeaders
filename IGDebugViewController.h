//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class IGDebugBar;

@interface IGDebugViewController : UIViewController
{
    IGDebugBar *_debugBar;
}

- (void).cxx_destruct;
- (_Bool)canBecomeKeyWindow;
@property(readonly, nonatomic) IGDebugBar *debugBar; // @synthesize debugBar=_debugBar;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (_Bool)shouldHandleTouchAtPoint:(struct CGPoint)arg1;
- (void)viewDidLayoutSubviews;

@end

