//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGUserSession, NSMutableArray, UIButton, UIImageView, UILabel;

@interface IGFeedToggleView : UIView
{
    UIImageView *_usertagsCountBubble;
    UILabel *_usertagsCountLabel;
    UIButton *_usertagsButton;
    _Bool _isProfileMode;
    id <IGFeedToggleViewDelegate> _delegate;
    UIButton *_savedMediaButton;
    IGUserSession *_userSession;
    NSMutableArray *_buttons;
    long long _userTagCount;
    UIView *_topSeparator;
    UIView *_bottomSeparator;
}

+ (long long)height;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bottomSeparator; // @synthesize bottomSeparator=_bottomSeparator;
- (struct CGRect)buttonFrameForType:(long long)arg1;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
- (void)dealloc;
@property(nonatomic) __weak id <IGFeedToggleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1 buttons:(long long)arg2 isSelfProfile:(_Bool)arg3 userSession:(id)arg4;
- (void)layoutSubviews;
@property(readonly, nonatomic) UIButton *savedMediaButton; // @synthesize savedMediaButton=_savedMediaButton;
- (void)selectButton:(long long)arg1;
- (void)setButtonEnabled:(_Bool)arg1 forButton:(long long)arg2;
@property(retain, nonatomic) UIView *topSeparator; // @synthesize topSeparator=_topSeparator;
@property(nonatomic) long long userTagCount; // @synthesize userTagCount=_userTagCount;
- (void)switchedMode:(id)arg1;
- (void)updateUsertagCount;
- (void)updateUsertagLayout;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;

@end

