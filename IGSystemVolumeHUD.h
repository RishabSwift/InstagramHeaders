//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPVolumeView;

@interface IGSystemVolumeHUD : NSObject
{
    _Bool _enabled;
    MPVolumeView *_mediaPlayerVolumeView;
}

+ (id)sharedHUD;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)dealloc;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) MPVolumeView *mediaPlayerVolumeView; // @synthesize mediaPlayerVolumeView=_mediaPlayerVolumeView;
- (void)showSystemVolumeHUD:(_Bool)arg1;

@end

