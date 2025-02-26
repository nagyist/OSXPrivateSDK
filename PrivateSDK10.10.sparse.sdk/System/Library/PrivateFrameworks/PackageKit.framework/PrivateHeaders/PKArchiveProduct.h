/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PackageKit/PKMutableProduct.h>

@class NSMutableDictionary, NSString, PKArchive, PKDistributionContainer;

@interface PKArchiveProduct : PKMutableProduct
{
    PKArchive *_archive;
    PKDistributionContainer *_container;
    NSMutableDictionary *_packageIdentifierToURLMap;
    NSString *_productIdentifier;
    NSString *_productVersion;
    NSString *_scriptsPath;
    NSString *_installerPluginsPath;
}

+ (BOOL)canInitWithURL:(id)arg1;
- (id)_identifierVersionTuple:(id)arg1;
- (id)allPackageReferences;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2;
- (id)stringsDictionary;
- (id)distributionContainer;
- (id)distribution;
- (id)productVersion;
- (id)productIdentifier;
- (id)productType;
- (id)URL;
- (void)dealloc;
- (id)_initWithPath:(id)arg1 error:(id *)arg2;
- (id)_archiveForTrustEvaluation;
- (id)initByLoadingProductAtURL:(id)arg1 error:(id *)arg2;
- (BOOL)commitReturningError:(id *)arg1;
- (BOOL)_writeCompressedCPIOForRoot:(id)arg1 intoArchivePath:(id)arg2 error:(id *)arg3;
- (BOOL)unregisterPackageReference:(id)arg1 deletePackage:(BOOL)arg2;
- (BOOL)registerPackageReference:(id)arg1;
- (id)suggestedPackagePathFromPackageReference:(id)arg1;
- (BOOL)addResourceDataAtPath:(id)arg1;
- (void)_setInstallerPluginsPath:(id)arg1;
- (void)_setScriptsPath:(id)arg1;
- (BOOL)setDistributionFromContainer:(id)arg1;
- (BOOL)setDistribution:(id)arg1;
- (void)setProductIdentifier:(id)arg1 version:(id)arg2;
- (id)initForWritingToArchive:(id)arg1 signingDelegate:(id)arg2 error:(id *)arg3;

@end

