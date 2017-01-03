//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPTBorderedLayer.h"

@class CPTTextStyle, NSAttributedString, NSString;

@interface CPTTextLayer : CPTBorderedLayer
{
    _Bool inTextUpdate;
    NSString *text;
    CPTTextStyle *textStyle;
    NSAttributedString *attributedText;
    struct CGSize maximumSize;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic) _Bool inTextUpdate; // @synthesize inTextUpdate;
- (id)initWithAttributedText:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithLayer:(id)arg1;
- (id)initWithText:(id)arg1;
- (id)initWithText:(id)arg1 style:(id)arg2;
@property(nonatomic) struct CGSize maximumSize; // @synthesize maximumSize;
- (void)renderAsVectorInContext:(struct CGContext *)arg1;
- (void)setPaddingBottom:(double)arg1;
- (void)setPaddingLeft:(double)arg1;
- (void)setPaddingRight:(double)arg1;
- (void)setPaddingTop:(double)arg1;
- (void)setShadow:(id)arg1;
@property(copy, nonatomic) NSString *text; // @synthesize text;
@property(retain, nonatomic) CPTTextStyle *textStyle; // @synthesize textStyle;
- (struct CGSize)sizeThatFits;
- (void)sizeToFit;

@end
