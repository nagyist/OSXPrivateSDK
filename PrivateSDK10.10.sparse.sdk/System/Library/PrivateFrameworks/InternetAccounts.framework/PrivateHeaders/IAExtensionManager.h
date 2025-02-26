/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface IAExtensionManager : NSObject
{
    NSMutableDictionary *_plugins;
    NSMutableArray *_pluginIDs;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)_pluginsDidChange:(id)arg1;
@property(readonly) NSArray *pluginIDs;
@property(readonly) NSDictionary *plugins;
- (void)_loadPluginsFromAccountsStore;
- (id)init;
- (BOOL)_processShouldUseSocialPlugins;

@end

