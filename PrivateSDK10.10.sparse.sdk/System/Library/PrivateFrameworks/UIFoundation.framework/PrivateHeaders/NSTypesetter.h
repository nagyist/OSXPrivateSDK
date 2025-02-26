/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSAttributedString, NSDictionary, NSLayoutManager, NSParagraphStyle, NSTextContainer;

@interface NSTypesetter : NSObject
{
    void *_reserved;
}

+ (struct CGSize)printingAdjustmentInLayoutManager:(id)arg1 forNominallySpacedGlyphRange:(struct _NSRange)arg2 packedGlyphs:(const char *)arg3 count:(unsigned long long)arg4;
+ (id)sharedSystemTypesetter;
+ (id)sharedSystemTypesetterForBehavior:(long long)arg1;
+ (long long)defaultStringDrawingTypesetterBehavior;
+ (long long)defaultTypesetterBehavior;
+ (BOOL)_usesATSTypesetter;
+ (void)initialize;
- (void)setBidiLevels:(const char *)arg1 forGlyphRange:(struct _NSRange)arg2;
- (void)setAttachmentSize:(struct CGSize)arg1 forGlyphRange:(struct _NSRange)arg2;
- (void)setLocation:(struct CGPoint)arg1 withAdvancements:(const double *)arg2 forStartOfGlyphRange:(struct _NSRange)arg3;
- (void)setDrawsOutsideLineFragment:(BOOL)arg1 forGlyphRange:(struct _NSRange)arg2;
- (void)setNotShownAttribute:(BOOL)arg1 forGlyphRange:(struct _NSRange)arg2;
- (void)deleteGlyphsInRange:(struct _NSRange)arg1;
- (void)insertGlyph:(unsigned int)arg1 atGlyphIndex:(unsigned long long)arg2 characterIndex:(unsigned long long)arg3;
- (void)substituteGlyphsInRange:(struct _NSRange)arg1 withGlyphs:(unsigned int *)arg2;
- (void)setLineFragmentRect:(struct CGRect)arg1 forGlyphRange:(struct _NSRange)arg2 usedRect:(struct CGRect)arg3 baselineOffset:(double)arg4;
- (void)getLineFragmentRect:(struct CGRect *)arg1 usedRect:(struct CGRect *)arg2 remainingRect:(struct CGRect *)arg3 forStartingGlyphAtIndex:(unsigned long long)arg4 proposedRect:(struct CGRect)arg5 lineSpacing:(double)arg6 paragraphSpacingBefore:(double)arg7 paragraphSpacingAfter:(double)arg8;
- (unsigned long long)getGlyphsInRange:(struct _NSRange)arg1 glyphs:(unsigned int *)arg2 characterIndexes:(unsigned long long *)arg3 glyphInscriptions:(unsigned long long *)arg4 elasticBits:(char *)arg5 bidiLevels:(char *)arg6;
- (unsigned long long)getGlyphsInRange:(struct _NSRange)arg1 glyphs:(unsigned short *)arg2 properties:(long long *)arg3 characterIndexes:(unsigned long long *)arg4 bidiLevels:(char *)arg5;
- (struct _NSRange)glyphRangeForCharacterRange:(struct _NSRange)arg1 actualCharacterRange:(struct _NSRange *)arg2;
- (struct _NSRange)characterRangeForGlyphRange:(struct _NSRange)arg1 actualGlyphRange:(struct _NSRange *)arg2;
- (double)baselineOffsetInLayoutManager:(id)arg1 glyphIndex:(unsigned long long)arg2;
- (struct _NSRange)layoutCharactersInRange:(struct _NSRange)arg1 forLayoutManager:(id)arg2 maximumNumberOfLineFragments:(unsigned long long)arg3;
- (void)layoutGlyphsInLayoutManager:(id)arg1 startingAtGlyphIndex:(unsigned long long)arg2 maxNumberOfLineFragments:(unsigned long long)arg3 nextGlyphIndex:(unsigned long long *)arg4;
- (void)_layoutGlyphsInLayoutManager:(id)arg1 startingAtGlyphIndex:(unsigned long long)arg2 maxNumberOfLineFragments:(unsigned long long)arg3 maxCharacterIndex:(unsigned long long)arg4 nextGlyphIndex:(unsigned long long *)arg5 nextCharacterIndex:(unsigned long long *)arg6;
- (unsigned long long)actionForControlCharacterAtIndex:(unsigned long long)arg1;
@property(readonly, copy) NSDictionary *attributesForExtraLineFragment;
- (void)getLineFragmentRect:(struct CGRect *)arg1 usedRect:(struct CGRect *)arg2 forParagraphSeparatorGlyphRange:(struct _NSRange)arg3 atProposedOrigin:(struct CGPoint)arg4;
- (void)setHardInvalidation:(BOOL)arg1 forGlyphRange:(struct _NSRange)arg2;
@property(readonly, copy) NSParagraphStyle *currentParagraphStyle;
@property(readonly) NSTextContainer *currentTextContainer;
@property(readonly) NSArray *textContainers;
@property(readonly) NSLayoutManager *layoutManager;
- (double)paragraphSpacingAfterGlyphAtIndex:(unsigned long long)arg1 withProposedLineFragmentRect:(struct CGRect)arg2;
- (double)paragraphSpacingBeforeGlyphAtIndex:(unsigned long long)arg1 withProposedLineFragmentRect:(struct CGRect)arg2;
- (double)lineSpacingAfterGlyphAtIndex:(unsigned long long)arg1 withProposedLineFragmentRect:(struct CGRect)arg2;
- (void)endLineWithGlyphRange:(struct _NSRange)arg1;
- (void)beginLineWithGlyphAtIndex:(unsigned long long)arg1;
- (void)endParagraph;
- (void)beginParagraph;
- (unsigned long long)layoutParagraphAtPoint:(struct CGPoint *)arg1;
@property(readonly) struct _NSRange paragraphSeparatorCharacterRange;
@property(readonly) struct _NSRange paragraphCharacterRange;
@property(readonly) struct _NSRange paragraphSeparatorGlyphRange;
@property(readonly) struct _NSRange paragraphGlyphRange;
- (void)setParagraphGlyphRange:(struct _NSRange)arg1 separatorGlyphRange:(struct _NSRange)arg2;
@property NSAttributedString *attributedString;
- (void)setTightenThresholdForTruncation:(float)arg1;
- (float)tightenThresholdForTruncation;
@property BOOL bidiProcessingEnabled;
- (id)textTabForGlyphLocation:(double)arg1 writingDirection:(long long)arg2 maxLocation:(double)arg3;
- (id)substituteFontForFont:(id)arg1;
@property double lineFragmentPadding;
@property float hyphenationFactor;
@property long long typesetterBehavior;
@property BOOL usesFontLeading;
- (long long)_baseWritingDirection;
- (id)_ellipsisFontForFont:(id)arg1;
- (BOOL)_allowsEllipsisGlyphSubstitution;
- (CDUnion_09a75e3c *)_lineFragmentRectForProposedRectArgs;
- (void)_updateParagraphStyleCache:(id)arg1;
- (unsigned long long)_getRemainingNominalParagraphRange:(struct _NSRange *)arg1 andParagraphSeparatorRange:(struct _NSRange *)arg2 charactarIndex:(unsigned long long)arg3 layoutManager:(id)arg4 string:(id)arg5;
- (void)_setLineBreakModeOverridden:(BOOL)arg1;
- (BOOL)_isLineBreakModeOverridden;
- (void)_setForceOriginalFontBaseline:(BOOL)arg1;
- (BOOL)_forceOriginalFontBaseline;
- (void)finalize;
- (void)dealloc;
- (CDStruct_9b8416ed *)_getAuxData;
- (CDStruct_9b8416ed *)_allocateAuxData;

@end

