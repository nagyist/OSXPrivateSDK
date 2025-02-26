/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Parsec/PRSCardSection.h>

#import "NSCoding-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSImage, NSString, NSURL;

@interface PRSDescriptionCardSection : PRSCardSection <NSCoding, NSSecureCoding>
{
    BOOL _title_nowrap;
    BOOL _description_expand;
    int _title_weight;
    int _description_size;
    int _description_weight;
    int _description_max_lines;
    NSString *_description_text;
    NSString *_description_expand_text;
    NSImage *_image;
    unsigned long long _imageAlign;
    NSImage *_attribution_glyph;
    NSString *_attribution_text;
    NSURL *_attribution_url;
    unsigned long long _text_align;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned long long text_align; // @synthesize text_align=_text_align;
@property(retain, nonatomic) NSURL *attribution_url; // @synthesize attribution_url=_attribution_url;
@property(retain, nonatomic) NSString *attribution_text; // @synthesize attribution_text=_attribution_text;
@property(retain, nonatomic) NSImage *attribution_glyph; // @synthesize attribution_glyph=_attribution_glyph;
@property(readonly, nonatomic) unsigned long long imageAlign; // @synthesize imageAlign=_imageAlign;
@property(readonly, nonatomic) NSImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) int description_max_lines; // @synthesize description_max_lines=_description_max_lines;
@property(readonly, nonatomic) NSString *description_expand_text; // @synthesize description_expand_text=_description_expand_text;
@property(readonly, nonatomic) BOOL description_expand; // @synthesize description_expand=_description_expand;
@property(readonly, nonatomic) int description_weight; // @synthesize description_weight=_description_weight;
@property(readonly, nonatomic) int description_size; // @synthesize description_size=_description_size;
@property(readonly, nonatomic) NSString *description_text; // @synthesize description_text=_description_text;
@property(readonly, nonatomic) int title_weight; // @synthesize title_weight=_title_weight;
@property BOOL title_nowrap; // @synthesize title_nowrap=_title_nowrap;
- (void).cxx_destruct;
- (long long)type;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 dict:(id)arg2;
- (id)initWithTitle:(id)arg1 nowrap:(BOOL)arg2 weight:(int)arg3 description:(id)arg4 weight:(int)arg5 size:(int)arg6 max_lines:(int)arg7 image:(id)arg8 alignment:(unsigned long long)arg9;

@end

