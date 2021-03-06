//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class IGDeviceBasedLoginAccount, IGImageView, UIButton;

@interface IGOneTapLoginTableViewCell : UITableViewCell
{
    _Bool _isEditing;
    UIButton *_loginButton;
    UIButton *_removeButton;
    IGDeviceBasedLoginAccount *_account;
    IGImageView *_profilePictureView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGDeviceBasedLoginAccount *account; // @synthesize account=_account;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
- (void)layoutSubviews;
@property(retain, nonatomic) UIButton *loginButton; // @synthesize loginButton=_loginButton;
- (void)prepareForReuse;
@property(retain, nonatomic) IGImageView *profilePictureView; // @synthesize profilePictureView=_profilePictureView;
@property(retain, nonatomic) UIButton *removeButton; // @synthesize removeButton=_removeButton;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setOneTapLoginAccount:(id)arg1;

@end

