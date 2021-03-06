//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor, UIVisualEffect;

@interface IGStatusBarVolumeViewConfiguration : NSObject
{
    UIColor *_trackTintColor;
    UIColor *_trackValueTintColor;
    UIColor *_backgroundColor;
    double _backgroundAlpha;
    UIVisualEffect *_backgroundEffect;
    double _volumeViewHeight;
}

+ (id)darkBackground;
+ (id)defaultConfiguration;
+ (id)storyCameraConfiguration;
+ (id)storyViewerConfiguration;
+ (id)translucentBackground;
+ (id)watchAndBrowseConfiguration;
- (void).cxx_destruct;
@property(nonatomic) double backgroundAlpha; // @synthesize backgroundAlpha=_backgroundAlpha;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIVisualEffect *backgroundEffect; // @synthesize backgroundEffect=_backgroundEffect;
- (id)init;
@property(retain, nonatomic) UIColor *trackTintColor; // @synthesize trackTintColor=_trackTintColor;
@property(retain, nonatomic) UIColor *trackValueTintColor; // @synthesize trackValueTintColor=_trackValueTintColor;
@property(nonatomic) double volumeViewHeight; // @synthesize volumeViewHeight=_volumeViewHeight;

@end

