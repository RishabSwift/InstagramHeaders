//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

@interface IGMediaThumbnailSelectableOverlay : UIView
{
    UIImageView *_check;
    UIImageView *_placeholder;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *check; // @synthesize check=_check;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UIImageView *placeholder; // @synthesize placeholder=_placeholder;
- (void)setShowsCheckmark:(_Bool)arg1;

@end
