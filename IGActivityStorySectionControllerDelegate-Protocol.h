//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGActivityStorySectionController, IGAnalyticsMetadata, IGListSectionController, IGNewsStory;

@protocol IGActivityStorySectionControllerDelegate <NSObject>
- (IGAnalyticsMetadata *)analyticsMetadataForActivityStorySectionController:(IGActivityStorySectionController *)arg1;
- (void)webViewControllerDismissedForStorySectionController:(IGListSectionController *)arg1 forStory:(IGNewsStory *)arg2;
@end
