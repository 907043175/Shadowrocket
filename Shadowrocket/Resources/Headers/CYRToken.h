//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface CYRToken : NSObject
{
    NSString *_name;
    NSString *_expression;
    NSDictionary *_attributes;
}

+ (id)tokenWithName:(id)arg1 expression:(id)arg2 attributes:(id)arg3;
@property(retain, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) NSString *expression; // @synthesize expression=_expression;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end
