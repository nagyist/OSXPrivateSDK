/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Mail/MFMessageCriterion.h>

@class MFMessageRule;

@interface MFMessageRuleCriterion : MFMessageCriterion
{
    MFMessageRule *_rule;
}

+ (id)conversationsCriterion;
+ (id)noSentCriterion;
+ (id)noTrashCriterion;
+ (id)noJunkCriterion;
@property(nonatomic) __weak MFMessageRule *rule; // @synthesize rule=_rule;
- (void).cxx_destruct;
- (id)objectSpecifier;
- (void)setCriterionIdentifier:(id)arg1;
- (void)setRuleExpression:(id)arg1;
- (void)setRuleQualifier:(unsigned int)arg1;
- (void)setRuleType:(unsigned int)arg1;

@end

