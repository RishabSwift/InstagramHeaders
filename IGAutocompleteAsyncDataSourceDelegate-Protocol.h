//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol IGAutocompleteAsyncDataSourceDelegate <NSObject>
- (void)autocompleteDataSourceDidFailLoad:(id <IGAutocompleteNetworkDataSourceAnalytics>)arg1;
- (void)autocompleteDataSourceDidFinishLoading:(id <IGAutocompleteNetworkDataSourceAnalytics>)arg1;
- (void)autocompleteDataSourceDidStartLoading:(id <IGAutocompleteNetworkDataSourceAnalytics>)arg1;
@end
