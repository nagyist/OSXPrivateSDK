/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSXMLElement.h"

@interface NSXMLElement (PKAdditions)
- (void)_setStringValueAsCDATA:(id)arg1;
- (BOOL)_hasChildElements;
- (BOOL)_hasPureTextContent;
- (id)_trimmedStringValue;
- (void)_removeChildren:(id)arg1;
- (void)_replaceAttributesAsDictionary:(id)arg1;
- (id)_attributesDictionary;
- (void)_setBool:(BOOL)arg1 forAttributeName:(id)arg2;
- (void)_setString:(id)arg1 forAttributeName:(id)arg2;
- (id)_attributeForName:(id)arg1 ofAnyElementNamed:(id)arg2;
- (id)_elementsForName:(id)arg1 identifier:(id)arg2;
- (id)_lastElementForName:(id)arg1 createIfNeeded:(BOOL)arg2;
@end

