//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, UIView;

@interface IGActionSheetConfiguration : NSObject
{
    UIView *_headerView;
    NSArray *_buttons;
}

+ (void)configureActionSheetShareOptionsWithButtons:(id)arg1;
+ (id)standardAdConfigurationForFeedItem:(id)arg1 allowHidingSponsoredPost:(_Bool)arg2;
+ (id)standardConfigurationForFeedItem:(id)arg1 allowHidingPost:(_Bool)arg2 entryPoint:(unsigned long long)arg3 currentUser:(id)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(readonly, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
- (id)initWithHeaderView:(id)arg1 buttons:(id)arg2;

@end

