//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPTLayer.h"

@class CPTAxis;

@interface CPTGridLines : CPTLayer
{
    _Bool major;
    CPTAxis *axis;
}

- (void).cxx_destruct;
@property(nonatomic) __weak CPTAxis *axis; // @synthesize axis;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithLayer:(id)arg1;
@property(nonatomic) _Bool major; // @synthesize major;
- (void)renderAsVectorInContext:(struct CGContext *)arg1;

@end
