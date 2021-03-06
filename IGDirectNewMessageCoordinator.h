//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGDirectMainInboxAnalyticsLogger, IGNavigationController, IGUserSession;

@interface IGDirectNewMessageCoordinator : NSObject
{
    IGNavigationController *_navigationController;
    IGDirectMainInboxAnalyticsLogger *_analyticsLogger;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak IGDirectMainInboxAnalyticsLogger *analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
- (void)displayNewMessageActionSheetFromSourceView:(id)arg1;
- (void)handleSendMediaMessage;
- (void)handleSendTextMessage;
- (id)initWithNavigationController:(id)arg1 analyticsLogger:(id)arg2 userSession:(id)arg3;
@property(readonly, nonatomic) __weak IGNavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void)pushComposerThreadViewController;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;

@end

