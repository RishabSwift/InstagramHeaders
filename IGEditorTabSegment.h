//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSString, UILabel;

@interface IGEditorTabSegment : UIControl
{
    UILabel *_label;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)setHighlighted:(_Bool)arg1;
@property(copy, nonatomic) NSString *text;
- (void)updateLabelAttributes;
- (id)viewForNux;

@end

