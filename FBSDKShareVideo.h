//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSDKCopying.h"
#import "NSSecureCoding.h"

@class FBSDKSharePhoto, NSString, NSURL;

@interface FBSDKShareVideo : NSObject <FBSDKCopying, NSSecureCoding>
{
    NSURL *_videoURL;
    FBSDKSharePhoto *_previewPhoto;
}

+ (_Bool)supportsSecureCoding;
+ (id)videoWithVideoURL:(id)arg1;
+ (id)videoWithVideoURL:(id)arg1 previewPhoto:(id)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToShareVideo:(id)arg1;
@property(copy, nonatomic) FBSDKSharePhoto *previewPhoto; // @synthesize previewPhoto=_previewPhoto;
@property(copy, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

