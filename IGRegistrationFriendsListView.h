//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGFindUsersView, IGFollowAllButton, IGUserSession, NSString, UIActivityIndicatorView, UIButton, UILabel;

@interface IGRegistrationFriendsListView : UIView
{
    _Bool _shouldShowFollowAllButton;
    _Bool _shouldShowFollowTopAccounts;
    _Bool _shouldShowCheckmark;
    IGUserSession *_userSession;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    IGFollowAllButton *_followAllButton;
    NSString *_titleText;
    IGFindUsersView *_usersListView;
    UIActivityIndicatorView *_spinner;
    id <IGRaindropAnalyticsDelegate> _analyticsDelegate;
    UIButton *_clearButton;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGRaindropAnalyticsDelegate> analyticsDelegate; // @synthesize analyticsDelegate=_analyticsDelegate;
@property(retain, nonatomic) UIButton *clearButton; // @synthesize clearButton=_clearButton;
@property(retain, nonatomic) IGFollowAllButton *followAllButton; // @synthesize followAllButton=_followAllButton;
- (id)initWithFrame:(struct CGRect)arg1 analyticsDelegate:(id)arg2 userSession:(id)arg3 shouldShowFollowAllButton:(_Bool)arg4 shouldShowFollowTopAccounts:(_Bool)arg5 shouldShowCheckmark:(_Bool)arg6;
- (void)layoutSubviews;
@property(nonatomic) _Bool shouldShowCheckmark; // @synthesize shouldShowCheckmark=_shouldShowCheckmark;
@property(nonatomic) _Bool shouldShowFollowAllButton; // @synthesize shouldShowFollowAllButton=_shouldShowFollowAllButton;
@property(nonatomic) _Bool shouldShowFollowTopAccounts; // @synthesize shouldShowFollowTopAccounts=_shouldShowFollowTopAccounts;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) IGFindUsersView *usersListView; // @synthesize usersListView=_usersListView;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;

@end

