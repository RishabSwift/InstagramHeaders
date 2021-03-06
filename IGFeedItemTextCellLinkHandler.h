//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGCustomAlertViewControllerDelegate.h"
#import "IGFeedItemTextCellDelegate.h"
#import "IGFeedItemTextCellTouchHandlerProtocol.h"

@class IGAppInstallationsHelper, IGUserSession, NSString;

@interface IGFeedItemTextCellLinkHandler : NSObject <IGCustomAlertViewControllerDelegate, IGFeedItemTextCellDelegate, IGFeedItemTextCellTouchHandlerProtocol>
{
    id <IGFeedItemTextCellLinkHandlerDelegate> _delegate;
    id <IGFeedItemTextCellDataSourceProtocol> _dataSource;
    IGUserSession *_userSession;
    id <IGFeedItemLoggingProviderDelegate> _loggingDelegate;
    IGAppInstallationsHelper *_appInstallationsHelper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGAppInstallationsHelper *appInstallationsHelper; // @synthesize appInstallationsHelper=_appInstallationsHelper;
- (void)boomerangAttributionTapped;
- (void)customAlertViewDidCancel:(id)arg1;
- (void)customAlertViewDidConfirm:(id)arg1;
@property(nonatomic) __weak id <IGFeedItemTextCellDataSourceProtocol> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <IGFeedItemTextCellLinkHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)feedItemTextCell:(id)arg1 coreTextView:(id)arg2 didLongTapOnString:(id)arg3 URL:(id)arg4;
- (void)feedItemTextCell:(id)arg1 coreTextView:(id)arg2 didTapOnString:(id)arg3 URL:(id)arg4;
- (_Bool)feedItemTextCell:(id)arg1 willHandleTouch:(id)arg2;
- (void)handleTapOnString:(id)arg1 URL:(id)arg2 feedItemTextCell:(id)arg3;
- (id)initWithUserSession:(id)arg1 loggingDelegate:(id)arg2;
- (_Bool)isLongTapAllowedForCellType:(long long)arg1;
@property(nonatomic) __weak id <IGFeedItemLoggingProviderDelegate> loggingDelegate; // @synthesize loggingDelegate=_loggingDelegate;
@property(retain, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)showBoomerangAppInstallAlertViewPopover;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

