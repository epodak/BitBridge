//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface HAKSocket : NSObject
{
    unsigned long long _port;
    struct __CFSocket *_ipv4Socket;
    struct __CFSocket *_ipv6Socket;
    id <HAKSocketDelegate> _delegate;
}

+ (unsigned long long)_portFromSocket:(struct __CFSocket *)arg1;
@property(nonatomic) struct __CFSocket *ipv6Socket; // @synthesize ipv6Socket=_ipv6Socket;
@property(nonatomic) struct __CFSocket *ipv4Socket; // @synthesize ipv4Socket=_ipv4Socket;
@property __weak id <HAKSocketDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long port; // @synthesize port=_port;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (BOOL)_bindIPV6Socket;
- (BOOL)_bindIPV4Socket;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithPort:(unsigned long long)arg1;

@end

