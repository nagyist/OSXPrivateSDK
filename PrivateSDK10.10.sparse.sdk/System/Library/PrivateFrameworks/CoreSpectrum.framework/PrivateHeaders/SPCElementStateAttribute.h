/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreSpectrum/SPCObject.h>

#import "NSCopying-Protocol.h"

@interface SPCElementStateAttribute : SPCObject <NSCopying>
{
    long long _renditionKeyInteger;
}

+ (id)attributeWithName:(id)arg1;
+ (id)attributeTitleForCUIThemeAttribute:(int)arg1;
+ (id)CUIDimension1AttributeTitle;
+ (id)CUIScaleAttributeTitle;
+ (id)CUIValueAttributeTitle;
+ (id)CUIDirectionAttributeTitle;
+ (id)CUISizeAttributeTitle;
+ (id)CUIPresentationStateAttributeTitle;
+ (id)CUIStateAttributeTitle;
@property long long renditionKeyInteger; // @synthesize renditionKeyInteger=_renditionKeyInteger;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

