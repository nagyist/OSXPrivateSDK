/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol ABGroupHelperFactory <NSObject>
- (id)makeImportFilesHelper:(id)arg1 showImportConfirmation:(BOOL)arg2;
- (id)makeEditSmartGroupHelper:(id)arg1;
- (id)makeCreateSmartGroupFromSearchHelper;
- (id)makeCreateSmartGroupHelper;
- (id)makeSectionSelectHelperWithIdentifier:(id)arg1;
- (id)makeSearchingSelectHelper:(id)arg1;
- (id)makeBrowsingSelectHelper:(id)arg1;
- (id)makeDragHelper:(id)arg1;
- (id)makeDropHelper:(id)arg1;
- (id)makeDeleteHelper:(id)arg1;
- (id)makeRenameHelper:(id)arg1;
- (id)makeCreateHelper:(id)arg1;
- (id)makePasteHelper:(id)arg1;
- (id)makeCutHelper:(id)arg1;
- (id)makeCopyHelper:(id)arg1;
@end

