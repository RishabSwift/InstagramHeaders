//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface IGSQLiteColumn : NSObject
{
    NSString *_columnName;
    NSString *_columnTypeString;
    NSString *_propertyName;
    NSString *_propertyClassName;
    NSArray *_applicableClasses;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *applicableClasses; // @synthesize applicableClasses=_applicableClasses;
- (id)classArrayFromClassNameArray:(id)arg1;
- (_Bool)columnIsApplicableForClass:(Class)arg1;
@property(readonly, copy, nonatomic) NSString *columnName; // @synthesize columnName=_columnName;
@property(readonly, nonatomic) long long columnType;
@property(readonly, copy, nonatomic) NSString *columnTypeString; // @synthesize columnTypeString=_columnTypeString;
- (id)initWithColumnName:(id)arg1 columnTypeString:(id)arg2 propertyName:(id)arg3 propertyClassName:(id)arg4 applicableClassNames:(id)arg5;
@property(readonly, copy, nonatomic) NSString *propertyClassName; // @synthesize propertyClassName=_propertyClassName;
@property(readonly, copy, nonatomic) NSString *propertyName; // @synthesize propertyName=_propertyName;

@end
