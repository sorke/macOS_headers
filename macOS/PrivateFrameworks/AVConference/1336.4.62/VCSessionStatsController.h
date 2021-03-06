//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCStatisticsCollector, VCConnectionManager, VCTransportStream;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface VCSessionStatsController : NSObject
{
    AVCStatisticsCollector *_uplinkStatisticsCollector;
    AVCStatisticsCollector *_downlinkStatisticsCollector;
    CDStruct_2756d7ac _remoteStats;
    NSObject<OS_dispatch_source> *_localSessionStatsTimemoutSource;
    unsigned short _statsRequestCounter;
    VCConnectionManager *_connectionManager;
    VCTransportStream *_transportStream;
    double _lastTriggerRateControlTime;
    id _reportingAgentWeak;
    unsigned int _uplinkServerStatsByteUsed;
    unsigned int _downlinkServerStatsByteUsed;
    struct tagVCRealTimeThread *_statsReceiveThread;
    unsigned short _streamID;
    unsigned short _statsArrayIndex;
    unsigned int _previousTotalPacketSent;
    unsigned int _previousTotalPacketReceived;
    unsigned int _uplinkMostRecentSendTimestamp;
    unsigned int _downlinkMostRecentSendTimestamp;
    int _lastProcessedBytesSent;
    int _bytesSentToReport;
    int _maxSentRate;
    int _minSentRate;
    int _lastProcessedBytesReceived;
    int _bytesReceivedToReport;
    int _maxReceivedRate;
    int _minReceivedRate;
    double _lastUpdateTimestamp;
    double _lastTimeReceiveStatsFailed;
    BOOL _isReceiveStatsFailedSymptomReported;
}

- (void)flushRealTimeReportingStats;
- (void)deregisterPeriodicTask;
- (void)registerPeriodicTask;
@property(readonly) id reportingAgent;
- (void)handleRemoteSessionStats:(CDStruct_bb74c5c4 *)arg1;
- (void)statsReceiveStatsPayload;
- (void)triggerRateControlWithLocalSessionStats:(CDStruct_b5e1e8f2)arg1 time:(double)arg2;
- (unsigned short)translateTimestampFromMicro:(double)arg1;
- (void)updateRemoteSessionStats:(CDStruct_2756d7ac)arg1;
- (void)stopLocalSessionStatsUpdate;
- (void)startLocalSessionStatsSend;
- (int)startLocalSessionStatsReceive;
- (void)startLocalSessionStatsUpdate;
- (void)sendLocalStats;
- (void)dealloc;
- (id)initWithConnectionManager:(id)arg1 uplinkStatsCollector:(id)arg2 downlinkStatsCollector:(id)arg3 reportingAgent:(struct opaqueRTCReporting *)arg4 transportSessionID:(unsigned int)arg5 streamID:(unsigned short)arg6 mediaQueue:(struct tagVCMediaQueue *)arg7;

@end

