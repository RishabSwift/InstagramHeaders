//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGVideoCaptionViewType.h"

@class NSString, UILabel;

@interface IGVideoCaptionView : UIView <IGVideoCaptionViewType>
{
    UILabel *_titleLabel;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *caption;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setupTitleLabel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

