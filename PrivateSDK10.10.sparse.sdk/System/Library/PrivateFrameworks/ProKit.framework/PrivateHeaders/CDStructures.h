/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CPSDAdjustmentLayerInfo {
    void **_field1;
    struct CPSDFile *_field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
};

struct CPSDChannelBlendingInfo;

struct CPSDChannelLengthInfo;

struct CPSDColorModeData {
    void **_field1;
    struct CPSDFile *_field2;
    unsigned int _field3;
    char *_field4;
};

struct CPSDFile {
    void **_field1;
    struct CPSDFile *_field2;
    char *_field3;
    unsigned int _field4;
    unsigned char _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned short _field8;
    unsigned short _field9;
    unsigned short _field10;
    char *_field11;
    struct CPSDChannelLengthInfo *_field12;
    char **_field13;
    void *_field14;
    unsigned char _field15;
    struct CPSDHeader _field16;
    struct CPSDColorModeData _field17;
    struct CPSDImageResources _field18;
    struct CPSDMiscellaneousInfo _field19;
};

struct CPSDGlobalLayerMaskInfo {
    void **_field1;
    struct CPSDFile *_field2;
    unsigned int _field3;
    unsigned short _field4;
    unsigned short _field5[4];
    unsigned short _field6;
    unsigned char _field7;
    unsigned char _field8;
};

struct CPSDGradientFillInfo;

struct CPSDHeader {
    void **_field1;
    struct CPSDFile *_field2;
    char _field3[4];
    unsigned short _field4;
    unsigned char _field5[6];
    unsigned short _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned short _field9;
    unsigned short _field10;
};

struct CPSDImageResourceBlock;

struct CPSDImageResources {
    void **_field1;
    struct CPSDFile *_field2;
    unsigned int _field3;
    struct CPSDImageResourceBlock *_field4;
};

struct CPSDLayerAndMaskInfo {
    void **_field1;
    struct CPSDFile *_field2;
    unsigned int _field3;
    unsigned short _field4;
    struct CPSDLayerRecord *_field5;
    struct CPSDLayerChannelGroup **_field6;
};

struct CPSDLayerBlendingRanges {
    void **_field1;
    struct CPSDFile *_field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    struct CPSDChannelBlendingInfo *_field6;
};

struct CPSDLayerChannelGroup;

struct CPSDLayerMaskData {
    void **_field1;
    struct CPSDFile *_field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned char _field8;
    unsigned char _field9;
    unsigned short _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
    unsigned char _field15;
    unsigned char _field16;
};

struct CPSDLayerRecord {
    void **_field1;
    struct CPSDFile *_field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned short _field7;
    struct CPSDChannelLengthInfo *_field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned char _field11;
    unsigned char _field12;
    unsigned char _field13;
    unsigned char _field14;
    unsigned int _field15;
    struct CPSDLayerMaskData _field16;
    struct CPSDLayerBlendingRanges _field17;
    char _field18[256];
    struct CPSDVectorMaskData *_field19;
    struct CPSDObjectEffectsLayerInfo *_field20;
    struct CPSDGradientFillInfo *_field21;
    struct CPSDUnicodeLayerName *_field22;
    unsigned char _field23;
    struct CPSDAdjustmentLayerInfo _field24;
    unsigned char _field25;
    unsigned int _field26;
};

struct CPSDMiscellaneousInfo {
    void **_field1;
    struct CPSDFile *_field2;
    unsigned int _field3;
    struct CPSDLayerAndMaskInfo _field4;
    struct CPSDGlobalLayerMaskInfo _field5;
};

struct CPSDObjectEffectsLayerInfo;

struct CPSDUnicodeLayerName;

struct CPSDVectorMaskData;

struct _HMSFs {
    long long _field1;
    long long _field2;
    long long _field3;
    long long _field4;
    long long _field5;
};

struct _NSProBoxMetrics {
    double _field1;
    double _field2;
    double _field3;
};

struct _NSProMargins {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct _NSProPolarPoint {
    double r;
    double theta;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _PPIFlags {
    unsigned int variant:4;
    unsigned int lastImageIndex:4;
    unsigned int temporarilyBlockHeartbeat:1;
    unsigned int reserved:23;
};

struct _PSDImageInfo {
    unsigned int _field1;
    unsigned int _field2;
    unsigned short _field3;
    unsigned short _field4;
    unsigned short _field5;
    int _field6;
};

struct _PSFFlags {
    unsigned int alwaysShowCancelButton:1;
    unsigned int reserved:31;
};

struct _PSFlags {
    unsigned int mouseInKnobRect:1;
    unsigned int tintIndex:8;
    unsigned int reserved:23;
};

struct _PSSCFlags {
    unsigned int style:4;
    unsigned int scalesTextToFit:1;
    unsigned int drawsBackground:1;
    unsigned int autorepeat:1;
    unsigned int isRomanOnly:1;
    unsigned int hasCustomBackgroundColor:1;
    unsigned int hasCustomTextColor:1;
    unsigned int hasCustomNonScrubbingTextColor:1;
    unsigned int hasCustomRolloverBackgroundColor:1;
    unsigned int editingSegment:1;
    unsigned int hasRollover:1;
    unsigned int hasSelection:1;
    unsigned int isScrubbing:1;
    unsigned int acceptsFirstResponderDuringEdit:1;
    unsigned int tintIndex:3;
    unsigned int hasFocus:1;
    unsigned int isSegmentFocus:1;
    unsigned int isInHighlightedRow:1;
    unsigned int needsSelectedTextColorForEditing:1;
    unsigned int hitSegment:1;
    unsigned int cursorHiddenForTextEditing:1;
    unsigned int targetNotified:1;
    unsigned int actionType:2;
    unsigned int isLayoutValid:1;
    unsigned int valueChangeWhenScrubbing:2;
    unsigned int useInitialValueAsPlaceholder:1;
    unsigned int hasNilValue:1;
    unsigned int reserved:30;
};

struct _PSTEFlags {
    unsigned int hasCheckedButtonGlyph:1;
    unsigned int isButtonGlyph:1;
    unsigned int hasSetUpRenditionType:1;
    unsigned int hasSetUpThemeLookIndex:1;
    unsigned int reserved:12;
};

struct _PTTVFlags {
    unsigned int isReverseType:1;
    unsigned int validIsReverseType:1;
    unsigned int reserved:30;
};

struct __NSProThemeGradientRenditionInitializerStruct {
    unsigned int _field1;
    double _field2;
    id _field3;
};

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

struct _colordef {
    unsigned int _field1;
    unsigned int _field2;
    struct _rgbquad _field3;
};

struct _proPSDGradientColor {
    double red;
    double green;
    double blue;
    double alpha;
};

struct _prothemecursor {
    union _themeatom_union _field1;
    unsigned int _field2;
    struct CGPoint _field3;
};

struct _psigradientdatanode {
    unsigned int _field1;
    float _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
};

struct _psiheader {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int :4;
    unsigned int :28;
    struct _psimetadata {
        unsigned int _field1;
        unsigned short _field2;
        unsigned short _field3;
        char _field4[128];
    } _field8;
    unsigned int _field9;
    struct _psibitmaplist {
        unsigned int _field1;
        unsigned int _field2[0];
    } _field10;
};

struct _renditionkey {
    unsigned short _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned short _field4;
    unsigned short _field5;
    unsigned short _field6;
    unsigned short _field7;
    unsigned short _field8;
    unsigned short _field9;
    unsigned short _field10;
    unsigned short _field11;
    unsigned short _field12;
};

struct _renditionkeyfmt {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4[0];
};

struct _renditionkeytoken {
    unsigned short identifier;
    unsigned short value;
};

struct _rgbquad {
    unsigned int :8;
    unsigned int :8;
    unsigned int :8;
    unsigned int :8;
};

struct _themelook {
    int _field1;
    char *_field2;
};

struct prmFlags {
    unsigned int scalesVertically:1;
    unsigned int scalesHorizontally:1;
    unsigned int reserved:14;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
} CDStruct_c0454aff;

typedef struct {
    unsigned int _style:1;
    unsigned int _tint:1;
    unsigned int _unused:29;
} CDStruct_ae8b4f33;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    char _field5;
    char _field6;
    char _field7;
    char _field8;
} CDStruct_6cce754d;

typedef struct {
    long long _field1;
    int _field2;
    unsigned int _field3;
    long long _field4;
} CDStruct_198678f7;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    struct {
        unsigned int :1;
        unsigned int :31;
    } _field4;
} CDStruct_fadd2e06;

typedef struct {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    struct CGSize _field5;
    float _field6;
    float _field7;
    float _field8;
    float _field9;
    float _field10;
    float _field11;
    float _field12;
    float _field13;
} CDStruct_f6f3b1b2;

typedef struct {
    int _field1;
    int _field2;
    int _field3;
    void *_field4;
    int _field5;
    struct {
        int _field1;
        int _field2;
        int _field3;
    } _field6[3];
} CDStruct_85008460;

typedef struct {
    struct CGSize _field1;
    struct CGSize _field2;
    struct CGSize _field3;
} CDStruct_1ba92a5e;

typedef struct {
    id _field1;
    struct CGRect _field2;
    struct CGSize _field3;
    id _field4;
    id _field5;
    long long _field6;
    struct CGRect _field7;
    struct CGRect _field8;
    struct CGRect *_field9;
    char _field10;
} CDStruct_09622b1b;

#pragma mark Named Unions

union _themeatom_union {
    unsigned int themeAtomID;
    struct _themeatom {
        unsigned int variantID:3;
        unsigned int sizeID:2;
        unsigned int directionID:3;
        unsigned int elementID:8;
        unsigned int partID:8;
        unsigned int stateID:4;
        unsigned int sliceID:4;
    } atom;
};

