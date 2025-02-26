/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarPersistence/CALOccurrableEntity.h>

@class CALAddress, CALDate, NSDictionary, NSMutableDictionary, NSNumber, NSSet, NSString, NSURL;

@interface CALEntity : CALOccurrableEntity
{
    CALEntity *_parentEntity;
    NSMutableDictionary *_children;
    BOOL _hasReccurrence;
    BOOL _isPhantom;
    CALDate *_eventCachedStartDate;
    CALDate *_cachedEndDate;
    NSDictionary *_searchHackDict;
    NSString *_localUID;
    BOOL _eTagShouldBeNil;
    int _organizerType;
    CALAddress *_myAddress;
    BOOL _myAddressNotHere;
    CALAddress *_myAddressIgnoringMeCard;
    BOOL _myAddressIgnoringMeCardNotHere;
    NSSet *_ownerAddresses;
    unsigned long long _permission;
    NSNumber *_dropBoxFreeBytes;
    NSURL *_dropBoxLocationOverrideBaseURL;
    unsigned long long _unlistedOtherAttendees;
    BOOL _isOwnerMe;
    BOOL _isSharingSchedulingSupported;
}

+ (id)makeNewLocalUID;
+ (id)entityFromManagedObject:(id)arg1;
@property(retain) NSURL *dropBoxLocationOverrideBaseURL; // @synthesize dropBoxLocationOverrideBaseURL=_dropBoxLocationOverrideBaseURL;
@property(retain) NSNumber *dropBoxFreeBytes; // @synthesize dropBoxFreeBytes=_dropBoxFreeBytes;
@property unsigned long long unlistedOtherAttendees; // @synthesize unlistedOtherAttendees=_unlistedOtherAttendees;
@property(retain) NSSet *ownerAddresses; // @synthesize ownerAddresses=_ownerAddresses;
@property BOOL isSharingSchedulingSupported; // @synthesize isSharingSchedulingSupported=_isSharingSchedulingSupported;
@property BOOL isOwnerMe; // @synthesize isOwnerMe=_isOwnerMe;
@property BOOL isPhantom; // @synthesize isPhantom=_isPhantom;
@property BOOL eTagShouldBeNil; // @synthesize eTagShouldBeNil=_eTagShouldBeNil;
- (void)setChangeKey:(id)arg1;
- (id)changeKey;
- (void)setEWSItemID:(id)arg1;
- (id)EWSItemID;
- (BOOL)hasOccurrenceInTheFuture;
- (id)versions;
- (id)versionForVersionTag:(id)arg1;
- (long long)compare:(id)arg1;
- (id)getMainOccurrence;
- (id)mainOccurrenceID;
- (id)expandOnTimeRange:(id)arg1;
- (id)occurrencesFromDates:(id)arg1;
- (id)upperBoundDate;
- (BOOL)dontSchedule;
- (void)setDontSchedule:(BOOL)arg1;
- (void)_setDontScheduleNoPropagate:(BOOL)arg1;
- (BOOL)_ITipNeedsUpd;
- (void)_setITipNeedsUpd:(BOOL)arg1;
- (BOOL)rsvpNeeded;
- (void)setRSVPNeeded:(BOOL)arg1;
- (BOOL)alreadySentMarker;
- (void)setAlreadySentMarker:(BOOL)arg1;
- (BOOL)myiTIPStatusChanged;
- (BOOL)hasMyiTIPStatusChanged;
- (void)setMyiTIPStatusChanged:(BOOL)arg1;
- (void)removeAllAlarms;
- (void)removeAlarm:(id)arg1;
- (void)setAlarms:(id)arg1;
- (void)addAlarm:(id)arg1;
- (void)removeAndProcessAttachments:(id)arg1;
- (void)addNewAttachments:(id)arg1 withContext:(id)arg2;
- (void)_addURL:(id)arg1 withContext:(id)arg2;
- (void)_addURL:(id)arg1 inNonCalDAVCalendar:(id)arg2;
- (void)_addURL:(id)arg1 inCalDAVCalendar:(id)arg2 withContext:(id)arg3;
- (id)_getFilePathOnServer:(id)arg1 withPrincipal:(id)arg2;
- (id)_getValidDropBoxLocationFromPrincipal:(id)arg1;
- (BOOL)_notAllowedToAddAttachments;
- (void)_removeOldAttachmentsWithSameNameAsAnyOfNewOnes:(id)arg1;
- (void)_removeAttachmentsFromArrayFromSelf:(id)arg1;
- (id)_getPathsForOldAttachmentsWithSameNameAsAnyOfNewOnes:(id)arg1;
- (id)_filesystemURLForFilename:(id)arg1;
- (void)setDropBoxLocation:(id)arg1;
- (id)attachmentsLocation;
- (id)dropBoxLocation;
- (void)setHasDropBox:(BOOL)arg1;
- (BOOL)hasDropBox;
- (id)attachmentWithFileName:(id)arg1;
- (id)attachmentWithURL:(id)arg1;
- (void)removeAllAttachments;
- (void)removeAttachment:(id)arg1;
- (void)addAttachment:(id)arg1;
- (id)attachments;
- (void)removeCategory:(id)arg1;
- (void)removeAllCategories;
- (void)setCategories:(id)arg1;
- (void)addCategory:(id)arg1;
- (id)categories;
- (void)removeRelatedTo:(id)arg1;
- (void)removeAllRelatedTos;
- (void)setRelatedTos:(id)arg1;
- (void)addRelatedTo:(id)arg1;
- (id)relatedTos;
- (void)resetParticipationStatusTo:(int)arg1;
- (void)resetParticipationStatus;
- (BOOL)attendeesAreStillNone;
- (BOOL)invitationStatusPending;
- (void)removeAllAttendees;
- (void)setAttendees:(id)arg1;
- (BOOL)hasInvitedAttendeesIncludingChildren;
- (BOOL)hasInvitedAttendees;
- (BOOL)hasSendableAttendees;
- (void)removeAttendeeSimilarToAttendee:(id)arg1;
- (void)removeAttendee:(id)arg1;
- (void)removeOrUninviteAttendee:(id)arg1;
- (id)attendeeIncludingUnivitedWithAddress:(id)arg1;
- (id)attendeeWithAddress:(id)arg1;
- (id)attendeeWithAddress:(id)arg1 fromAttendees:(id)arg2;
- (id)attendeeSimilarToAttendee:(id)arg1;
- (BOOL)hasAttendee:(id)arg1;
- (void)addAttendee:(id)arg1;
- (id)attendeesIncludingUninvited;
- (id)attendees;
- (id)attendeesExcludingRoomTypeAndOrganizer;
- (id)attendeesExcludingOrganizer;
- (id)attendessWithExcludingOptions:(int)arg1;
- (id)attendeesExcludingRoomType;
- (id)attendeesWithOnlyRoomType;
- (BOOL)hasUninvitedAttendees;
- (BOOL)hasAttendees;
- (id)attendeesNoInherit;
- (BOOL)hasAttendeesNoInherit;
- (BOOL)hideAttendeesForBrokenOwner;
- (BOOL)isOwnerAddress:(id)arg1;
- (BOOL)isOwnerAddress:(id)arg1 ignoreMeCard:(BOOL)arg2;
- (BOOL)possibleMeForEntity;
- (id)ownerForEntity;
- (void)setOrganizerType:(int)arg1;
- (BOOL)isOrganizerMeAndEditable;
- (BOOL)isOrganizerOwner;
- (BOOL)isOrganizerScheduleAgentNonServer;
- (BOOL)isOrganizerMe;
- (BOOL)isAddressMe:(id)arg1 ignoreMeCard:(BOOL)arg2;
- (void)_updateCachedMyAddressNotHereIgnoringMeCard:(BOOL)arg1;
- (void)_updateCachedMyAddressWithAttendee:(id)arg1 ignoreMeCard:(BOOL)arg2;
- (id)myAddressIgnoringMeCard:(BOOL)arg1;
- (id)myAddress;
- (void)removeOrganizer;
- (void)setOrganizer:(id)arg1;
- (id)organizer;
- (BOOL)hasOrganizer;
- (id)defaultAlarmsBasedOnItemAndPreferencesInContext:(id)arg1;
- (void)undeleteDefaultAlarmsInContext:(id)arg1;
- (void)undeleteDefaultAlarms;
- (void)deleteDefaultAlarms;
- (BOOL)isDefaultAlarmDeleted;
- (BOOL)isExchangeCompatible;
- (void)makeExchangeCompatible;
- (void)removeAttendeesInviteeSideExchange;
- (BOOL)_isAlarmExchangeCompatible:(id)arg1;
- (void)_makeAlarmExchangeCompatible:(id)arg1;
- (id)_makeExchangeCompatible;
- (BOOL)shouldWarnUserOnMoveToExchangeCalendar:(id)arg1;
- (BOOL)shouldWarnUserOnMoveToExchangeRepository:(id)arg1;
- (BOOL)_isInvitee;
- (BOOL)hasCalDAVRepository;
- (BOOL)hasExchangeRepository;
- (void)setAlarmsOriginEntity;
- (BOOL)hasAlarms;
- (id)alarmWithSignature:(id)arg1;
- (id)defaultAlarm;
- (id)alarmsExcludingNone;
- (id)alarms;
- (void)incrementSequence;
- (int)sequence;
- (void)setSequence:(int)arg1;
- (void)setStampDate:(id)arg1;
- (id)stampDate;
- (void)setLastModificationDate:(id)arg1;
- (id)lastModificationDate;
- (void)setCreationDate:(id)arg1;
- (id)creationDate;
- (void)setURL:(id)arg1;
- (id)url;
- (void)setClassification:(int)arg1;
- (int)classification;
- (void)setStartDate:(id)arg1;
- (id)startDate;
- (void)forceDatesToGMT;
- (void)setStatus:(int)arg1;
- (int)status;
- (void)setDesc:(id)arg1;
- (id)desc;
- (BOOL)hasAttendeeComments;
- (id)attendeeCommentsForCurrentAttendees;
- (id)attendeeComments;
- (void)setComment:(id)arg1;
- (id)comment;
- (void)adoptInvitationUID:(id)arg1;
- (BOOL)shouldPushInvitationUID;
- (BOOL)hasInvitationUID;
- (id)invitationUIDorUID;
- (void)setInvitationUID:(id)arg1;
- (void)removeInvitationUID;
- (id)invitationUID;
- (BOOL)isEditable;
- (BOOL)isEditableIgnoringInvitationStatus:(BOOL)arg1 ignoringAlarmsOrTravelTime:(BOOL)arg2;
- (BOOL)isEditableIgnoringInvitationStatus:(BOOL)arg1;
- (BOOL)needsServerConfirmation;
- (void)setNeedsServerConfirmation:(BOOL)arg1;
- (unsigned long long)permission;
- (void)setPermission:(unsigned long long)arg1;
- (void)setIconInformation:(id)arg1;
- (id)iconInformation;
- (void)setCancelItemID:(id)arg1;
- (id)cancelItemID;
- (void)setTemplateData:(id)arg1;
- (id)templateData;
- (void)setSummary:(id)arg1;
- (id)summary;
- (void)validateIDs;
- (void)setSharedUIDForMainAndDetached:(id)arg1 localUID:(id)arg2;
- (void)setPrivateComment:(id)arg1;
- (id)privateComment;
- (void)setCalendarServerAccess:(id)arg1;
- (id)calendarServerAccess;
- (BOOL)isCalendarSharedToMe;
@property(readonly, nonatomic) BOOL needsDetachmentDecision;
- (BOOL)isPrivateAndDelegateOrCalendarSharedToMe;
- (BOOL)isPrivate;
- (void)setSharedUID:(id)arg1;
- (id)sharedUID;
- (void)setLocalUID:(id)arg1;
- (id)localUID;
- (void)_propogateAttendeesWithMeAddress:(id)arg1 modifiedProperties:(id)arg2 parentEntity:(id)arg3;
- (void)_propogateAlarmsWithModifiedAlarms:(id)arg1 deletedAlarms:(id)arg2;
- (void)commitAndPropogateChanges:(BOOL)arg1 inManagedObjectContext:(id)arg2;
- (void)commitInManagedObjectContext:(id)arg1;
- (void)commitWithoutBumpInManagedObjectContext:(id)arg1;
- (void)setRepository:(id)arg1;
- (id)repository;
- (BOOL)dirty;
- (void)markAsClean;
- (void)invalidateEntityCaches;
- (void)removeProperty:(id)arg1;
- (void)cleanUp;
- (Class)correspondingOccurrenceClass;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (void)setMainRecurrenceRule:(id)arg1;
- (id)mainRecurrenceRule;
- (void)removeExceptionDate:(id)arg1;
- (void)addExceptionDate:(id)arg1;
- (void)addExceptionDatePropertyValue:(id)arg1;
- (void)removeRecurrenceDate:(id)arg1;
- (void)addRecurrenceDate:(id)arg1;
- (void)addRecurrenceDatePropertyValue:(id)arg1;
- (void)removeExceptionRule:(id)arg1;
- (void)addExceptionRule:(id)arg1;
- (void)removeRecurrenceRule:(id)arg1;
- (void)addRecurrenceRule:(id)arg1;
- (void)setExceptionDates:(id)arg1;
- (void)setRecurrenceDates:(id)arg1;
- (id)exceptionDates;
- (BOOL)hasExceptionDates;
- (id)exceptionRules;
- (id)recurrenceDatesInTimeRange:(id)arg1;
- (id)recurrenceDates;
- (id)recurrenceRules;
- (id)occurrencesOnTimeRange:(id)arg1 withRecurrenceStart:(id)arg2;
- (id)cachedEndDate;
- (id)setCachedEndDate:(id)arg1;
- (BOOL)isInfiniteRecurrence;
- (id)setInfiniteRecurrence;
- (BOOL)hasRuleWithByParameter;
- (BOOL)hasOnlySingleOccurence;
- (void)updateRecurrenceFlag;
- (BOOL)hasRecurrenceProperties;
- (BOOL)hasRecurrenceData;
- (BOOL)needsDetachCheck;
- (void)removeRecurrenceProperties;
- (void)removeAllRecurrences;
- (void)setSingleRecurrenceRule:(id)arg1;
- (void)initRecurrence;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)ensureDurationAlarms;
- (void)forceRSVPTo:(BOOL)arg1;
- (BOOL)isMeInAttendees;
- (void)handleMeCaseInAttendees;
- (void)forceNeedsActionOnNoneAttendees;
- (void)cleanAttachmentInfo;
- (void)cleanParticipationStatus;
- (BOOL)myRSVPStatus;
- (int)myParticipationStatus;
- (int)invitationModeIncludingChildren;
- (int)invitationMode;
- (BOOL)isAnInvitation;
- (void)setMyParticipationStatus:(int)arg1;
- (void)setMyRSVPStatus:(BOOL)arg1;
- (BOOL)summaryMatchesString:(id)arg1;
- (void)setExceptionNSCalendarDates:(id)arg1;
- (void)setRecurrenceNSCalendarDates:(id)arg1;
- (id)exceptionNSCalendarDates;
- (id)recurrenceNSCalendarDates;
- (void)setStampNSCalendarDate:(id)arg1;
- (id)stampNSCalendarDate;
- (void)setLastModificationNSCalendarDate:(id)arg1;
- (id)lastModificationNSCalendarDate;
- (void)setCreationNSCalendarDate:(id)arg1;
- (id)creationNSCalendarDate;
- (void)setStartNSCalendarDate:(id)arg1;
- (id)startNSCalendarDate;
- (void)finishReplyToInvitationWithStatus:(int)arg1 moveToCalendar:(id)arg2 inManagedObjectContext:(id)arg3;
- (void)setRecurID:(id)arg1;
- (id)recurID;
- (void)_setParent:(id)arg1;
- (void)setParentEntity:(id)arg1;
- (id)parentEntity;
- (id)masterEntity;
- (BOOL)isSignificantlyDetached;
- (BOOL)isSignificantlyDetachedIgnoringParticipation:(BOOL)arg1;
- (BOOL)isDetachedEntity;
- (BOOL)hasRecurrenceOrIsDetached;
- (void)deleteFromRepositoryInManagedObjectContext:(id)arg1;
- (void)moveToRepository:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)recurrenceIndicesFromStartDate:(id)arg1;
- (void)unregisterChildEntity:(id)arg1;
- (void)registerChildEntity:(id)arg1;
- (id)recurrenceIDDatesOfChildren;
- (id)childWithRecurrenceIDTag:(id)arg1;
- (id)childWithRecurrenceID:(id)arg1;
- (void)cleanExceptionsAtDate:(id)arg1;
- (void)cleanOldExceptionDates;
- (void)moveChildrenToTime:(id)arg1 fromTime:(id)arg2;
- (id)sliceOn:(id)arg1 inManagedObjectContext:(id)arg2;
- (void)redetach:(id)arg1;
- (void)undeleteDetach:(id)arg1;
- (void)deleteDetach:(id)arg1 inManagedObjectContext:(id)arg2;
- (void)deleteDetach:(id)arg1;
- (void)undetach:(id)arg1;
- (id)detach:(id)arg1 inManagedObjectContext:(id)arg2;
- (void)removeChild:(id)arg1;
- (void)addChild:(id)arg1;
- (id)recurrenceIDTag;
- (BOOL)hasChildren;
- (id)childrenEntities;
- (void)setSearchMetaData:(id)arg1;
- (id)searchMetaData;

@end

