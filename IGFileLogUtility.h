//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFMailComposeViewControllerDelegate.h"

@class NSString, UIViewController;

@interface IGFileLogUtility : NSObject <MFMailComposeViewControllerDelegate>
{
    UIViewController *_vcForMailComposer;
}

+ (id)sharedFileLogUtility;
- (void).cxx_destruct;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)presentMailComposerForVC:(id)arg1 context:(long long)arg2 userSession:(id)arg3;
@property(nonatomic) __weak UIViewController *vcForMailComposer; // @synthesize vcForMailComposer=_vcForMailComposer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

