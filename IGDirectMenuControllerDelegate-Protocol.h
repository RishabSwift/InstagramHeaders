//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGDirectThread, UIView, UIViewController;

@protocol IGDirectMenuControllerDelegate <NSObject>
- (UIViewController *)containingController;
- (UIView *)containingView;
- (void)performDeleteForContent:(id <IGDirectMessageProtocol>)arg1;
- (IGDirectThread *)targetThread;
@end
