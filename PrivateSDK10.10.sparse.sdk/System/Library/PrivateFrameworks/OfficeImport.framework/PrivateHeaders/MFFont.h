/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MFObject-Protocol.h"

@class NSString;

// Not exported
@interface MFFont : NSObject <MFObject>
{
    int m_lfHeight;
    int m_lfWidth;
    int m_lfEscapement;
    int m_lfOrientation;
    int m_lfWeight;
    _Bool m_lfItalic;
    _Bool m_lfUnderline;
    _Bool m_lfStrikeOut;
    int m_lfCharSet;
    int m_lfOutPrecision;
    unsigned char m_lfClipPrecision;
    int m_lfQuality;
    int m_pitch;
    int m_family;
    NSString *m_lfFaceName;
    NSString *m_elfFullName;
    NSString *m_elfStyle;
    unsigned int m_elfVersion;
    unsigned int m_elfStyleSize;
    unsigned int m_elfMatch;
    unsigned int m_elfVendorId;
    unsigned int m_elfCulture;
}

+ (id)fontWithStockFont:(int)arg1;
+ (id)fontWithExtendedFeatures:(int)arg1:(int)arg2:(int)arg3:(int)arg4:(int)arg5:(_Bool)arg6:(_Bool)arg7:(_Bool)arg8:(int)arg9:(int)arg10:(unsigned char)arg11:(int)arg12:(int)arg13:(int)arg14:(id)arg15:(id)arg16:(id)arg17:(unsigned int)arg18:(unsigned int)arg19:(unsigned int)arg20:(unsigned int)arg21:(unsigned int)arg22;
+ (id)fontWithFeatures:(int)arg1:(int)arg2:(int)arg3:(int)arg4:(int)arg5:(_Bool)arg6:(_Bool)arg7:(_Bool)arg8:(int)arg9:(int)arg10:(unsigned char)arg11:(int)arg12:(int)arg13:(int)arg14:(id)arg15;
- (int)selectInto:(id)arg1;
- (struct CGRect)textExtent:(id)arg1:(int)arg2:(int *)arg3:(int)arg4;
- (id)faceName;
- (BOOL)strikeout;
- (BOOL)underline;
- (int)getCharset;
- (double)fontHeight;
- (double)escapement;
- (void)dealloc;
- (id)initWithStockFont:(int)arg1;
- (id)initWithFeatures:(int)arg1:(int)arg2:(int)arg3:(int)arg4:(int)arg5:(_Bool)arg6:(_Bool)arg7:(_Bool)arg8:(int)arg9:(int)arg10:(unsigned char)arg11:(int)arg12:(int)arg13:(int)arg14:(id)arg15;
- (id)initWithAllFeatures:(int)arg1:(int)arg2:(int)arg3:(int)arg4:(int)arg5:(_Bool)arg6:(_Bool)arg7:(_Bool)arg8:(int)arg9:(int)arg10:(unsigned char)arg11:(int)arg12:(int)arg13:(int)arg14:(id)arg15:(id)arg16:(id)arg17:(unsigned int)arg18:(unsigned int)arg19:(unsigned int)arg20:(unsigned int)arg21:(unsigned int)arg22;
- (id)stringWithBytes:(const void *)arg1 length:(unsigned long long)arg2;

@end

