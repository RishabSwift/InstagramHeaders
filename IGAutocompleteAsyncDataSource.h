//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGAutocompleteDataSource.h"

@interface IGAutocompleteAsyncDataSource : IGAutocompleteDataSource
{
    id <IGAutocompleteAsyncDataSourceDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGAutocompleteAsyncDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isSearching;

@end

