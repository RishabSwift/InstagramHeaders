//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSIndexSet, NSString, NSURL;

@interface IGExploreViewModel : NSObject <NSCopying>
{
    _Bool _restricted;
    _Bool _following;
    _Bool _verified;
    NSString *_title;
    NSString *_subtitle;
    NSString *_byline;
    NSArray *_thumbnailURLs;
    NSIndexSet *_thumbnailVideoIndexes;
    NSURL *_imageURL;
    unsigned long long _action;
    unsigned long long _style;
    long long _maxThumbnails;
    long long _thumbnailsPerRow;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long action; // @synthesize action=_action;
- (void)applyMediaBundles:(id)arg1 thumbnailSize:(struct CGSize)arg2;
@property(copy, nonatomic) NSString *byline; // @synthesize byline=_byline;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
- (id)init;
- (id)initWithFeaturedUserInfo:(id)arg1 width:(double)arg2 thumbnailsPerRow:(unsigned long long)arg3 showsSocialContext:(_Bool)arg4;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic, getter=isFollowing) _Bool following; // @synthesize following=_following;
@property(nonatomic, getter=isRestricted) _Bool restricted; // @synthesize restricted=_restricted;
@property(nonatomic, getter=isVerified) _Bool verified; // @synthesize verified=_verified;
@property(nonatomic) long long maxThumbnails; // @synthesize maxThumbnails=_maxThumbnails;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSArray *thumbnailURLs; // @synthesize thumbnailURLs=_thumbnailURLs;
@property(copy, nonatomic) NSIndexSet *thumbnailVideoIndexes; // @synthesize thumbnailVideoIndexes=_thumbnailVideoIndexes;
@property(nonatomic) long long thumbnailsPerRow; // @synthesize thumbnailsPerRow=_thumbnailsPerRow;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end
