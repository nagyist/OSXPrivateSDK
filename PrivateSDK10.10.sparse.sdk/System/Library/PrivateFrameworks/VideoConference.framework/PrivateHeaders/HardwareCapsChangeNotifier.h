/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface HardwareCapsChangeNotifier : NSObject
{
    struct IONotificationPort *_notificationPort;
    NSMutableDictionary *_notifierMap;
    NSMutableArray *_cameraCallbackObjs;
    NSMutableArray *_iterators;
    BOOL _hasQ8;
    BOOL _hasDV;
    unsigned int *_deviceList;
    unsigned int _numDevices;
}

+ (id)hardwareCapsChangeNotifier;
- (id)vcHardwareCaps;
- (void)_broadcastHardwareCaps;
- (void)_refreshDevicePropertyListeners;
- (BOOL)_isGUIDUnique:(id)arg1;
- (unsigned int)cameraCallbackCreateNotifier:(unsigned int)arg1 withIterator:(unsigned int)arg2;
- (unsigned int)cameraCallbackFindParent:(unsigned int)arg1 parentClass:(const char *)arg2;
- (void)audioHardwareChanged:(id)arg1;
- (unsigned int *)deviceList;
- (unsigned int)numDevices;
- (struct IONotificationPort *)notificationPort;
- (id)notifierMap;
- (void)createNotification:(struct __CFDictionary *)arg1 callback:(void *)arg2;
- (void)initIOKitNotifications;
- (void)unregisterForHardwareNotification;
- (void)registerForHardwareNotification;
- (void)dealloc;
- (id)_init;

@end

