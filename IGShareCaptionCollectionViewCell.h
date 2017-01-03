//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGCollectionViewCell.h"

#import "IGAutocompleteControllerTextInput.h"
#import "IGGrowingTextViewDelegate.h"

@class IGGrowingTextView, IGProfilePictureImageView, IGUserSession, NSString;

@interface IGShareCaptionCollectionViewCell : IGCollectionViewCell <IGGrowingTextViewDelegate, IGAutocompleteControllerTextInput>
{
    _Bool _showProfilePhoto;
    IGUserSession *_userSession;
    id <IGShareCaptionCollectionViewCellDelegate> _delegate;
    IGGrowingTextView *_captionTextView;
    IGProfilePictureImageView *_profilePictureImageView;
}

- (void).cxx_destruct;
- (_Bool)becomeFirstResponder;
- (id)beginningOfDocument;
@property(readonly, nonatomic) IGGrowingTextView *captionTextView; // @synthesize captionTextView=_captionTextView;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
- (id)defaultPlaceholderText;
@property(nonatomic) __weak id <IGShareCaptionCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)growingTextView:(id)arg1 didChangeHeight:(double)arg2;
- (_Bool)growingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)growingTextView:(id)arg1 willChangeHeight:(double)arg2;
- (void)growingTextViewDidBeginEditing:(id)arg1;
- (void)growingTextViewDidChange:(id)arg1;
- (void)growingTextViewDidEndEditing:(id)arg1;
- (_Bool)growingTextViewShouldReturn:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)inputTextView;
- (_Bool)isCaptionPlaceholder;
- (_Bool)isFirstResponder;
- (void)layoutSubviews;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
@property(readonly, nonatomic) IGProfilePictureImageView *profilePictureImageView; // @synthesize profilePictureImageView=_profilePictureImageView;
- (_Bool)resignFirstResponder;
- (struct _NSRange)selectedRange;
- (void)setSelectedTextRange:(id)arg1;
@property(nonatomic) _Bool showProfilePhoto; // @synthesize showProfilePhoto=_showProfilePhoto;
- (void)setText:(id)arg1;
@property(retain, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, copy, nonatomic) NSString *text;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;

// Remaining properties
@property(nonatomic) long long autocapitalizationType;
@property(nonatomic) long long autocorrectionType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long keyboardType;
@property(nonatomic) long long returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;

@end

