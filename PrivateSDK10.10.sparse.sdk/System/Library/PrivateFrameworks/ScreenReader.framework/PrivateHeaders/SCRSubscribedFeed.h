/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSURLConnectionDelegate-Protocol.h"

@class NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSPurgeableData, NSString, NSURL, NSURLConnection;

@interface SCRSubscribedFeed : NSObject <NSCoding, NSCopying, NSURLConnectionDelegate>
{
    NSURL *_feedURL;
    NSString *_mobileMeName;
    NSDate *_lastUpdate;
    NSDate *_modificationDate;
    BOOL _isEnabled;
    BOOL _isOnline;
    BOOL _isDeleted;
    NSURLConnection *_connection;
    NSPurgeableData *_downloadData;
    BOOL _isSelected;
    NSMutableDictionary *_feedDataDict;
    NSMutableArray *_feedURLsToDownload;
    NSURL *_urlBeingDownloaded;
    NSDictionary *_data;
}

+ (id)_dateForObject:(id)arg1;
+ (id)configurationValueForClassKey:(id)arg1 withSpecifier:(id)arg2;
+ (id)subscribedFeedForOutputRepresentation:(id)arg1;
@property(nonatomic) BOOL isDeleted; // @synthesize isDeleted=_isDeleted;
@property(nonatomic) BOOL isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) NSPurgeableData *downloadData; // @synthesize downloadData=_downloadData;
@property(nonatomic) BOOL isOnline; // @synthesize isOnline=_isOnline;
@property(retain) NSDictionary *data; // @synthesize data=_data;
@property(nonatomic) BOOL isEnabled; // @synthesize isEnabled=_isEnabled;
@property(retain, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(retain, nonatomic) NSDate *lastUpdate; // @synthesize lastUpdate=_lastUpdate;
@property(retain, nonatomic) NSString *mobileMeName; // @synthesize mobileMeName=_mobileMeName;
@property(retain, nonatomic) NSURL *feedURL; // @synthesize feedURL=_feedURL;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)convertRetrievedData;
- (void)convertSharingFile:(id)arg1;
- (void)_mergeDataFiles;
- (void)convertIndexFile:(id)arg1;
- (id)_feedInfoForURL:(id)arg1;
- (BOOL)verifyFeedData:(id)arg1 withBlock:(id)arg2;
- (void)update;
- (void)loadNextURL;
- (void)loadURL:(id)arg1;
- (void)_setURLBeingDownloaded:(id)arg1;
- (void)resetDataAndConnection;
@property(retain, nonatomic) NSURLConnection *connection;
@property(readonly, copy) NSString *description;
- (id)outputRepresentation;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (void)updateFeedURL;
- (id)feedURLForFile:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

