//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSDKSharingContent.h"

@class FBSDKHashtag, FBSDKSharePhoto, FBSDKShareVideo, NSArray, NSString, NSURL;

@interface FBSDKShareVideoContent : NSObject <FBSDKSharingContent>
{
    NSURL *_contentURL;
    FBSDKHashtag *_hashtag;
    NSArray *_peopleIDs;
    NSString *_placeID;
    NSString *_ref;
    FBSDKSharePhoto *_previewPhoto;
    FBSDKShareVideo *_video;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) FBSDKHashtag *hashtag; // @synthesize hashtag=_hashtag;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToShareVideoContent:(id)arg1;
@property(copy, nonatomic) NSArray *peopleIDs; // @synthesize peopleIDs=_peopleIDs;
@property(copy, nonatomic) NSString *placeID; // @synthesize placeID=_placeID;
@property(copy, nonatomic) FBSDKSharePhoto *previewPhoto; // @synthesize previewPhoto=_previewPhoto;
@property(copy, nonatomic) NSString *ref; // @synthesize ref=_ref;
@property(copy, nonatomic) FBSDKShareVideo *video; // @synthesize video=_video;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

