//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSTextAttachment, NSURL, UITextView;

@protocol IGTextViewListener <NSObject>
- (void)textView:(UITextView *)arg1 willChangeTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
- (void)textView:(UITextView *)arg1 willInteractWithTextAttachment:(NSTextAttachment *)arg2 inRange:(struct _NSRange)arg3;
- (void)textView:(UITextView *)arg1 willInteractWithURL:(NSURL *)arg2 inRange:(struct _NSRange)arg3;
- (void)textViewDidBeginEditing:(UITextView *)arg1;
- (void)textViewDidChange:(UITextView *)arg1;
- (void)textViewDidChangeSelection:(UITextView *)arg1;
- (void)textViewDidEndEditing:(UITextView *)arg1;
- (void)textViewWillBeginEditing:(UITextView *)arg1;
- (void)textViewWillEndEditing:(UITextView *)arg1;
@end

