//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGGroupedTableViewCell.h"

@class IGMediaThumbnailView, NSURL;

@interface IGAdsManagerPreviewAdCell : IGGroupedTableViewCell
{
    IGMediaThumbnailView *_thumbnailView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *imageURL;
- (id)initWithReuseIdentifier:(id)arg1;
- (struct CGRect)layoutForThumbnail;
- (void)layoutSubviews;
- (void)setUp;
@property(readonly, nonatomic) IGMediaThumbnailView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;

@end

