//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGAutocompleteAlmostAbstractDataSource.h"

@class NSArray, NSString;

@interface IGAutocompleteAbstractDataSource : IGAutocompleteAlmostAbstractDataSource
{
    _Bool _shouldReverseSort;
    long long _defaultSet;
    NSString *_query;
    NSArray *_filteredStrings;
}

- (void).cxx_destruct;
@property(nonatomic) long long defaultSet; // @synthesize defaultSet=_defaultSet;
@property(retain, nonatomic) NSArray *filteredStrings; // @synthesize filteredStrings=_filteredStrings;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(nonatomic) _Bool shouldReverseSort; // @synthesize shouldReverseSort=_shouldReverseSort;
- (long long)sortedOrder:(long long)arg1;

@end
