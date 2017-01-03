//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSString, UIImage;

@interface IGStoryCameraPermissionButton : UIButton
{
    NSString *_enabledText;
    NSString *_disabledText;
    UIImage *_checkmarkImage;
}

+ (id)disabledColor;
+ (id)enabledColor;
+ (id)highlightedColor;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIImage *checkmarkImage; // @synthesize checkmarkImage=_checkmarkImage;
@property(readonly, copy, nonatomic) NSString *disabledText; // @synthesize disabledText=_disabledText;
@property(readonly, copy, nonatomic) NSString *enabledText; // @synthesize enabledText=_enabledText;
- (id)initWithEnabledText:(id)arg1 disabledText:(id)arg2;
- (void)setEnabled:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateTextAndIconAnimated:(_Bool)arg1;

@end
