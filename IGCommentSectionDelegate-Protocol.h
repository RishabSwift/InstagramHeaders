//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGCommentModel, IGCommentSectionController, IGUser, NSURL;

@protocol IGCommentSectionDelegate <NSObject>
- (void)commentController:(IGCommentSectionController *)arg1 didDeleteComment:(IGCommentModel *)arg2;
- (void)commentController:(IGCommentSectionController *)arg1 didReportComment:(IGCommentModel *)arg2;
- (void)commentController:(IGCommentSectionController *)arg1 didRetryPostingComment:(IGCommentModel *)arg2;
- (void)commentController:(IGCommentSectionController *)arg1 didTapFailureStatusForComment:(IGCommentModel *)arg2;
- (void)commentController:(IGCommentSectionController *)arg1 didTapLikeCountForComment:(IGCommentModel *)arg2;
- (void)commentController:(IGCommentSectionController *)arg1 didTapReplyForUser:(IGUser *)arg2;
- (void)commentController:(IGCommentSectionController *)arg1 didTapURL:(NSURL *)arg2;
@end

