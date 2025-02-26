/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"
#import "XMProfile-Protocol.h"

@class NSDictionary, NSImage, NSMutableArray, NSNumber, NSString;

@interface XMComponent : NSObject <XMProfile, NSSecureCoding, NSCopying>
{
    NSNumber *_id;
    NSString *_type;
    NSString *_name;
    NSNumber *_size;
    NSImage *_image;
    NSDictionary *_attributes;
    NSMutableArray *_subcomponents;
    BOOL _isContainer;
    NSString *_localizedDescription;
    NSMutableArray *_copiedObjects;
}

+ (BOOL)supportsSecureCoding;
+ (id)profileWithDictionary:(id)arg1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToXMComponent:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)image;
- (id)attributes;
- (BOOL)sizeDeferred;
- (void)setSize:(id)arg1;
- (id)size;
- (id)identifier;
- (id)type;
- (id)name;
- (id)_logDescription;
- (id)localizedDescription;
- (id)sanitizedDictionaryRepresentation;
- (id)dictionaryRepresentation;
- (id)_dictionaryRepresentationSanitized:(BOOL)arg1;
- (id)description;
- (id)copiedObjects;
- (void)addCopiedObject:(id)arg1;
- (void)setIsContainer:(BOOL)arg1;
- (BOOL)isContainer;
- (void)addSubcomponent:(id)arg1;
- (id)allSubcomponents;
- (id)subcomponents;
- (id)initWithType:(id)arg1 identifier:(id)arg2 name:(id)arg3 size:(id)arg4 image:(id)arg5 attributes:(id)arg6;

@end

