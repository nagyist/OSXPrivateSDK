/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, NSURL;

@interface NSTitlebarRenamingURLResolver : NSObject
{
    NSString *_startDisplayName;
    NSString *_userEditedDisplayName;
    struct _NSRange _startEditingRange;
    struct _NSRange _endEditingRange;
    NSString *_startExtension;
    NSString *_fallbackExtension;
    long long _documentUniquingNumberStart;
    long long _documentUniquingNumberEnd;
    NSURL *_originalURL;
    NSURL *_finalURL;
    NSString *_sandboxToken;
    NSURL *_alternateDirectory;
    NSString *_documentUTI;
    BOOL _extensionHiddenStart;
    BOOL _extensionHiddenEnd;
    BOOL _titleWasChosenAutomatically;
    BOOL _isDuplicate;
}

+ (id)_issueSandboxExtensionForClientWithPid:(int)arg1 usingFileName:(id)arg2 toRequestPath:(id)arg3 restrictedToOriginalPath:(id)arg4 orDocumentsDir:(id)arg5 doNotIssue:(BOOL)arg6;
+ (BOOL)logSomethingAboutTheUsageOfPeriodsInTheseFileNames:(id)arg1 lastPathComponent:(id)arg2;
+ (id)_pathToDocumentsDirectory;
+ (BOOL)_path:(id)arg1 pointsToSameInodeAsPath:(id)arg2;
@property BOOL titleWasChosenAutomatically; // @synthesize titleWasChosenAutomatically=_titleWasChosenAutomatically;
@property BOOL isDuplicate; // @synthesize isDuplicate=_isDuplicate;
@property BOOL extensionHiddenEnd; // @synthesize extensionHiddenEnd=_extensionHiddenEnd;
@property BOOL extensionHiddenStart; // @synthesize extensionHiddenStart=_extensionHiddenStart;
@property(copy) NSString *documentUTI; // @synthesize documentUTI=_documentUTI;
@property(copy) NSURL *alternateDirectory; // @synthesize alternateDirectory=_alternateDirectory;
@property(copy) NSURL *originalURL; // @synthesize originalURL=_originalURL;
@property long long documentUniquingNumberEnd; // @synthesize documentUniquingNumberEnd=_documentUniquingNumberEnd;
@property long long documentUniquingNumberStart; // @synthesize documentUniquingNumberStart=_documentUniquingNumberStart;
@property(copy) NSString *fallbackExtension; // @synthesize fallbackExtension=_fallbackExtension;
@property(copy) NSString *startExtension; // @synthesize startExtension=_startExtension;
@property struct _NSRange endEditingRange; // @synthesize endEditingRange=_endEditingRange;
@property struct _NSRange startEditingRange; // @synthesize startEditingRange=_startEditingRange;
@property(copy) NSString *userEditedDisplayName; // @synthesize userEditedDisplayName=_userEditedDisplayName;
@property(copy) NSString *startDisplayName; // @synthesize startDisplayName=_startDisplayName;
- (id)description;
- (BOOL)resolveFinalURLInPBOXOverwriteOK:(BOOL)arg1 forClientPID:(int)arg2 andEUID:(unsigned int)arg3 usingFinalTitle:(id)arg4;
- (id)findAvailableURLForFinalDisplayName:(id)arg1 withFileSystemUniquing:(BOOL)arg2;
@property(readonly) NSURL *finalDirectory; // @dynamic finalDirectory;
@property(readonly) NSString *finalExtension; // @dynamic finalExtension;
- (void)serializeToRequest:(id)arg1;
- (void)updateWithRequest:(id)arg1;
@property(readonly) BOOL documentUniquingNumberWasIncremented; // @dynamic documentUniquingNumberWasIncremented;
@property long long documentUniquingNumber; // @dynamic documentUniquingNumber;
- (void)setDefaults;
@property BOOL extensionHidden; // @dynamic extensionHidden;
- (void)_setSandboxToken:(id)arg1;
@property(readonly) NSURL *finalURL;
- (void)_setFinalURL:(id)arg1;
@property struct _NSRange editingRange; // @dynamic editingRange;
- (void)dealloc;
- (id)initWithRemoteServiceRequest:(id)arg1;
- (id)init;

@end

