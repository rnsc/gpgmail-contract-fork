//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCMessage.h"

@class MFMailAccount, MFMailbox, NSData, NSString;

@interface MFTOCMessage : MCMessage
{
    NSString *_messageID;	// 88 = 0x58
    BOOL _isInIncomingMail;	// 96 = 0x60
    NSString *_attachment;	// 104 = 0x68
    struct _NSRange _mboxRange;	// 112 = 0x70
}

+ (id)messageIDForSender:(id)arg1 subject:(id)arg2 dateAsTimeInterval:(double)arg3;	// IMP=0x0000000000284d82
@property(copy, nonatomic) NSString *attachment; // @synthesize attachment=_attachment;
@property(nonatomic) struct _NSRange mboxRange; // @synthesize mboxRange=_mboxRange;
@property(nonatomic) BOOL isInIncomingMail; // @synthesize isInIncomingMail=_isInIncomingMail;
- (void).cxx_destruct;	// IMP=0x0000000000286c1a
- (id)remoteID;	// IMP=0x0000000000286a7d
- (id)description;	// IMP=0x000000000028683e
- (unsigned long long)messageSize;	// IMP=0x0000000000286828
- (id)messageID;	// IMP=0x000000000028675d
- (void)setDataSource:(id)arg1;	// IMP=0x00000000002865ed
- (id)dataSource;	// IMP=0x00000000002865c0
@property(readonly, nonatomic) MFMailbox *mailbox;
@property(readonly, nonatomic) MFMailAccount *account;
@property(readonly, copy, nonatomic) NSData *cachedData;
- (unsigned long long)loadCachedInfoFromBytes:(const char *)arg1 length:(unsigned long long)arg2 isDirty:(char *)arg3 usingUniqueStrings:(id)arg4;	// IMP=0x000000000028504b
- (id)init;	// IMP=0x000000000028501e
- (id)initWithMessage:(id)arg1;	// IMP=0x0000000000284e85

@end
