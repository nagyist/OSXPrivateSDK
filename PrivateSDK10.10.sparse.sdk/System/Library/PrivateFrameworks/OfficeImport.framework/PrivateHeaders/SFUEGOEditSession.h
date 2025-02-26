/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData;

// Not exported
@interface SFUEGOEditSession : NSObject
{
    NSData *mImageData;
    id <NSObject> mModelObject;
    unsigned int mImageType;
    NSData *mMathMLData;
    double mDescent;
    BOOL mDidReceiveNewEquationFromEditor;
    BOOL mIsResolvingSession;
    unsigned int mSessionID;
    unsigned int mEquationEditor;
}

+ (unsigned int)launchEditorWithPreferredCreatorCode:(unsigned int)arg1;
+ (BOOL)launchAppWithCreatorCode:(unsigned int)arg1;
+ (BOOL)isAppWithCreatorCodeRunning:(unsigned int)arg1;
+ (id)beginNewEditSessionWithDocument:(id)arg1 modelObject:(id)arg2 imageData:(id)arg3 type:(unsigned int)arg4 descent:(double)arg5 mathMLData:(id)arg6;
+ (id)editSessionForDocument:(id)arg1 modelObject:(id)arg2;
+ (id)editSessionsWithDocument:(id)arg1;
- (BOOL)activateEditorIfOpen;
- (void)endEditSessionWithUpdate:(BOOL)arg1;
- (void)endEditSession;
- (void)resolveEditSessionWithReply:(BOOL)arg1;
- (void)resolveEditSession;
- (BOOL)handleSetDataEvent:(id)arg1;
- (BOOL)beginEditSessionWithDocument:(id)arg1;
- (BOOL)didReceiveNewEquationFromEditor;
- (id)mathMLData;
- (double)descent;
- (id)imageData;
- (id)modelObject;
- (unsigned int)imageType;
- (void)dealloc;
- (id)initWithImageData:(id)arg1 modelObject:(id)arg2 type:(unsigned int)arg3 descent:(double)arg4 mathMLData:(id)arg5;
- (BOOL)commitEditingAndReturnError:(id *)arg1;
- (void)commitEditingWithDelegate:(id)arg1 didCommitSelector:(SEL)arg2 contextInfo:(void *)arg3;
- (BOOL)commitEditing;
- (void)discardEditing;

@end

