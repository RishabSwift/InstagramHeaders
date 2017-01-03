//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGQuickCamInputLibraryAsset.h"
#import "IGQuickCamInputVideoAsset.h"

@class NSString, PHAsset, UIImage;

@interface IGQuickCamInputLibraryVideoAsset : NSObject <IGQuickCamInputLibraryAsset, IGQuickCamInputVideoAsset>
{
    PHAsset *_phAsset;
    long long _devicePosition;
    long long _flashMode;
    UIImage *_previewImage;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long devicePosition; // @synthesize devicePosition=_devicePosition;
@property(readonly, nonatomic) long long flashMode; // @synthesize flashMode=_flashMode;
- (id)initWithPHAsset:(id)arg1 devicePosition:(long long)arg2 flashMode:(long long)arg3;
@property(readonly, nonatomic) _Bool isFromLibrary;
@property(readonly, nonatomic) PHAsset *phAsset; // @synthesize phAsset=_phAsset;
@property(retain, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

