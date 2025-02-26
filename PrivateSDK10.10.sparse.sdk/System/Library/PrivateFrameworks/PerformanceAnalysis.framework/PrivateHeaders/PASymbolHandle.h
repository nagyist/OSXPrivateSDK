/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "PASerializable-Protocol.h"

@class NSString, NSUUID, PASymbol, PASymbolOwner;

@interface PASymbolHandle : NSObject <PASerializable>
{
    PASymbol *_symbol;
    PASymbolOwner *_owner;
    unsigned long long _symbolOwnerStartAddressInTask;
}

+ (id)getEmptySymbolHandle;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void *)arg1;
+ (id)classDictionaryKey;
@property(readonly) unsigned long long symbolOwnerStartAddressInTask; // @synthesize symbolOwnerStartAddressInTask=_symbolOwnerStartAddressInTask;
- (BOOL)addToPersistentCache;
- (id)debugDescriptionForAddress:(unsigned long long)arg1;
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;
- (id)_initAsEmptyHandle;
- (id)initWithSymbol:(id)arg1 andSymbolOwnerStartAddress:(unsigned long long)arg2 andSymbolOwner:(id)arg3;
- (long long)compareInfoRichnessToSymbolHandle:(id)arg1 forAddress:(unsigned long long)arg2;
- (unsigned int)sourceLineNumberForAddress:(unsigned long long)arg1;
- (unsigned int)sourceColumnNumberForAddress:(unsigned long long)arg1;
- (id)sourceFileNameForAddress:(unsigned long long)arg1;
- (BOOL)hasSourceInformationForAddress:(unsigned long long)arg1;
- (id)_sourceInformationForAddress:(unsigned long long)arg1;
@property(readonly) NSString *symbolName;
@property(readonly) unsigned long long symbolStartAddressInTask;
@property(readonly) unsigned long long symbolLength;
@property(readonly) BOOL hasSymbol;
@property(readonly) NSString *symbolOwnerBinaryVersion;
@property(readonly) NSString *symbolOwnerBundleShortVersion;
@property(readonly) NSString *symbolOwnerBundleVersion;
@property(readonly) NSString *symbolOwnerBundleIdentifier;
@property(readonly) unsigned long long symbolOwnerTextSegmentLength;
@property(readonly) NSString *symbolOwnerPath;
@property(readonly) NSUUID *symbolOwnerUUID;
@property(readonly) NSString *symbolOwnerName;
@property(readonly) BOOL hasSymbolOwner;
- (void)populateReferencesUsingBufferPosition:(const void *)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (BOOL)addSelfToBufferAtPosition:(void *)arg1 withCompletedSerializationDictionary:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

