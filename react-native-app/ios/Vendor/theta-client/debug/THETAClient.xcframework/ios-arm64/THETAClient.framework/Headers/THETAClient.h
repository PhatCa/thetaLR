#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class THETACBaseHttpClientCompanion, THETACKotlinByteArray, THETACKotlinPair<__covariant A, __covariant B>, THETACKtor_httpHttpMethod, THETACBaseHttpClientURLCompanion, THETACKotlinThrowable, THETACKotlinArray<T>, THETACKotlinException, THETACDigestAuthCompanion, THETACMultipartPostClientCompanion, THETACBaseHttpClient, THETACMultipartPostClientImplCompanion, THETACThetaRepositoryCompanion, THETACThetaRepositoryCaptureModeEnum, THETACBurstCaptureBuilder, THETACThetaRepositoryBurstCaptureNumEnum, THETACThetaRepositoryBurstBracketStepEnum, THETACThetaRepositoryBurstCompensationEnum, THETACThetaRepositoryBurstMaxExposureTimeEnum, THETACThetaRepositoryBurstEnableIsoControlEnum, THETACThetaRepositoryBurstOrderEnum, THETACCompositeIntervalCaptureBuilder, THETACContinuousCaptureBuilder, THETACEventWebSocket, THETACLimitlessIntervalCaptureBuilder, THETACThetaRepositoryExif, THETACThetaRepositoryXmp, THETACMultiBracketCaptureBuilder, THETACThetaRepositoryOptions, THETACThetaRepositoryOptionNameEnum, THETACPhotoCaptureBuilder, THETACShotCountSpecifiedIntervalCaptureBuilder, THETACThetaRepositoryThetaInfo, THETACThetaRepositoryThetaState, THETACTimeShiftCaptureBuilder, THETACVideoCaptureBuilder, THETACThetaRepositoryAccessPoint, THETACThetaRepositoryFileTypeEnum, THETACThetaRepositoryThetaFiles, THETACThetaRepositoryStorageEnum, THETACThetaRepositoryPluginInfo, THETACThetaRepositoryAuthModeEnum, THETACThetaRepositoryProxy, THETACThetaRepositoryThetaModel, THETACKotlinEnumCompanion, THETACKotlinEnum<E>, THETACThetaRepositoryAiAutoThumbnailEnumCompanion, THETACThetaRepositoryAiAutoThumbnailEnum, THETACThetaRepositoryApertureEnumCompanion, THETACThetaRepositoryApertureEnum, THETACKotlinRuntimeException, THETACThetaRepositoryThetaRepositoryException, THETACThetaRepositoryAuthModeEnumCompanion, THETACThetaRepositoryBitrateEnumCompanion, THETACThetaRepositoryBitrateEnum, THETACThetaRepositoryBitrateNumberCompanion, THETACThetaRepositoryBitrateNumber, THETACThetaRepositoryBluetoothPowerEnumCompanion, THETACThetaRepositoryBluetoothPowerEnum, THETACThetaRepositoryBluetoothRoleEnumCompanion, THETACThetaRepositoryBluetoothRoleEnum, THETACThetaRepositoryExposureCompensationEnum, THETACThetaRepositoryExposureProgramEnum, THETACThetaRepositoryIsoEnum, THETACThetaRepositoryShutterSpeedEnum, THETACThetaRepositoryWhiteBalanceEnum, THETACThetaRepositoryBracketSetting, THETACThetaRepositoryBracketSettingListCompanion, THETACThetaRepositoryBracketSettingList, THETACThetaRepositoryBurstBracketStepEnumCompanion, THETACThetaRepositoryBurstCaptureNumEnumCompanion, THETACThetaRepositoryBurstCompensationEnumCompanion, THETACThetaRepositoryBurstEnableIsoControlEnumCompanion, THETACThetaRepositoryBurstMaxExposureTimeEnumCompanion, THETACThetaRepositoryBurstModeEnumCompanion, THETACThetaRepositoryBurstModeEnum, THETACThetaRepositoryBurstOption, THETACThetaRepositoryBurstOrderEnumCompanion, THETACThetaRepositoryCameraControlSourceEnumCompanion, THETACThetaRepositoryCameraControlSourceEnum, THETACThetaRepositoryCameraErrorEnumCompanion, THETACThetaRepositoryCameraErrorEnum, THETACThetaRepositoryCameraModeEnumCompanion, THETACThetaRepositoryCameraModeEnum, THETACThetaRepositoryCameraPowerEnumCompanion, THETACThetaRepositoryCameraPowerEnum, THETACThetaRepositoryCaptureModeEnumCompanion, THETACThetaRepositoryCaptureStatusEnumCompanion, THETACThetaRepositoryCaptureStatusEnum, THETACThetaRepositoryChargingStateEnumCompanion, THETACThetaRepositoryChargingStateEnum, THETACThetaRepositoryCodecEnumCompanion, THETACThetaRepositoryCodecEnum, THETACThetaRepositoryConfig, THETACThetaRepositoryTimeout, THETACThetaRepository, THETACThetaRepositoryLanguageEnum, THETACDigestAuth, THETACThetaRepositoryContinuousNumberEnumCompanion, THETACThetaRepositoryContinuousNumberEnum, THETACThetaRepositoryEthernetConfig, THETACThetaRepositoryExposureCompensationEnumCompanion, THETACThetaRepositoryExposureDelayEnumCompanion, THETACThetaRepositoryExposureDelayEnum, THETACThetaRepositoryExposureProgramEnumCompanion, THETACThetaRepositoryFaceDetectEnumCompanion, THETACThetaRepositoryFaceDetectEnum, THETACThetaRepositoryFileFormatEnumCompanion, THETACThetaRepositoryFileFormatEnum, THETACThetaRepositoryFileFormatTypeEnum, THETACThetaRepositoryProjectionTypeEnum, THETACThetaRepositoryFileInfo, THETACThetaRepositoryFilterEnumCompanion, THETACThetaRepositoryFilterEnum, THETACThetaRepositoryGainEnumCompanion, THETACThetaRepositoryGainEnum, THETACThetaRepositoryGpsInfoCompanion, THETACThetaRepositoryGpsInfo, THETACThetaRepositoryGpsTagRecordingEnumCompanion, THETACThetaRepositoryGpsTagRecordingEnum, THETACThetaRepositoryImageStitchingEnumCompanion, THETACThetaRepositoryImageStitchingEnum, THETACThetaRepositoryIsoAutoHighLimitEnumCompanion, THETACThetaRepositoryIsoAutoHighLimitEnum, THETACThetaRepositoryIsoEnumCompanion, THETACThetaRepositoryLanguageEnumCompanion, THETACThetaRepositoryMaxRecordableTimeEnumCompanion, THETACThetaRepositoryMaxRecordableTimeEnum, THETACThetaRepositoryMicrophoneOptionEnumCompanion, THETACThetaRepositoryMicrophoneOptionEnum, THETACThetaRepositoryNetworkTypeEnumCompanion, THETACThetaRepositoryNetworkTypeEnum, THETACThetaRepositoryOffDelayEnumCompanion, THETACThetaRepositoryOffDelayEnum, THETACThetaRepositoryShootingFunctionEnum, THETACThetaRepositoryPowerSavingEnum, THETACThetaRepositoryPresetEnum, THETACThetaRepositoryPreviewFormatEnum, THETACThetaRepositoryShootingMethodEnum, THETACThetaRepositoryTimeShiftSetting, THETACThetaRepositoryTopBottomCorrectionOptionEnum, THETACThetaRepositoryTopBottomCorrectionRotation, THETACThetaRepositoryVideoStitchingEnum, THETACThetaRepositoryVisibilityReductionEnum, THETACThetaRepositoryWhiteBalanceAutoStrengthEnum, THETACThetaRepositoryWlanFrequencyEnum, THETACThetaRepositoryPhotoFileFormatEnumCompanion, THETACThetaRepositoryPhotoFileFormatEnum, THETACThetaRepositoryPowerSavingEnumCompanion, THETACThetaRepositoryPresetEnumCompanion, THETACThetaRepositoryPreviewFormatEnumCompanion, THETACThetaRepositoryProjectionTypeEnumCompanion, THETACThetaRepositoryShootingFunctionEnumCompanion, THETACThetaRepositoryShootingMethodEnumCompanion, THETACThetaRepositoryShutterSpeedEnumCompanion, THETACThetaRepositorySleepDelayEnumCompanion, THETACThetaRepositorySleepDelayEnum, THETACThetaRepositoryStateGpsInfo, THETACEndPoint, THETACThetaRepositoryThetaModelCompanion, THETACThetaRepositoryThetaWebApiExceptionCompanion, THETACThetaRepositoryTimeShiftIntervalEnumCompanion, THETACThetaRepositoryTimeShiftIntervalEnum, THETACThetaRepositoryTopBottomCorrectionOptionEnumCompanion, THETACThetaRepositoryVideoFileFormatEnumCompanion, THETACThetaRepositoryVideoFileFormatEnum, THETACThetaRepositoryVideoStitchingEnumCompanion, THETACThetaRepositoryVisibilityReductionEnumCompanion, THETACThetaRepositoryWhiteBalanceAutoStrengthEnumCompanion, THETACThetaRepositoryWhiteBalanceEnumCompanion, THETACThetaRepositoryWlanFrequencyEnumCompanion, THETACCameraEvent, THETACCapture, THETACBurstCapturing, THETACCaptureBuilder<T>, THETACBurstCapture, THETACCapturingStatusEnum, THETACCapturing, THETACCompositeIntervalCapturing, THETACCompositeIntervalCapture, THETACContinuousCapture, THETACLimitlessIntervalCapturing, THETACLimitlessIntervalCapture, THETACMultiBracketCaptureCompanion, THETACMultiBracketCapturing, THETACMultiBracketCaptureBuilderCompanion, THETACMultiBracketCapture, THETACPhotoCaptureBase, THETACPhotoCaptureBaseBuilder<T>, THETACPhotoCapture, THETACShotCountSpecifiedIntervalCapturing, THETACShotCountSpecifiedIntervalCapture, THETACTimeShiftCapturing, THETACTimeShiftCaptureBuilderCompanion, THETACTimeShiftCapture, THETACVideoCapturing, THETACVideoCapture, THETACEndPointCompanion, NSData, THETACKotlinIllegalStateException, THETACKotlinByteIterator, THETACKtor_httpHttpMethodCompanion, THETACKotlinx_serialization_coreSerializersModule, THETACKotlinx_serialization_coreSerialKind, THETACKotlinNothing;

@protocol THETACMultipartPostClient, THETACKotlinx_coroutines_coreFlow, THETACKotlinSuspendFunction1, THETACKotlinComparable, THETACThetaRepositoryBitrate, THETACThetaRepositoryOffDelay, THETACThetaRepositorySleepDelay, THETACThetaRepositoryMaxRecordableTime, THETACKotlinKClass, THETACEventWebSocketCallback, THETACBurstCaptureStartCaptureCallback, THETACCompositeIntervalCaptureStartCaptureCallback, THETACContinuousCaptureStartCaptureCallback, THETACLimitlessIntervalCaptureStartCaptureCallback, THETACMultiBracketCaptureStartCaptureCallback, THETACPhotoCaptureTakePictureCallback, THETACShotCountSpecifiedIntervalCaptureStartCaptureCallback, THETACTimeShiftCaptureStartCaptureCallback, THETACVideoCaptureStartCaptureCallback, THETACKotlinx_serialization_coreKSerializer, THETACKotlinIterator, THETACKotlinx_coroutines_coreFlowCollector, THETACKotlinFunction, THETACKotlinKDeclarationContainer, THETACKotlinKAnnotatedElement, THETACKotlinKClassifier, THETACKotlinx_serialization_coreEncoder, THETACKotlinx_serialization_coreSerialDescriptor, THETACKotlinx_serialization_coreSerializationStrategy, THETACKotlinx_serialization_coreDecoder, THETACKotlinx_serialization_coreDeserializationStrategy, THETACKotlinx_serialization_coreCompositeEncoder, THETACKotlinAnnotation, THETACKotlinx_serialization_coreCompositeDecoder, THETACKotlinx_serialization_coreSerializersModuleCollector;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface THETACBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface THETACBase (THETACBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface THETACMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface THETACMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorTHETACKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface THETACNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface THETACByte : THETACNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface THETACUByte : THETACNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface THETACShort : THETACNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface THETACUShort : THETACNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface THETACInt : THETACNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface THETACUInt : THETACNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface THETACLong : THETACNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface THETACULong : THETACNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface THETACFloat : THETACNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface THETACDouble : THETACNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface THETACBoolean : THETACNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("BaseHttpClient")))
@interface THETACBaseHttpClient : THETACBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) THETACBaseHttpClientCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)clearResponse __attribute__((swift_name("clearResponse()")));
- (void)close __attribute__((swift_name("close()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)connectEndpoint:(NSString *)endpoint connectionTimeout:(int64_t)connectionTimeout socketTimeout:(int64_t)socketTimeout completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("connect(endpoint:connectionTimeout:socketTimeout:completionHandler:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)isConnected __attribute__((swift_name("isConnected()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)readBodyWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readBody(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)readHeadersWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readHeaders(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)readStatusLineWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readStatusLine(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)writeBytes:(THETACKotlinByteArray *)bytes byteCount:(int32_t)byteCount completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("write(bytes:byteCount:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)writeLine:(NSString *)line completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("write(line:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)writeHeadersHeaders:(NSArray<THETACKotlinPair<NSString *, NSString *> *> *)headers completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("writeHeaders(headers:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)writeRequestLinePath:(NSString *)path method:(THETACKtor_httpHttpMethod *)method completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("writeRequestLine(path:method:completionHandler:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property THETACKotlinByteArray * _Nullable responseBody __attribute__((swift_name("responseBody")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property NSDictionary<NSString *, NSString *> * _Nullable responseHeaders __attribute__((swift_name("responseHeaders")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property int32_t status __attribute__((swift_name("status")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property NSString * _Nullable statusMessage __attribute__((swift_name("statusMessage")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseHttpClient.Companion")))
@interface THETACBaseHttpClientCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACBaseHttpClientCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t HEX_10 __attribute__((swift_name("HEX_10")));
@property (readonly) int32_t HEX_A __attribute__((swift_name("HEX_A")));
@property (readonly) int32_t SEND_BUFFER_SIZE __attribute__((swift_name("SEND_BUFFER_SIZE")));
@property (readonly) THETACKotlinByteArray *lineBuffer __attribute__((swift_name("lineBuffer")));
@property (readonly) THETACKotlinByteArray *receiveBuffer __attribute__((swift_name("receiveBuffer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseHttpClient.URL")))
@interface THETACBaseHttpClientURL : THETACBase
- (instancetype)initWithUrl:(NSString *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACBaseHttpClientURLCompanion *companion __attribute__((swift_name("companion")));
@property NSString *host __attribute__((swift_name("host")));
@property NSString *path __attribute__((swift_name("path")));
@property int32_t port __attribute__((swift_name("port")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseHttpClient.URLCompanion")))
@interface THETACBaseHttpClientURLCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACBaseHttpClientURLCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t DEFAULT_PORT __attribute__((swift_name("DEFAULT_PORT")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface THETACKotlinThrowable : THETACBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(THETACKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(THETACKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (THETACKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface THETACKotlinException : THETACKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(THETACKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(THETACKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BaseHttpClientException")))
@interface THETACBaseHttpClientException : THETACKotlinException
- (instancetype)initWithMsg:(NSString *)msg cause:(THETACKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(msg:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(THETACKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(THETACKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DigestAuth")))
@interface THETACDigestAuth : THETACBase
- (instancetype)initWithUsername:(NSString *)username __attribute__((swift_name("init(username:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithUsername:(NSString *)username password:(NSString * _Nullable)password __attribute__((swift_name("init(username:password:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACDigestAuthCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)makeDigestHeaderUri:(NSString *)uri method:(NSString *)method __attribute__((swift_name("makeDigestHeader(uri:method:)")));
- (void)setAuthHeaderInfoRealm:(NSString * _Nullable)realm nonce:(NSString * _Nullable)nonce qop:(NSString *)qop __attribute__((swift_name("setAuthHeaderInfo(realm:nonce:qop:)")));
@property (readonly) NSString *password __attribute__((swift_name("password")));
@property (readonly) NSString *username __attribute__((swift_name("username")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DigestAuth.Companion")))
@interface THETACDigestAuthCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACDigestAuthCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Greeting")))
@interface THETACGreeting : THETACBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greeting __attribute__((swift_name("greeting()")));
@end

__attribute__((swift_name("MultipartPostClient")))
@protocol THETACMultipartPostClient
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)requestEndpoint:(NSString *)endpoint path:(NSString *)path filePaths:(NSArray<NSString *> *)filePaths connectionTimeout:(int64_t)connectionTimeout socketTimeout:(int64_t)socketTimeout callback:(void (^ _Nullable)(THETACInt *))callback boundary:(NSString *)boundary completionHandler:(void (^)(THETACKotlinByteArray * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("request(endpoint:path:filePaths:connectionTimeout:socketTimeout:callback:boundary:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MultipartPostClientCompanion")))
@interface THETACMultipartPostClientCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACMultipartPostClientCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *BOUNDARY __attribute__((swift_name("BOUNDARY")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MultipartPostClientImpl")))
@interface THETACMultipartPostClientImpl : THETACBaseHttpClient <THETACMultipartPostClient>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) THETACMultipartPostClientImplCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)requestEndpoint:(NSString *)endpoint path:(NSString *)path filePaths:(NSArray<NSString *> *)filePaths connectionTimeout:(int64_t)connectionTimeout socketTimeout:(int64_t)socketTimeout callback:(void (^ _Nullable)(THETACInt *))callback boundary:(NSString *)boundary completionHandler:(void (^)(THETACKotlinByteArray * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("request(endpoint:path:filePaths:connectionTimeout:socketTimeout:callback:boundary:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MultipartPostClientImpl.Companion")))
@interface THETACMultipartPostClientImplCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACMultipartPostClientImplCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t READ_BUFFER_SIZE __attribute__((swift_name("READ_BUFFER_SIZE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform")))
@interface THETACPlatform : THETACBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *platform __attribute__((swift_name("platform")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository")))
@interface THETACThetaRepository : THETACBase
@property (class, readonly, getter=companion) THETACThetaRepositoryCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)cancelVideoConvertWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("cancelVideoConvert(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)convertVideoFormatsFileUrl:(NSString *)fileUrl toLowResolution:(BOOL)toLowResolution applyTopBottomCorrection:(BOOL)applyTopBottomCorrection completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("convertVideoFormats(fileUrl:toLowResolution:applyTopBottomCorrection:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)deleteAccessPointSsid:(NSString *)ssid completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("deleteAccessPoint(ssid:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)deleteAllFilesWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("deleteAllFiles(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)deleteAllImageFilesWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("deleteAllImageFiles(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)deleteAllVideoFilesWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("deleteAllVideoFiles(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)deleteFilesFileUrls:(NSArray<NSString *> *)fileUrls completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("deleteFiles(fileUrls:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)deleteMySettingCaptureMode:(THETACThetaRepositoryCaptureModeEnum *)captureMode completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("deleteMySetting(captureMode:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)finishWlanWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("finishWlan(completionHandler:)")));
- (THETACBurstCaptureBuilder *)getBurstCaptureBuilderBurstCaptureNum:(THETACThetaRepositoryBurstCaptureNumEnum *)burstCaptureNum burstBracketStep:(THETACThetaRepositoryBurstBracketStepEnum *)burstBracketStep burstCompensation:(THETACThetaRepositoryBurstCompensationEnum *)burstCompensation burstMaxExposureTime:(THETACThetaRepositoryBurstMaxExposureTimeEnum *)burstMaxExposureTime burstEnableIsoControl:(THETACThetaRepositoryBurstEnableIsoControlEnum *)burstEnableIsoControl burstOrder:(THETACThetaRepositoryBurstOrderEnum *)burstOrder __attribute__((swift_name("getBurstCaptureBuilder(burstCaptureNum:burstBracketStep:burstCompensation:burstMaxExposureTime:burstEnableIsoControl:burstOrder:)")));
- (THETACCompositeIntervalCaptureBuilder *)getCompositeIntervalCaptureBuilderShootingTimeSec:(int32_t)shootingTimeSec __attribute__((swift_name("getCompositeIntervalCaptureBuilder(shootingTimeSec:)")));
- (THETACContinuousCaptureBuilder *)getContinuousCaptureBuilder __attribute__((swift_name("getContinuousCaptureBuilder()")));
- (THETACEventWebSocket *)getEventWebSocket __attribute__((swift_name("getEventWebSocket()")));
- (THETACLimitlessIntervalCaptureBuilder *)getLimitlessIntervalCaptureBuilder __attribute__((swift_name("getLimitlessIntervalCaptureBuilder()")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (id<THETACKotlinx_coroutines_coreFlow> _Nullable)getLivePreviewAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("getLivePreview()")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)getLivePreviewFrameHandler:(id<THETACKotlinSuspendFunction1>)frameHandler completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("getLivePreview(frameHandler:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)getMetadataFileUrl:(NSString *)fileUrl completionHandler:(void (^)(THETACKotlinPair<THETACThetaRepositoryExif *, THETACThetaRepositoryXmp *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMetadata(fileUrl:completionHandler:)")));
- (THETACMultiBracketCaptureBuilder *)getMultiBracketCaptureBuilder __attribute__((swift_name("getMultiBracketCaptureBuilder()")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)getMySettingCaptureMode:(THETACThetaRepositoryCaptureModeEnum *)captureMode completionHandler:(void (^)(THETACThetaRepositoryOptions * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMySetting(captureMode:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)getMySettingOptionNames:(NSArray<THETACThetaRepositoryOptionNameEnum *> *)optionNames completionHandler:(void (^)(THETACThetaRepositoryOptions * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMySetting(optionNames:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)getOptionsOptionNames:(NSArray<THETACThetaRepositoryOptionNameEnum *> *)optionNames completionHandler:(void (^)(THETACThetaRepositoryOptions * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getOptions(optionNames:completionHandler:)")));
- (THETACPhotoCaptureBuilder *)getPhotoCaptureBuilder __attribute__((swift_name("getPhotoCaptureBuilder()")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)getPluginLicensePackageName:(NSString *)packageName completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPluginLicense(packageName:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)getPluginOrdersWithCompletionHandler:(void (^)(NSArray<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPluginOrders(completionHandler:)")));
- (THETACShotCountSpecifiedIntervalCaptureBuilder *)getShotCountSpecifiedIntervalCaptureBuilderShotCount:(int32_t)shotCount __attribute__((swift_name("getShotCountSpecifiedIntervalCaptureBuilder(shotCount:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)getThetaInfoWithCompletionHandler:(void (^)(THETACThetaRepositoryThetaInfo * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getThetaInfo(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)getThetaLicenseWithCompletionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getThetaLicense(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)getThetaStateWithCompletionHandler:(void (^)(THETACThetaRepositoryThetaState * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getThetaState(completionHandler:)")));
- (THETACTimeShiftCaptureBuilder *)getTimeShiftCaptureBuilder __attribute__((swift_name("getTimeShiftCaptureBuilder()")));
- (THETACVideoCaptureBuilder *)getVideoCaptureBuilder __attribute__((swift_name("getVideoCaptureBuilder()")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)listAccessPointsWithCompletionHandler:(void (^)(NSArray<THETACThetaRepositoryAccessPoint *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("listAccessPoints(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)listFilesFileType:(THETACThetaRepositoryFileTypeEnum *)fileType startPosition:(int32_t)startPosition entryCount:(int32_t)entryCount completionHandler:(void (^)(THETACThetaRepositoryThetaFiles * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("listFiles(fileType:startPosition:entryCount:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)listFilesFileType:(THETACThetaRepositoryFileTypeEnum *)fileType startPosition:(int32_t)startPosition entryCount:(int32_t)entryCount storage:(THETACThetaRepositoryStorageEnum * _Nullable)storage completionHandler:(void (^)(THETACThetaRepositoryThetaFiles * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("listFiles(fileType:startPosition:entryCount:storage:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)listPluginsWithCompletionHandler:(void (^)(NSArray<THETACThetaRepositoryPluginInfo *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("listPlugins(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)resetWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("reset(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)restoreSettingsWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("restoreSettings(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)setAccessPointDynamicallySsid:(NSString *)ssid ssidStealth:(BOOL)ssidStealth authMode:(THETACThetaRepositoryAuthModeEnum *)authMode password:(NSString *)password connectionPriority:(int32_t)connectionPriority proxy:(THETACThetaRepositoryProxy * _Nullable)proxy completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("setAccessPointDynamically(ssid:ssidStealth:authMode:password:connectionPriority:proxy:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)setAccessPointStaticallySsid:(NSString *)ssid ssidStealth:(BOOL)ssidStealth authMode:(THETACThetaRepositoryAuthModeEnum *)authMode password:(NSString * _Nullable)password connectionPriority:(int32_t)connectionPriority ipAddress:(NSString *)ipAddress subnetMask:(NSString *)subnetMask defaultGateway:(NSString *)defaultGateway proxy:(THETACThetaRepositoryProxy * _Nullable)proxy completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("setAccessPointStatically(ssid:ssidStealth:authMode:password:connectionPriority:ipAddress:subnetMask:defaultGateway:proxy:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)setBluetoothDeviceUuid:(NSString *)uuid completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("setBluetoothDevice(uuid:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)setMySettingCaptureMode:(THETACThetaRepositoryCaptureModeEnum *)captureMode options:(THETACThetaRepositoryOptions *)options completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("setMySetting(captureMode:options:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)setOptionsOptions:(THETACThetaRepositoryOptions *)options completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("setOptions(options:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)setPluginPackageName:(NSString *)packageName completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("setPlugin(packageName:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)setPluginOrdersPlugins:(NSArray<NSString *> *)plugins completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("setPluginOrders(plugins:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)startPluginPackageName:(NSString * _Nullable)packageName completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("startPlugin(packageName:completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)stopPluginWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("stopPlugin(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)stopSelfTimerWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("stopSelfTimer(completionHandler:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)updateFirmwareApiPath:(NSString *)apiPath filePaths:(NSArray<NSString *> *)filePaths connectionTimeout:(int64_t)connectionTimeout socketTimeout:(int64_t)socketTimeout callback:(void (^ _Nullable)(THETACInt *))callback completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("updateFirmware(apiPath:filePaths:connectionTimeout:socketTimeout:callback:completionHandler:)")));
@property (readonly) THETACThetaRepositoryThetaModel * _Nullable cameraModel __attribute__((swift_name("cameraModel")));
@property (readonly) NSString *endpoint __attribute__((swift_name("endpoint")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.AccessPoint")))
@interface THETACThetaRepositoryAccessPoint : THETACBase
- (instancetype)initWithSsid:(NSString *)ssid ssidStealth:(BOOL)ssidStealth authMode:(THETACThetaRepositoryAuthModeEnum *)authMode connectionPriority:(int32_t)connectionPriority usingDhcp:(BOOL)usingDhcp ipAddress:(NSString * _Nullable)ipAddress subnetMask:(NSString * _Nullable)subnetMask defaultGateway:(NSString * _Nullable)defaultGateway proxy:(THETACThetaRepositoryProxy * _Nullable)proxy __attribute__((swift_name("init(ssid:ssidStealth:authMode:connectionPriority:usingDhcp:ipAddress:subnetMask:defaultGateway:proxy:)"))) __attribute__((objc_designated_initializer));
- (THETACThetaRepositoryAccessPoint *)doCopySsid:(NSString *)ssid ssidStealth:(BOOL)ssidStealth authMode:(THETACThetaRepositoryAuthModeEnum *)authMode connectionPriority:(int32_t)connectionPriority usingDhcp:(BOOL)usingDhcp ipAddress:(NSString * _Nullable)ipAddress subnetMask:(NSString * _Nullable)subnetMask defaultGateway:(NSString * _Nullable)defaultGateway proxy:(THETACThetaRepositoryProxy * _Nullable)proxy __attribute__((swift_name("doCopy(ssid:ssidStealth:authMode:connectionPriority:usingDhcp:ipAddress:subnetMask:defaultGateway:proxy:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACThetaRepositoryAuthModeEnum *authMode __attribute__((swift_name("authMode")));
@property (readonly) int32_t connectionPriority __attribute__((swift_name("connectionPriority")));
@property (readonly) NSString * _Nullable defaultGateway __attribute__((swift_name("defaultGateway")));
@property (readonly) NSString * _Nullable ipAddress __attribute__((swift_name("ipAddress")));
@property (readonly) THETACThetaRepositoryProxy * _Nullable proxy __attribute__((swift_name("proxy")));
@property (readonly) NSString *ssid __attribute__((swift_name("ssid")));
@property (readonly) BOOL ssidStealth __attribute__((swift_name("ssidStealth")));
@property (readonly) NSString * _Nullable subnetMask __attribute__((swift_name("subnetMask")));
@property (readonly) BOOL usingDhcp __attribute__((swift_name("usingDhcp")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol THETACKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface THETACKotlinEnum<E> : THETACBase <THETACKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.AiAutoThumbnailEnum")))
@interface THETACThetaRepositoryAiAutoThumbnailEnum : THETACKotlinEnum<THETACThetaRepositoryAiAutoThumbnailEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryAiAutoThumbnailEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryAiAutoThumbnailEnum *on __attribute__((swift_name("on")));
@property (class, readonly) THETACThetaRepositoryAiAutoThumbnailEnum *off __attribute__((swift_name("off")));
+ (THETACKotlinArray<THETACThetaRepositoryAiAutoThumbnailEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryAiAutoThumbnailEnum *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.AiAutoThumbnailEnumCompanion")))
@interface THETACThetaRepositoryAiAutoThumbnailEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryAiAutoThumbnailEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ApertureEnum")))
@interface THETACThetaRepositoryApertureEnum : THETACKotlinEnum<THETACThetaRepositoryApertureEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryApertureEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryApertureEnum *apertureAuto __attribute__((swift_name("apertureAuto")));
@property (class, readonly) THETACThetaRepositoryApertureEnum *aperture20 __attribute__((swift_name("aperture20")));
@property (class, readonly) THETACThetaRepositoryApertureEnum *aperture21 __attribute__((swift_name("aperture21")));
@property (class, readonly) THETACThetaRepositoryApertureEnum *aperture24 __attribute__((swift_name("aperture24")));
@property (class, readonly) THETACThetaRepositoryApertureEnum *aperture35 __attribute__((swift_name("aperture35")));
@property (class, readonly) THETACThetaRepositoryApertureEnum *aperture56 __attribute__((swift_name("aperture56")));
+ (THETACKotlinArray<THETACThetaRepositoryApertureEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryApertureEnum *> *entries __attribute__((swift_name("entries")));
@property (readonly) float value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ApertureEnumCompanion")))
@interface THETACThetaRepositoryApertureEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryApertureEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryApertureEnum * _Nullable)getValue:(float)value __attribute__((swift_name("get(value:)")));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface THETACKotlinRuntimeException : THETACKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(THETACKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(THETACKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("ThetaRepository.ThetaRepositoryException")))
@interface THETACThetaRepositoryThetaRepositoryException : THETACKotlinRuntimeException
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(THETACKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(THETACKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ArgumentException")))
@interface THETACThetaRepositoryArgumentException : THETACThetaRepositoryThetaRepositoryException
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.AuthModeEnum")))
@interface THETACThetaRepositoryAuthModeEnum : THETACKotlinEnum<THETACThetaRepositoryAuthModeEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryAuthModeEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryAuthModeEnum *none __attribute__((swift_name("none")));
@property (class, readonly) THETACThetaRepositoryAuthModeEnum *wep __attribute__((swift_name("wep")));
@property (class, readonly) THETACThetaRepositoryAuthModeEnum *wpa __attribute__((swift_name("wpa")));
+ (THETACKotlinArray<THETACThetaRepositoryAuthModeEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryAuthModeEnum *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.AuthModeEnumCompanion")))
@interface THETACThetaRepositoryAuthModeEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryAuthModeEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("ThetaRepositoryBitrate")))
@protocol THETACThetaRepositoryBitrate
@required
@property (readonly) NSString *rawValue __attribute__((swift_name("rawValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.BitrateEnum")))
@interface THETACThetaRepositoryBitrateEnum : THETACKotlinEnum<THETACThetaRepositoryBitrateEnum *> <THETACThetaRepositoryBitrate>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryBitrateEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryBitrateEnum *auto_ __attribute__((swift_name("auto_")));
@property (class, readonly) THETACThetaRepositoryBitrateEnum *fine __attribute__((swift_name("fine")));
@property (class, readonly) THETACThetaRepositoryBitrateEnum *normal __attribute__((swift_name("normal")));
@property (class, readonly) THETACThetaRepositoryBitrateEnum *economy __attribute__((swift_name("economy")));
+ (THETACKotlinArray<THETACThetaRepositoryBitrateEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryBitrateEnum *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *rawValue __attribute__((swift_name("rawValue")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.BitrateEnumCompanion")))
@interface THETACThetaRepositoryBitrateEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryBitrateEnumCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACThetaRepositoryBitrate> _Nullable)getStr:(NSString *)str __attribute__((swift_name("get(str:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.BitrateNumber")))
@interface THETACThetaRepositoryBitrateNumber : THETACBase <THETACThetaRepositoryBitrate>
- (instancetype)initWithValue:(int32_t)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACThetaRepositoryBitrateNumberCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
@property (readonly) NSString *rawValue __attribute__((swift_name("rawValue")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.BitrateNumberCompanion")))
@interface THETACThetaRepositoryBitrateNumberCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryBitrateNumberCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryBitrateNumber * _Nullable)getStr:(NSString *)str __attribute__((swift_name("get(str:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.BluetoothPowerEnum")))
@interface THETACThetaRepositoryBluetoothPowerEnum : THETACKotlinEnum<THETACThetaRepositoryBluetoothPowerEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryBluetoothPowerEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryBluetoothPowerEnum *on __attribute__((swift_name("on")));
@property (class, readonly) THETACThetaRepositoryBluetoothPowerEnum *off __attribute__((swift_name("off")));
+ (THETACKotlinArray<THETACThetaRepositoryBluetoothPowerEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryBluetoothPowerEnum *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.BluetoothPowerEnumCompanion")))
@interface THETACThetaRepositoryBluetoothPowerEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryBluetoothPowerEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.BluetoothRoleEnum")))
@interface THETACThetaRepositoryBluetoothRoleEnum : THETACKotlinEnum<THETACThetaRepositoryBluetoothRoleEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryBluetoothRoleEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryBluetoothRoleEnum *central __attribute__((swift_name("central")));
@property (class, readonly) THETACThetaRepositoryBluetoothRoleEnum *peripheral __attribute__((swift_name("peripheral")));
@property (class, readonly) THETACThetaRepositoryBluetoothRoleEnum *centralPeripheral __attribute__((swift_name("centralPeripheral")));
+ (THETACKotlinArray<THETACThetaRepositoryBluetoothRoleEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryBluetoothRoleEnum *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.BluetoothRoleEnumCompanion")))
@interface THETACThetaRepositoryBluetoothRoleEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryBluetoothRoleEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.BracketSetting")))
@interface THETACThetaRepositoryBracketSetting : THETACBase
- (instancetype)initWithAperture:(THETACThetaRepositoryApertureEnum * _Nullable)aperture colorTemperature:(THETACInt * _Nullable)colorTemperature exposureCompensation:(THETACThetaRepositoryExposureCompensationEnum * _Nullable)exposureCompensation exposureProgram:(THETACThetaRepositoryExposureProgramEnum * _Nullable)exposureProgram iso:(THETACThetaRepositoryIsoEnum * _Nullable)iso shutterSpeed:(THETACThetaRepositoryShutterSpeedEnum * _Nullable)shutterSpeed whiteBalance:(THETACThetaRepositoryWhiteBalanceEnum * _Nullable)whiteBalance __attribute__((swift_name("init(aperture:colorTemperature:exposureCompensation:exposureProgram:iso:shutterSpeed:whiteBalance:)"))) __attribute__((objc_designated_initializer));
- (THETACThetaRepositoryBracketSetting *)doCopyAperture:(THETACThetaRepositoryApertureEnum * _Nullable)aperture colorTemperature:(THETACInt * _Nullable)colorTemperature exposureCompensation:(THETACThetaRepositoryExposureCompensationEnum * _Nullable)exposureCompensation exposureProgram:(THETACThetaRepositoryExposureProgramEnum * _Nullable)exposureProgram iso:(THETACThetaRepositoryIsoEnum * _Nullable)iso shutterSpeed:(THETACThetaRepositoryShutterSpeedEnum * _Nullable)shutterSpeed whiteBalance:(THETACThetaRepositoryWhiteBalanceEnum * _Nullable)whiteBalance __attribute__((swift_name("doCopy(aperture:colorTemperature:exposureCompensation:exposureProgram:iso:shutterSpeed:whiteBalance:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property THETACThetaRepositoryApertureEnum * _Nullable aperture __attribute__((swift_name("aperture")));
@property THETACInt * _Nullable colorTemperature __attribute__((swift_name("colorTemperature")));
@property THETACThetaRepositoryExposureCompensationEnum * _Nullable exposureCompensation __attribute__((swift_name("exposureCompensation")));
@property THETACThetaRepositoryExposureProgramEnum * _Nullable exposureProgram __attribute__((swift_name("exposureProgram")));
@property THETACThetaRepositoryIsoEnum * _Nullable iso __attribute__((swift_name("iso")));
@property THETACThetaRepositoryShutterSpeedEnum * _Nullable shutterSpeed __attribute__((swift_name("shutterSpeed")));
@property THETACThetaRepositoryWhiteBalanceEnum * _Nullable whiteBalance __attribute__((swift_name("whiteBalance")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.BracketSettingList")))
@interface THETACThetaRepositoryBracketSettingList : THETACBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithOriginalList:(NSArray<THETACThetaRepositoryBracketSetting *> *)originalList __attribute__((swift_name("init(originalList:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACThetaRepositoryBracketSettingListCompanion *companion __attribute__((swift_name("companion")));
- (THETACThetaRepositoryBracketSettingList *)addSetting:(THETACThetaRepositoryBracketSetting *)setting __attribute__((swift_name("add(setting:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<THETACThetaRepositoryBracketSetting *> *list __attribute__((swift_name("list")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.BracketSettingListCompanion")))
@interface THETACThetaRepositoryBracketSettingListCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryBracketSettingListCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.BurstBracketStepEnum")))
@interface THETACThetaRepositoryBurstBracketStepEnum : THETACKotlinEnum<THETACThetaRepositoryBurstBracketStepEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryBurstBracketStepEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryBurstBracketStepEnum *bracketStep00 __attribute__((swift_name("bracketStep00")));
@property (class, readonly) THETACThetaRepositoryBurstBracketStepEnum *bracketStep03 __attribute__((swift_name("bracketStep03")));
@property (class, readonly) THETACThetaRepositoryBurstBracketStepEnum *bracketStep07 __attribute__((swift_name("bracketStep07")));
@property (class, readonly) THETACThetaRepositoryBurstBracketStepEnum *bracketStep10 __attribute__((swift_name("bracketStep10")));
@property (class, readonly) THETACThetaRepositoryBurstBracketStepEnum *bracketStep13 __attribute__((swift_name("bracketStep13")));
@property (class, readonly) THETACThetaRepositoryBurstBracketStepEnum *bracketStep17 __attribute__((swift_name("bracketStep17")));
@property (class, readonly) THETACThetaRepositoryBurstBracketStepEnum *bracketStep20 __attribute__((swift_name("bracketStep20")));
@property (class, readonly) THETACThetaRepositoryBurstBracketStepEnum *bracketStep23 __attribute__((swift_name("bracketStep23")));
@property (class, readonly) THETACThetaRepositoryBurstBracketStepEnum *bracketStep27 __attribute__((swift_name("bracketStep27")));
@property (class, readonly) THETACThetaRepositoryBurstBracketStepEnum *bracketStep30 __attribute__((swift_name("bracketStep30")));
+ (THETACKotlinArray<THETACThetaRepositoryBurstBracketStepEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryBurstBracketStepEnum *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.BurstBracketStepEnumCompanion")))
@interface THETACThetaRepositoryBurstBracketStepEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryBurstBracketStepEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryBurstBracketStepEnum * _Nullable)getValue:(float)value __attribute__((swift_name("get(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.BurstCaptureNumEnum")))
@interface THETACThetaRepositoryBurstCaptureNumEnum : THETACKotlinEnum<THETACThetaRepositoryBurstCaptureNumEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryBurstCaptureNumEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryBurstCaptureNumEnum *burstCaptureNum1 __attribute__((swift_name("burstCaptureNum1")));
@property (class, readonly) THETACThetaRepositoryBurstCaptureNumEnum *burstCaptureNum3 __attribute__((swift_name("burstCaptureNum3")));
@property (class, readonly) THETACThetaRepositoryBurstCaptureNumEnum *burstCaptureNum5 __attribute__((swift_name("burstCaptureNum5")));
@property (class, readonly) THETACThetaRepositoryBurstCaptureNumEnum *burstCaptureNum7 __attribute__((swift_name("burstCaptureNum7")));
@property (class, readonly) THETACThetaRepositoryBurstCaptureNumEnum *burstCaptureNum9 __attribute__((swift_name("burstCaptureNum9")));
+ (THETACKotlinArray<THETACThetaRepositoryBurstCaptureNumEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryBurstCaptureNumEnum *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.BurstCaptureNumEnumCompanion")))
@interface THETACThetaRepositoryBurstCaptureNumEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryBurstCaptureNumEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryBurstCaptureNumEnum * _Nullable)getValue:(int32_t)value __attribute__((swift_name("get(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.BurstCompensationEnum")))
@interface THETACThetaRepositoryBurstCompensationEnum : THETACKotlinEnum<THETACThetaRepositoryBurstCompensationEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryBurstCompensationEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationDown50 __attribute__((swift_name("burstCompensationDown50")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationDown47 __attribute__((swift_name("burstCompensationDown47")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationDown43 __attribute__((swift_name("burstCompensationDown43")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationDown40 __attribute__((swift_name("burstCompensationDown40")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationDown37 __attribute__((swift_name("burstCompensationDown37")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationDown33 __attribute__((swift_name("burstCompensationDown33")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationDown30 __attribute__((swift_name("burstCompensationDown30")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationDown27 __attribute__((swift_name("burstCompensationDown27")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationDown23 __attribute__((swift_name("burstCompensationDown23")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationDown20 __attribute__((swift_name("burstCompensationDown20")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationDown17 __attribute__((swift_name("burstCompensationDown17")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationDown13 __attribute__((swift_name("burstCompensationDown13")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationDown10 __attribute__((swift_name("burstCompensationDown10")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationDown07 __attribute__((swift_name("burstCompensationDown07")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationDown03 __attribute__((swift_name("burstCompensationDown03")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensation00 __attribute__((swift_name("burstCompensation00")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationUp03 __attribute__((swift_name("burstCompensationUp03")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationUp07 __attribute__((swift_name("burstCompensationUp07")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationUp10 __attribute__((swift_name("burstCompensationUp10")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationUp13 __attribute__((swift_name("burstCompensationUp13")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationUp17 __attribute__((swift_name("burstCompensationUp17")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationUp20 __attribute__((swift_name("burstCompensationUp20")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationUp23 __attribute__((swift_name("burstCompensationUp23")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationUp27 __attribute__((swift_name("burstCompensationUp27")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationUp30 __attribute__((swift_name("burstCompensationUp30")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationUp33 __attribute__((swift_name("burstCompensationUp33")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationUp37 __attribute__((swift_name("burstCompensationUp37")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationUp40 __attribute__((swift_name("burstCompensationUp40")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationUp43 __attribute__((swift_name("burstCompensationUp43")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationUp47 __attribute__((swift_name("burstCompensationUp47")));
@property (class, readonly) THETACThetaRepositoryBurstCompensationEnum *burstCompensationUp50 __attribute__((swift_name("burstCompensationUp50")));
+ (THETACKotlinArray<THETACThetaRepositoryBurstCompensationEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryBurstCompensationEnum *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.BurstCompensationEnumCompanion")))
@interface THETACThetaRepositoryBurstCompensationEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryBurstCompensationEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryBurstCompensationEnum * _Nullable)getValue:(float)value __attribute__((swift_name("get(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.BurstEnableIsoControlEnum")))
@interface THETACThetaRepositoryBurstEnableIsoControlEnum : THETACKotlinEnum<THETACThetaRepositoryBurstEnableIsoControlEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryBurstEnableIsoControlEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryBurstEnableIsoControlEnum *off __attribute__((swift_name("off")));
@property (class, readonly) THETACThetaRepositoryBurstEnableIsoControlEnum *on __attribute__((swift_name("on")));
+ (THETACKotlinArray<THETACThetaRepositoryBurstEnableIsoControlEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryBurstEnableIsoControlEnum *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.BurstEnableIsoControlEnumCompanion")))
@interface THETACThetaRepositoryBurstEnableIsoControlEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryBurstEnableIsoControlEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryBurstEnableIsoControlEnum * _Nullable)getValue:(int32_t)value __attribute__((swift_name("get(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.BurstMaxExposureTimeEnum")))
@interface THETACThetaRepositoryBurstMaxExposureTimeEnum : THETACKotlinEnum<THETACThetaRepositoryBurstMaxExposureTimeEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryBurstMaxExposureTimeEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryBurstMaxExposureTimeEnum *maxExposureTime05 __attribute__((swift_name("maxExposureTime05")));
@property (class, readonly) THETACThetaRepositoryBurstMaxExposureTimeEnum *maxExposureTime0625 __attribute__((swift_name("maxExposureTime0625")));
@property (class, readonly) THETACThetaRepositoryBurstMaxExposureTimeEnum *maxExposureTime076923076 __attribute__((swift_name("maxExposureTime076923076")));
@property (class, readonly) THETACThetaRepositoryBurstMaxExposureTimeEnum *maxExposureTime1 __attribute__((swift_name("maxExposureTime1")));
@property (class, readonly) THETACThetaRepositoryBurstMaxExposureTimeEnum *maxExposureTime13 __attribute__((swift_name("maxExposureTime13")));
@property (class, readonly) THETACThetaRepositoryBurstMaxExposureTimeEnum *maxExposureTime16 __attribute__((swift_name("maxExposureTime16")));
@property (class, readonly) THETACThetaRepositoryBurstMaxExposureTimeEnum *maxExposureTime2 __attribute__((swift_name("maxExposureTime2")));
@property (class, readonly) THETACThetaRepositoryBurstMaxExposureTimeEnum *maxExposureTime25 __attribute__((swift_name("maxExposureTime25")));
@property (class, readonly) THETACThetaRepositoryBurstMaxExposureTimeEnum *maxExposureTime32 __attribute__((swift_name("maxExposureTime32")));
@property (class, readonly) THETACThetaRepositoryBurstMaxExposureTimeEnum *maxExposureTime4 __attribute__((swift_name("maxExposureTime4")));
@property (class, readonly) THETACThetaRepositoryBurstMaxExposureTimeEnum *maxExposureTime5 __attribute__((swift_name("maxExposureTime5")));
@property (class, readonly) THETACThetaRepositoryBurstMaxExposureTimeEnum *maxExposureTime6 __attribute__((swift_name("maxExposureTime6")));
@property (class, readonly) THETACThetaRepositoryBurstMaxExposureTimeEnum *maxExposureTime8 __attribute__((swift_name("maxExposureTime8")));
@property (class, readonly) THETACThetaRepositoryBurstMaxExposureTimeEnum *maxExposureTime10 __attribute__((swift_name("maxExposureTime10")));
@property (class, readonly) THETACThetaRepositoryBurstMaxExposureTimeEnum *maxExposureTime13_ __attribute__((swift_name("maxExposureTime13_")));
@property (class, readonly) THETACThetaRepositoryBurstMaxExposureTimeEnum *maxExposureTime15 __attribute__((swift_name("maxExposureTime15")));
@property (class, readonly) THETACThetaRepositoryBurstMaxExposureTimeEnum *maxExposureTime20 __attribute__((swift_name("maxExposureTime20")));
@property (class, readonly) THETACThetaRepositoryBurstMaxExposureTimeEnum *maxExposureTime25_ __attribute__((swift_name("maxExposureTime25_")));
@property (class, readonly) THETACThetaRepositoryBurstMaxExposureTimeEnum *maxExposureTime30 __attribute__((swift_name("maxExposureTime30")));
@property (class, readonly) THETACThetaRepositoryBurstMaxExposureTimeEnum *maxExposureTime40 __attribute__((swift_name("maxExposureTime40")));
@property (class, readonly) THETACThetaRepositoryBurstMaxExposureTimeEnum *maxExposureTime50 __attribute__((swift_name("maxExposureTime50")));
@property (class, readonly) THETACThetaRepositoryBurstMaxExposureTimeEnum *maxExposureTime60 __attribute__((swift_name("maxExposureTime60")));
+ (THETACKotlinArray<THETACThetaRepositoryBurstMaxExposureTimeEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryBurstMaxExposureTimeEnum *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.BurstMaxExposureTimeEnumCompanion")))
@interface THETACThetaRepositoryBurstMaxExposureTimeEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryBurstMaxExposureTimeEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryBurstMaxExposureTimeEnum * _Nullable)getValue:(double)value __attribute__((swift_name("get(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.BurstModeEnum")))
@interface THETACThetaRepositoryBurstModeEnum : THETACKotlinEnum<THETACThetaRepositoryBurstModeEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryBurstModeEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryBurstModeEnum *on __attribute__((swift_name("on")));
@property (class, readonly) THETACThetaRepositoryBurstModeEnum *off __attribute__((swift_name("off")));
+ (THETACKotlinArray<THETACThetaRepositoryBurstModeEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryBurstModeEnum *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.BurstModeEnumCompanion")))
@interface THETACThetaRepositoryBurstModeEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryBurstModeEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.BurstOption")))
@interface THETACThetaRepositoryBurstOption : THETACBase
- (instancetype)initWithBurstCaptureNum:(THETACThetaRepositoryBurstCaptureNumEnum * _Nullable)burstCaptureNum burstBracketStep:(THETACThetaRepositoryBurstBracketStepEnum * _Nullable)burstBracketStep burstCompensation:(THETACThetaRepositoryBurstCompensationEnum * _Nullable)burstCompensation burstMaxExposureTime:(THETACThetaRepositoryBurstMaxExposureTimeEnum * _Nullable)burstMaxExposureTime burstEnableIsoControl:(THETACThetaRepositoryBurstEnableIsoControlEnum * _Nullable)burstEnableIsoControl burstOrder:(THETACThetaRepositoryBurstOrderEnum * _Nullable)burstOrder __attribute__((swift_name("init(burstCaptureNum:burstBracketStep:burstCompensation:burstMaxExposureTime:burstEnableIsoControl:burstOrder:)"))) __attribute__((objc_designated_initializer));
- (THETACThetaRepositoryBurstOption *)doCopyBurstCaptureNum:(THETACThetaRepositoryBurstCaptureNumEnum * _Nullable)burstCaptureNum burstBracketStep:(THETACThetaRepositoryBurstBracketStepEnum * _Nullable)burstBracketStep burstCompensation:(THETACThetaRepositoryBurstCompensationEnum * _Nullable)burstCompensation burstMaxExposureTime:(THETACThetaRepositoryBurstMaxExposureTimeEnum * _Nullable)burstMaxExposureTime burstEnableIsoControl:(THETACThetaRepositoryBurstEnableIsoControlEnum * _Nullable)burstEnableIsoControl burstOrder:(THETACThetaRepositoryBurstOrderEnum * _Nullable)burstOrder __attribute__((swift_name("doCopy(burstCaptureNum:burstBracketStep:burstCompensation:burstMaxExposureTime:burstEnableIsoControl:burstOrder:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACThetaRepositoryBurstBracketStepEnum * _Nullable burstBracketStep __attribute__((swift_name("burstBracketStep")));
@property (readonly) THETACThetaRepositoryBurstCaptureNumEnum * _Nullable burstCaptureNum __attribute__((swift_name("burstCaptureNum")));
@property (readonly) THETACThetaRepositoryBurstCompensationEnum * _Nullable burstCompensation __attribute__((swift_name("burstCompensation")));
@property (readonly) THETACThetaRepositoryBurstEnableIsoControlEnum * _Nullable burstEnableIsoControl __attribute__((swift_name("burstEnableIsoControl")));
@property (readonly) THETACThetaRepositoryBurstMaxExposureTimeEnum * _Nullable burstMaxExposureTime __attribute__((swift_name("burstMaxExposureTime")));
@property (readonly) THETACThetaRepositoryBurstOrderEnum * _Nullable burstOrder __attribute__((swift_name("burstOrder")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.BurstOrderEnum")))
@interface THETACThetaRepositoryBurstOrderEnum : THETACKotlinEnum<THETACThetaRepositoryBurstOrderEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryBurstOrderEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryBurstOrderEnum *burstBracketOrder0 __attribute__((swift_name("burstBracketOrder0")));
@property (class, readonly) THETACThetaRepositoryBurstOrderEnum *burstBracketOrder1 __attribute__((swift_name("burstBracketOrder1")));
+ (THETACKotlinArray<THETACThetaRepositoryBurstOrderEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryBurstOrderEnum *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.BurstOrderEnumCompanion")))
@interface THETACThetaRepositoryBurstOrderEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryBurstOrderEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryBurstOrderEnum * _Nullable)getValue:(int32_t)value __attribute__((swift_name("get(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.CameraControlSourceEnum")))
@interface THETACThetaRepositoryCameraControlSourceEnum : THETACKotlinEnum<THETACThetaRepositoryCameraControlSourceEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryCameraControlSourceEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryCameraControlSourceEnum *camera __attribute__((swift_name("camera")));
@property (class, readonly) THETACThetaRepositoryCameraControlSourceEnum *app __attribute__((swift_name("app")));
+ (THETACKotlinArray<THETACThetaRepositoryCameraControlSourceEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryCameraControlSourceEnum *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.CameraControlSourceEnumCompanion")))
@interface THETACThetaRepositoryCameraControlSourceEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryCameraControlSourceEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.CameraErrorEnum")))
@interface THETACThetaRepositoryCameraErrorEnum : THETACKotlinEnum<THETACThetaRepositoryCameraErrorEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryCameraErrorEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryCameraErrorEnum *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) THETACThetaRepositoryCameraErrorEnum *noMemory __attribute__((swift_name("noMemory")));
@property (class, readonly) THETACThetaRepositoryCameraErrorEnum *fileNumberOver __attribute__((swift_name("fileNumberOver")));
@property (class, readonly) THETACThetaRepositoryCameraErrorEnum *noDateSetting __attribute__((swift_name("noDateSetting")));
@property (class, readonly) THETACThetaRepositoryCameraErrorEnum *readError __attribute__((swift_name("readError")));
@property (class, readonly) THETACThetaRepositoryCameraErrorEnum *notSupportedMediaType __attribute__((swift_name("notSupportedMediaType")));
@property (class, readonly) THETACThetaRepositoryCameraErrorEnum *notSupportedFileSystem __attribute__((swift_name("notSupportedFileSystem")));
@property (class, readonly) THETACThetaRepositoryCameraErrorEnum *mediaNotReady __attribute__((swift_name("mediaNotReady")));
@property (class, readonly) THETACThetaRepositoryCameraErrorEnum *notEnoughBattery __attribute__((swift_name("notEnoughBattery")));
@property (class, readonly) THETACThetaRepositoryCameraErrorEnum *invalidFile __attribute__((swift_name("invalidFile")));
@property (class, readonly) THETACThetaRepositoryCameraErrorEnum *pluginBootError __attribute__((swift_name("pluginBootError")));
@property (class, readonly) THETACThetaRepositoryCameraErrorEnum *inProgressError __attribute__((swift_name("inProgressError")));
@property (class, readonly) THETACThetaRepositoryCameraErrorEnum *cannotRecording __attribute__((swift_name("cannotRecording")));
@property (class, readonly) THETACThetaRepositoryCameraErrorEnum *cannotRecordLowbat __attribute__((swift_name("cannotRecordLowbat")));
@property (class, readonly) THETACThetaRepositoryCameraErrorEnum *captureHwFailed __attribute__((swift_name("captureHwFailed")));
@property (class, readonly) THETACThetaRepositoryCameraErrorEnum *captureSwFailed __attribute__((swift_name("captureSwFailed")));
@property (class, readonly) THETACThetaRepositoryCameraErrorEnum *internalMemAccessFail __attribute__((swift_name("internalMemAccessFail")));
@property (class, readonly) THETACThetaRepositoryCameraErrorEnum *unexpectedError __attribute__((swift_name("unexpectedError")));
@property (class, readonly) THETACThetaRepositoryCameraErrorEnum *batteryChargeFail __attribute__((swift_name("batteryChargeFail")));
@property (class, readonly) THETACThetaRepositoryCameraErrorEnum *highTemperatureWarning __attribute__((swift_name("highTemperatureWarning")));
@property (class, readonly) THETACThetaRepositoryCameraErrorEnum *highTemperature __attribute__((swift_name("highTemperature")));
@property (class, readonly) THETACThetaRepositoryCameraErrorEnum *batteryHighTemperature __attribute__((swift_name("batteryHighTemperature")));
@property (class, readonly) THETACThetaRepositoryCameraErrorEnum *compassCalibration __attribute__((swift_name("compassCalibration")));
+ (THETACKotlinArray<THETACThetaRepositoryCameraErrorEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryCameraErrorEnum *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.CameraErrorEnumCompanion")))
@interface THETACThetaRepositoryCameraErrorEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryCameraErrorEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.CameraModeEnum")))
@interface THETACThetaRepositoryCameraModeEnum : THETACKotlinEnum<THETACThetaRepositoryCameraModeEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryCameraModeEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryCameraModeEnum *capture __attribute__((swift_name("capture")));
@property (class, readonly) THETACThetaRepositoryCameraModeEnum *playback __attribute__((swift_name("playback")));
@property (class, readonly) THETACThetaRepositoryCameraModeEnum *setting __attribute__((swift_name("setting")));
@property (class, readonly) THETACThetaRepositoryCameraModeEnum *plugin __attribute__((swift_name("plugin")));
+ (THETACKotlinArray<THETACThetaRepositoryCameraModeEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryCameraModeEnum *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.CameraModeEnumCompanion")))
@interface THETACThetaRepositoryCameraModeEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryCameraModeEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.CameraPowerEnum")))
@interface THETACThetaRepositoryCameraPowerEnum : THETACKotlinEnum<THETACThetaRepositoryCameraPowerEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryCameraPowerEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryCameraPowerEnum *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) THETACThetaRepositoryCameraPowerEnum *on __attribute__((swift_name("on")));
@property (class, readonly) THETACThetaRepositoryCameraPowerEnum *off __attribute__((swift_name("off")));
@property (class, readonly) THETACThetaRepositoryCameraPowerEnum *powerSaving __attribute__((swift_name("powerSaving")));
@property (class, readonly) THETACThetaRepositoryCameraPowerEnum *silentMode __attribute__((swift_name("silentMode")));
+ (THETACKotlinArray<THETACThetaRepositoryCameraPowerEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryCameraPowerEnum *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.CameraPowerEnumCompanion")))
@interface THETACThetaRepositoryCameraPowerEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryCameraPowerEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.CaptureModeEnum")))
@interface THETACThetaRepositoryCaptureModeEnum : THETACKotlinEnum<THETACThetaRepositoryCaptureModeEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryCaptureModeEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryCaptureModeEnum *image __attribute__((swift_name("image")));
@property (class, readonly) THETACThetaRepositoryCaptureModeEnum *video __attribute__((swift_name("video")));
@property (class, readonly) THETACThetaRepositoryCaptureModeEnum *liveStreaming __attribute__((swift_name("liveStreaming")));
@property (class, readonly) THETACThetaRepositoryCaptureModeEnum *interval __attribute__((swift_name("interval")));
@property (class, readonly) THETACThetaRepositoryCaptureModeEnum *preset __attribute__((swift_name("preset")));
+ (THETACKotlinArray<THETACThetaRepositoryCaptureModeEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryCaptureModeEnum *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.CaptureModeEnumCompanion")))
@interface THETACThetaRepositoryCaptureModeEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryCaptureModeEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.CaptureStatusEnum")))
@interface THETACThetaRepositoryCaptureStatusEnum : THETACKotlinEnum<THETACThetaRepositoryCaptureStatusEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryCaptureStatusEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryCaptureStatusEnum *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) THETACThetaRepositoryCaptureStatusEnum *shooting __attribute__((swift_name("shooting")));
@property (class, readonly) THETACThetaRepositoryCaptureStatusEnum *idle __attribute__((swift_name("idle")));
@property (class, readonly) THETACThetaRepositoryCaptureStatusEnum *selfTimerCountdown __attribute__((swift_name("selfTimerCountdown")));
@property (class, readonly) THETACThetaRepositoryCaptureStatusEnum *bracketShooting __attribute__((swift_name("bracketShooting")));
@property (class, readonly) THETACThetaRepositoryCaptureStatusEnum *converting __attribute__((swift_name("converting")));
@property (class, readonly) THETACThetaRepositoryCaptureStatusEnum *timeShiftShooting __attribute__((swift_name("timeShiftShooting")));
@property (class, readonly) THETACThetaRepositoryCaptureStatusEnum *continuousShooting __attribute__((swift_name("continuousShooting")));
@property (class, readonly) THETACThetaRepositoryCaptureStatusEnum *retrospectiveImageRecording __attribute__((swift_name("retrospectiveImageRecording")));
@property (class, readonly) THETACThetaRepositoryCaptureStatusEnum *burstShooting __attribute__((swift_name("burstShooting")));
+ (THETACKotlinArray<THETACThetaRepositoryCaptureStatusEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryCaptureStatusEnum *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.CaptureStatusEnumCompanion")))
@interface THETACThetaRepositoryCaptureStatusEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryCaptureStatusEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ChargingStateEnum")))
@interface THETACThetaRepositoryChargingStateEnum : THETACKotlinEnum<THETACThetaRepositoryChargingStateEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryChargingStateEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryChargingStateEnum *charging __attribute__((swift_name("charging")));
@property (class, readonly) THETACThetaRepositoryChargingStateEnum *completed __attribute__((swift_name("completed")));
@property (class, readonly) THETACThetaRepositoryChargingStateEnum *notCharging __attribute__((swift_name("notCharging")));
+ (THETACKotlinArray<THETACThetaRepositoryChargingStateEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryChargingStateEnum *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ChargingStateEnumCompanion")))
@interface THETACThetaRepositoryChargingStateEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryChargingStateEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.CodecEnum")))
@interface THETACThetaRepositoryCodecEnum : THETACKotlinEnum<THETACThetaRepositoryCodecEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryCodecEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryCodecEnum *h264mp4avc __attribute__((swift_name("h264mp4avc")));
+ (THETACKotlinArray<THETACThetaRepositoryCodecEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryCodecEnum *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.CodecEnumCompanion")))
@interface THETACThetaRepositoryCodecEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryCodecEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryCodecEnum * _Nullable)getValue:(NSString *)value __attribute__((swift_name("get(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.Companion")))
@interface THETACThetaRepositoryCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)doNewInstanceEndpoint:(NSString *)endpoint config:(THETACThetaRepositoryConfig * _Nullable)config timeout:(THETACThetaRepositoryTimeout * _Nullable)timeout completionHandler:(void (^)(THETACThetaRepository * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("doNewInstance(endpoint:config:timeout:completionHandler:)")));
@property (readonly, getter=doInitConfig) THETACThetaRepositoryConfig * _Nullable initConfig __attribute__((swift_name("initConfig")));
@property (readonly) THETACThetaRepositoryConfig * _Nullable restoreConfig __attribute__((swift_name("restoreConfig")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.Config")))
@interface THETACThetaRepositoryConfig : THETACBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithDateTime:(NSString * _Nullable)dateTime language:(THETACThetaRepositoryLanguageEnum * _Nullable)language offDelay:(id<THETACThetaRepositoryOffDelay> _Nullable)offDelay sleepDelay:(id<THETACThetaRepositorySleepDelay> _Nullable)sleepDelay shutterVolume:(THETACInt * _Nullable)shutterVolume clientMode:(THETACDigestAuth * _Nullable)clientMode __attribute__((swift_name("init(dateTime:language:offDelay:sleepDelay:shutterVolume:clientMode:)"))) __attribute__((objc_designated_initializer));
- (THETACThetaRepositoryConfig *)doCopyDateTime:(NSString * _Nullable)dateTime language:(THETACThetaRepositoryLanguageEnum * _Nullable)language offDelay:(id<THETACThetaRepositoryOffDelay> _Nullable)offDelay sleepDelay:(id<THETACThetaRepositorySleepDelay> _Nullable)sleepDelay shutterVolume:(THETACInt * _Nullable)shutterVolume clientMode:(THETACDigestAuth * _Nullable)clientMode __attribute__((swift_name("doCopy(dateTime:language:offDelay:sleepDelay:shutterVolume:clientMode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property THETACDigestAuth * _Nullable clientMode __attribute__((swift_name("clientMode")));
@property NSString * _Nullable dateTime __attribute__((swift_name("dateTime")));
@property THETACThetaRepositoryLanguageEnum * _Nullable language __attribute__((swift_name("language")));
@property id<THETACThetaRepositoryOffDelay> _Nullable offDelay __attribute__((swift_name("offDelay")));
@property THETACInt * _Nullable shutterVolume __attribute__((swift_name("shutterVolume")));
@property id<THETACThetaRepositorySleepDelay> _Nullable sleepDelay __attribute__((swift_name("sleepDelay")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ContinuousNumberEnum")))
@interface THETACThetaRepositoryContinuousNumberEnum : THETACKotlinEnum<THETACThetaRepositoryContinuousNumberEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryContinuousNumberEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryContinuousNumberEnum *off __attribute__((swift_name("off")));
@property (class, readonly) THETACThetaRepositoryContinuousNumberEnum *max1 __attribute__((swift_name("max1")));
@property (class, readonly) THETACThetaRepositoryContinuousNumberEnum *max2 __attribute__((swift_name("max2")));
@property (class, readonly) THETACThetaRepositoryContinuousNumberEnum *max3 __attribute__((swift_name("max3")));
@property (class, readonly) THETACThetaRepositoryContinuousNumberEnum *max4 __attribute__((swift_name("max4")));
@property (class, readonly) THETACThetaRepositoryContinuousNumberEnum *max5 __attribute__((swift_name("max5")));
@property (class, readonly) THETACThetaRepositoryContinuousNumberEnum *max6 __attribute__((swift_name("max6")));
@property (class, readonly) THETACThetaRepositoryContinuousNumberEnum *max7 __attribute__((swift_name("max7")));
@property (class, readonly) THETACThetaRepositoryContinuousNumberEnum *max8 __attribute__((swift_name("max8")));
@property (class, readonly) THETACThetaRepositoryContinuousNumberEnum *max9 __attribute__((swift_name("max9")));
@property (class, readonly) THETACThetaRepositoryContinuousNumberEnum *max10 __attribute__((swift_name("max10")));
@property (class, readonly) THETACThetaRepositoryContinuousNumberEnum *max11 __attribute__((swift_name("max11")));
@property (class, readonly) THETACThetaRepositoryContinuousNumberEnum *max12 __attribute__((swift_name("max12")));
@property (class, readonly) THETACThetaRepositoryContinuousNumberEnum *max13 __attribute__((swift_name("max13")));
@property (class, readonly) THETACThetaRepositoryContinuousNumberEnum *max14 __attribute__((swift_name("max14")));
@property (class, readonly) THETACThetaRepositoryContinuousNumberEnum *max15 __attribute__((swift_name("max15")));
@property (class, readonly) THETACThetaRepositoryContinuousNumberEnum *max16 __attribute__((swift_name("max16")));
@property (class, readonly) THETACThetaRepositoryContinuousNumberEnum *max17 __attribute__((swift_name("max17")));
@property (class, readonly) THETACThetaRepositoryContinuousNumberEnum *max18 __attribute__((swift_name("max18")));
@property (class, readonly) THETACThetaRepositoryContinuousNumberEnum *max19 __attribute__((swift_name("max19")));
@property (class, readonly) THETACThetaRepositoryContinuousNumberEnum *max20 __attribute__((swift_name("max20")));
@property (class, readonly) THETACThetaRepositoryContinuousNumberEnum *unsupported __attribute__((swift_name("unsupported")));
+ (THETACKotlinArray<THETACThetaRepositoryContinuousNumberEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryContinuousNumberEnum *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ContinuousNumberEnumCompanion")))
@interface THETACThetaRepositoryContinuousNumberEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryContinuousNumberEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryContinuousNumberEnum *)getValue:(int32_t)value __attribute__((swift_name("get(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.EthernetConfig")))
@interface THETACThetaRepositoryEthernetConfig : THETACBase
- (instancetype)initWithUsingDhcp:(BOOL)usingDhcp ipAddress:(NSString * _Nullable)ipAddress subnetMask:(NSString * _Nullable)subnetMask defaultGateway:(NSString * _Nullable)defaultGateway proxy:(THETACThetaRepositoryProxy * _Nullable)proxy __attribute__((swift_name("init(usingDhcp:ipAddress:subnetMask:defaultGateway:proxy:)"))) __attribute__((objc_designated_initializer));
- (THETACThetaRepositoryEthernetConfig *)doCopyUsingDhcp:(BOOL)usingDhcp ipAddress:(NSString * _Nullable)ipAddress subnetMask:(NSString * _Nullable)subnetMask defaultGateway:(NSString * _Nullable)defaultGateway proxy:(THETACThetaRepositoryProxy * _Nullable)proxy __attribute__((swift_name("doCopy(usingDhcp:ipAddress:subnetMask:defaultGateway:proxy:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable defaultGateway __attribute__((swift_name("defaultGateway")));
@property (readonly) NSString * _Nullable ipAddress __attribute__((swift_name("ipAddress")));
@property (readonly) THETACThetaRepositoryProxy * _Nullable proxy __attribute__((swift_name("proxy")));
@property (readonly) NSString * _Nullable subnetMask __attribute__((swift_name("subnetMask")));
@property (readonly) BOOL usingDhcp __attribute__((swift_name("usingDhcp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.Exif")))
@interface THETACThetaRepositoryExif : THETACBase
- (instancetype)initWithExifVersion:(NSString *)exifVersion dateTime:(NSString *)dateTime imageWidth:(THETACInt * _Nullable)imageWidth imageLength:(THETACInt * _Nullable)imageLength gpsLatitude:(THETACDouble * _Nullable)gpsLatitude gpsLongitude:(THETACDouble * _Nullable)gpsLongitude __attribute__((swift_name("init(exifVersion:dateTime:imageWidth:imageLength:gpsLatitude:gpsLongitude:)"))) __attribute__((objc_designated_initializer));
- (THETACThetaRepositoryExif *)doCopyExifVersion:(NSString *)exifVersion dateTime:(NSString *)dateTime imageWidth:(THETACInt * _Nullable)imageWidth imageLength:(THETACInt * _Nullable)imageLength gpsLatitude:(THETACDouble * _Nullable)gpsLatitude gpsLongitude:(THETACDouble * _Nullable)gpsLongitude __attribute__((swift_name("doCopy(exifVersion:dateTime:imageWidth:imageLength:gpsLatitude:gpsLongitude:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *dateTime __attribute__((swift_name("dateTime")));
@property (readonly) NSString *exifVersion __attribute__((swift_name("exifVersion")));
@property (readonly) THETACDouble * _Nullable gpsLatitude __attribute__((swift_name("gpsLatitude")));
@property (readonly) THETACDouble * _Nullable gpsLongitude __attribute__((swift_name("gpsLongitude")));
@property (readonly) THETACInt * _Nullable imageLength __attribute__((swift_name("imageLength")));
@property (readonly) THETACInt * _Nullable imageWidth __attribute__((swift_name("imageWidth")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ExposureCompensationEnum")))
@interface THETACThetaRepositoryExposureCompensationEnum : THETACKotlinEnum<THETACThetaRepositoryExposureCompensationEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryExposureCompensationEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryExposureCompensationEnum *m20 __attribute__((swift_name("m20")));
@property (class, readonly) THETACThetaRepositoryExposureCompensationEnum *m17 __attribute__((swift_name("m17")));
@property (class, readonly) THETACThetaRepositoryExposureCompensationEnum *m13 __attribute__((swift_name("m13")));
@property (class, readonly) THETACThetaRepositoryExposureCompensationEnum *m10 __attribute__((swift_name("m10")));
@property (class, readonly) THETACThetaRepositoryExposureCompensationEnum *m07 __attribute__((swift_name("m07")));
@property (class, readonly) THETACThetaRepositoryExposureCompensationEnum *m03 __attribute__((swift_name("m03")));
@property (class, readonly) THETACThetaRepositoryExposureCompensationEnum *zero __attribute__((swift_name("zero")));
@property (class, readonly) THETACThetaRepositoryExposureCompensationEnum *p03 __attribute__((swift_name("p03")));
@property (class, readonly) THETACThetaRepositoryExposureCompensationEnum *p07 __attribute__((swift_name("p07")));
@property (class, readonly) THETACThetaRepositoryExposureCompensationEnum *p10 __attribute__((swift_name("p10")));
@property (class, readonly) THETACThetaRepositoryExposureCompensationEnum *p13 __attribute__((swift_name("p13")));
@property (class, readonly) THETACThetaRepositoryExposureCompensationEnum *p17 __attribute__((swift_name("p17")));
@property (class, readonly) THETACThetaRepositoryExposureCompensationEnum *p20 __attribute__((swift_name("p20")));
+ (THETACKotlinArray<THETACThetaRepositoryExposureCompensationEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryExposureCompensationEnum *> *entries __attribute__((swift_name("entries")));
@property (readonly) float value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ExposureCompensationEnumCompanion")))
@interface THETACThetaRepositoryExposureCompensationEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryExposureCompensationEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryExposureCompensationEnum * _Nullable)getValue:(float)value __attribute__((swift_name("get(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ExposureDelayEnum")))
@interface THETACThetaRepositoryExposureDelayEnum : THETACKotlinEnum<THETACThetaRepositoryExposureDelayEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryExposureDelayEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryExposureDelayEnum *delayOff __attribute__((swift_name("delayOff")));
@property (class, readonly) THETACThetaRepositoryExposureDelayEnum *delay1 __attribute__((swift_name("delay1")));
@property (class, readonly) THETACThetaRepositoryExposureDelayEnum *delay2 __attribute__((swift_name("delay2")));
@property (class, readonly) THETACThetaRepositoryExposureDelayEnum *delay3 __attribute__((swift_name("delay3")));
@property (class, readonly) THETACThetaRepositoryExposureDelayEnum *delay4 __attribute__((swift_name("delay4")));
@property (class, readonly) THETACThetaRepositoryExposureDelayEnum *delay5 __attribute__((swift_name("delay5")));
@property (class, readonly) THETACThetaRepositoryExposureDelayEnum *delay6 __attribute__((swift_name("delay6")));
@property (class, readonly) THETACThetaRepositoryExposureDelayEnum *delay7 __attribute__((swift_name("delay7")));
@property (class, readonly) THETACThetaRepositoryExposureDelayEnum *delay8 __attribute__((swift_name("delay8")));
@property (class, readonly) THETACThetaRepositoryExposureDelayEnum *delay9 __attribute__((swift_name("delay9")));
@property (class, readonly) THETACThetaRepositoryExposureDelayEnum *delay10 __attribute__((swift_name("delay10")));
@property (class, readonly) THETACThetaRepositoryExposureDelayEnum *doNotUpdateMySettingCondition __attribute__((swift_name("doNotUpdateMySettingCondition")));
+ (THETACKotlinArray<THETACThetaRepositoryExposureDelayEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryExposureDelayEnum *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t sec __attribute__((swift_name("sec")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ExposureDelayEnumCompanion")))
@interface THETACThetaRepositoryExposureDelayEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryExposureDelayEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryExposureDelayEnum * _Nullable)getSec:(int32_t)sec __attribute__((swift_name("get(sec:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ExposureProgramEnum")))
@interface THETACThetaRepositoryExposureProgramEnum : THETACKotlinEnum<THETACThetaRepositoryExposureProgramEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryExposureProgramEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryExposureProgramEnum *manual __attribute__((swift_name("manual")));
@property (class, readonly) THETACThetaRepositoryExposureProgramEnum *normalProgram __attribute__((swift_name("normalProgram")));
@property (class, readonly) THETACThetaRepositoryExposureProgramEnum *aperturePriority __attribute__((swift_name("aperturePriority")));
@property (class, readonly) THETACThetaRepositoryExposureProgramEnum *shutterPriority __attribute__((swift_name("shutterPriority")));
@property (class, readonly) THETACThetaRepositoryExposureProgramEnum *isoPriority __attribute__((swift_name("isoPriority")));
+ (THETACKotlinArray<THETACThetaRepositoryExposureProgramEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryExposureProgramEnum *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ExposureProgramEnumCompanion")))
@interface THETACThetaRepositoryExposureProgramEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryExposureProgramEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryExposureProgramEnum * _Nullable)getValue:(int32_t)value __attribute__((swift_name("get(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.FaceDetectEnum")))
@interface THETACThetaRepositoryFaceDetectEnum : THETACKotlinEnum<THETACThetaRepositoryFaceDetectEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryFaceDetectEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryFaceDetectEnum *on __attribute__((swift_name("on")));
@property (class, readonly) THETACThetaRepositoryFaceDetectEnum *off __attribute__((swift_name("off")));
+ (THETACKotlinArray<THETACThetaRepositoryFaceDetectEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryFaceDetectEnum *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.FaceDetectEnumCompanion")))
@interface THETACThetaRepositoryFaceDetectEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryFaceDetectEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.FileFormatEnum")))
@interface THETACThetaRepositoryFileFormatEnum : THETACKotlinEnum<THETACThetaRepositoryFileFormatEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryFileFormatEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *image2k __attribute__((swift_name("image2k")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *image5k __attribute__((swift_name("image5k")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *image67k __attribute__((swift_name("image67k")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *rawP67k __attribute__((swift_name("rawP67k")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *image55k __attribute__((swift_name("image55k")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *image11k __attribute__((swift_name("image11k")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *imageDoNotUpdateMySettingCondition __attribute__((swift_name("imageDoNotUpdateMySettingCondition")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *videoHd __attribute__((swift_name("videoHd")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *videoFullHd __attribute__((swift_name("videoFullHd")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *video2k __attribute__((swift_name("video2k")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *video2kNoCodec __attribute__((swift_name("video2kNoCodec")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *video4k __attribute__((swift_name("video4k")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *video4kNoCodec __attribute__((swift_name("video4kNoCodec")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *video2k30f __attribute__((swift_name("video2k30f")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *video2k60f __attribute__((swift_name("video2k60f")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *video27k27522f __attribute__((swift_name("video27k27522f")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *video27k27525f __attribute__((swift_name("video27k27525f")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *video27k275210f __attribute__((swift_name("video27k275210f")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *video27k275230f __attribute__((swift_name("video27k275230f")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *video27k1f __attribute__((swift_name("video27k1f")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *video27k2f __attribute__((swift_name("video27k2f")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *video36k1f __attribute__((swift_name("video36k1f")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *video36k2f __attribute__((swift_name("video36k2f")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *video4k10f __attribute__((swift_name("video4k10f")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *video4k15f __attribute__((swift_name("video4k15f")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *video4k30f __attribute__((swift_name("video4k30f")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *video4k60f __attribute__((swift_name("video4k60f")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *video57k2f __attribute__((swift_name("video57k2f")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *video57k5f __attribute__((swift_name("video57k5f")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *video57k10f __attribute__((swift_name("video57k10f")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *video57k15f __attribute__((swift_name("video57k15f")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *video57k30f __attribute__((swift_name("video57k30f")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *video7k2f __attribute__((swift_name("video7k2f")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *video7k5f __attribute__((swift_name("video7k5f")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *video7k10f __attribute__((swift_name("video7k10f")));
@property (class, readonly) THETACThetaRepositoryFileFormatEnum *videoDoNotUpdateMySettingCondition __attribute__((swift_name("videoDoNotUpdateMySettingCondition")));
+ (THETACKotlinArray<THETACThetaRepositoryFileFormatEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryFileFormatEnum *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString * _Nullable _codec __attribute__((swift_name("_codec")));
@property (readonly) THETACInt * _Nullable _frameRate __attribute__((swift_name("_frameRate")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) THETACThetaRepositoryFileFormatTypeEnum *type __attribute__((swift_name("type")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.FileFormatEnumCompanion")))
@interface THETACThetaRepositoryFileFormatEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryFileFormatEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.FileFormatTypeEnum")))
@interface THETACThetaRepositoryFileFormatTypeEnum : THETACKotlinEnum<THETACThetaRepositoryFileFormatTypeEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) THETACThetaRepositoryFileFormatTypeEnum *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) THETACThetaRepositoryFileFormatTypeEnum *jpeg __attribute__((swift_name("jpeg")));
@property (class, readonly) THETACThetaRepositoryFileFormatTypeEnum *mp4 __attribute__((swift_name("mp4")));
@property (class, readonly) THETACThetaRepositoryFileFormatTypeEnum *raw __attribute__((swift_name("raw")));
+ (THETACKotlinArray<THETACThetaRepositoryFileFormatTypeEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryFileFormatTypeEnum *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.FileInfo")))
@interface THETACThetaRepositoryFileInfo : THETACBase
- (instancetype)initWithName:(NSString *)name fileUrl:(NSString *)fileUrl size:(int64_t)size dateTimeZone:(NSString * _Nullable)dateTimeZone dateTime:(NSString *)dateTime lat:(THETACFloat * _Nullable)lat lng:(THETACFloat * _Nullable)lng width:(THETACInt * _Nullable)width height:(THETACInt * _Nullable)height thumbnailUrl:(NSString *)thumbnailUrl intervalCaptureGroupId:(NSString * _Nullable)intervalCaptureGroupId compositeShootingGroupId:(NSString * _Nullable)compositeShootingGroupId autoBracketGroupId:(NSString * _Nullable)autoBracketGroupId recordTime:(THETACInt * _Nullable)recordTime isProcessed:(THETACBoolean * _Nullable)isProcessed previewUrl:(NSString * _Nullable)previewUrl codec:(THETACThetaRepositoryCodecEnum * _Nullable)codec projectionType:(THETACThetaRepositoryProjectionTypeEnum * _Nullable)projectionType continuousShootingGroupId:(NSString * _Nullable)continuousShootingGroupId frameRate:(THETACInt * _Nullable)frameRate favorite:(THETACBoolean * _Nullable)favorite imageDescription:(NSString * _Nullable)imageDescription storageID:(NSString * _Nullable)storageID __attribute__((swift_name("init(name:fileUrl:size:dateTimeZone:dateTime:lat:lng:width:height:thumbnailUrl:intervalCaptureGroupId:compositeShootingGroupId:autoBracketGroupId:recordTime:isProcessed:previewUrl:codec:projectionType:continuousShootingGroupId:frameRate:favorite:imageDescription:storageID:)"))) __attribute__((objc_designated_initializer));
- (THETACThetaRepositoryFileInfo *)doCopyName:(NSString *)name fileUrl:(NSString *)fileUrl size:(int64_t)size dateTimeZone:(NSString * _Nullable)dateTimeZone dateTime:(NSString *)dateTime lat:(THETACFloat * _Nullable)lat lng:(THETACFloat * _Nullable)lng width:(THETACInt * _Nullable)width height:(THETACInt * _Nullable)height thumbnailUrl:(NSString *)thumbnailUrl intervalCaptureGroupId:(NSString * _Nullable)intervalCaptureGroupId compositeShootingGroupId:(NSString * _Nullable)compositeShootingGroupId autoBracketGroupId:(NSString * _Nullable)autoBracketGroupId recordTime:(THETACInt * _Nullable)recordTime isProcessed:(THETACBoolean * _Nullable)isProcessed previewUrl:(NSString * _Nullable)previewUrl codec:(THETACThetaRepositoryCodecEnum * _Nullable)codec projectionType:(THETACThetaRepositoryProjectionTypeEnum * _Nullable)projectionType continuousShootingGroupId:(NSString * _Nullable)continuousShootingGroupId frameRate:(THETACInt * _Nullable)frameRate favorite:(THETACBoolean * _Nullable)favorite imageDescription:(NSString * _Nullable)imageDescription storageID:(NSString * _Nullable)storageID __attribute__((swift_name("doCopy(name:fileUrl:size:dateTimeZone:dateTime:lat:lng:width:height:thumbnailUrl:intervalCaptureGroupId:compositeShootingGroupId:autoBracketGroupId:recordTime:isProcessed:previewUrl:codec:projectionType:continuousShootingGroupId:frameRate:favorite:imageDescription:storageID:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable autoBracketGroupId __attribute__((swift_name("autoBracketGroupId")));
@property (readonly) THETACThetaRepositoryCodecEnum * _Nullable codec __attribute__((swift_name("codec")));
@property (readonly) NSString * _Nullable compositeShootingGroupId __attribute__((swift_name("compositeShootingGroupId")));
@property (readonly) NSString * _Nullable continuousShootingGroupId __attribute__((swift_name("continuousShootingGroupId")));
@property (readonly) NSString *dateTime __attribute__((swift_name("dateTime")));
@property (readonly) NSString * _Nullable dateTimeZone __attribute__((swift_name("dateTimeZone")));
@property (readonly) THETACBoolean * _Nullable favorite __attribute__((swift_name("favorite")));
@property (readonly) NSString *fileUrl __attribute__((swift_name("fileUrl")));
@property (readonly) THETACInt * _Nullable frameRate __attribute__((swift_name("frameRate")));
@property (readonly) THETACInt * _Nullable height __attribute__((swift_name("height")));
@property (readonly) NSString * _Nullable imageDescription __attribute__((swift_name("imageDescription")));
@property (readonly) NSString * _Nullable intervalCaptureGroupId __attribute__((swift_name("intervalCaptureGroupId")));
@property (readonly) THETACBoolean * _Nullable isProcessed __attribute__((swift_name("isProcessed")));
@property (readonly) THETACFloat * _Nullable lat __attribute__((swift_name("lat")));
@property (readonly) THETACFloat * _Nullable lng __attribute__((swift_name("lng")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable previewUrl __attribute__((swift_name("previewUrl")));
@property (readonly) THETACThetaRepositoryProjectionTypeEnum * _Nullable projectionType __attribute__((swift_name("projectionType")));
@property (readonly) THETACInt * _Nullable recordTime __attribute__((swift_name("recordTime")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) NSString * _Nullable storageID __attribute__((swift_name("storageID")));
@property (readonly) NSString *thumbnailUrl __attribute__((swift_name("thumbnailUrl")));
@property (readonly) THETACInt * _Nullable width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.FileTypeEnum")))
@interface THETACThetaRepositoryFileTypeEnum : THETACKotlinEnum<THETACThetaRepositoryFileTypeEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) THETACThetaRepositoryFileTypeEnum *all __attribute__((swift_name("all")));
@property (class, readonly) THETACThetaRepositoryFileTypeEnum *image __attribute__((swift_name("image")));
@property (class, readonly) THETACThetaRepositoryFileTypeEnum *video __attribute__((swift_name("video")));
+ (THETACKotlinArray<THETACThetaRepositoryFileTypeEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryFileTypeEnum *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.FilterEnum")))
@interface THETACThetaRepositoryFilterEnum : THETACKotlinEnum<THETACThetaRepositoryFilterEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryFilterEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryFilterEnum *off __attribute__((swift_name("off")));
@property (class, readonly) THETACThetaRepositoryFilterEnum *drComp __attribute__((swift_name("drComp")));
@property (class, readonly) THETACThetaRepositoryFilterEnum *noiseReduction __attribute__((swift_name("noiseReduction")));
@property (class, readonly) THETACThetaRepositoryFilterEnum *hdr __attribute__((swift_name("hdr")));
@property (class, readonly) THETACThetaRepositoryFilterEnum *hhHdr __attribute__((swift_name("hhHdr")));
+ (THETACKotlinArray<THETACThetaRepositoryFilterEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryFilterEnum *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.FilterEnumCompanion")))
@interface THETACThetaRepositoryFilterEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryFilterEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.GainEnum")))
@interface THETACThetaRepositoryGainEnum : THETACKotlinEnum<THETACThetaRepositoryGainEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryGainEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryGainEnum *normal __attribute__((swift_name("normal")));
@property (class, readonly) THETACThetaRepositoryGainEnum *megaVolume __attribute__((swift_name("megaVolume")));
@property (class, readonly) THETACThetaRepositoryGainEnum *mute __attribute__((swift_name("mute")));
+ (THETACKotlinArray<THETACThetaRepositoryGainEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryGainEnum *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.GainEnumCompanion")))
@interface THETACThetaRepositoryGainEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryGainEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.GpsInfo")))
@interface THETACThetaRepositoryGpsInfo : THETACBase
- (instancetype)initWithLatitude:(float)latitude longitude:(float)longitude altitude:(float)altitude dateTimeZone:(NSString *)dateTimeZone __attribute__((swift_name("init(latitude:longitude:altitude:dateTimeZone:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACThetaRepositoryGpsInfoCompanion *companion __attribute__((swift_name("companion")));
- (THETACThetaRepositoryGpsInfo *)doCopyLatitude:(float)latitude longitude:(float)longitude altitude:(float)altitude dateTimeZone:(NSString *)dateTimeZone __attribute__((swift_name("doCopy(latitude:longitude:altitude:dateTimeZone:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isDisabled __attribute__((swift_name("isDisabled()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float altitude __attribute__((swift_name("altitude")));
@property (readonly) NSString *dateTimeZone __attribute__((swift_name("dateTimeZone")));
@property (readonly) float latitude __attribute__((swift_name("latitude")));
@property (readonly) float longitude __attribute__((swift_name("longitude")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.GpsInfoCompanion")))
@interface THETACThetaRepositoryGpsInfoCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryGpsInfoCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) THETACThetaRepositoryGpsInfo *disabled __attribute__((swift_name("disabled")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.GpsTagRecordingEnum")))
@interface THETACThetaRepositoryGpsTagRecordingEnum : THETACKotlinEnum<THETACThetaRepositoryGpsTagRecordingEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryGpsTagRecordingEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryGpsTagRecordingEnum *on __attribute__((swift_name("on")));
@property (class, readonly) THETACThetaRepositoryGpsTagRecordingEnum *off __attribute__((swift_name("off")));
+ (THETACKotlinArray<THETACThetaRepositoryGpsTagRecordingEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryGpsTagRecordingEnum *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.GpsTagRecordingEnumCompanion")))
@interface THETACThetaRepositoryGpsTagRecordingEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryGpsTagRecordingEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ImageStitchingEnum")))
@interface THETACThetaRepositoryImageStitchingEnum : THETACKotlinEnum<THETACThetaRepositoryImageStitchingEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryImageStitchingEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryImageStitchingEnum *auto_ __attribute__((swift_name("auto_")));
@property (class, readonly) THETACThetaRepositoryImageStitchingEnum *static_ __attribute__((swift_name("static_")));
@property (class, readonly) THETACThetaRepositoryImageStitchingEnum *dynamic __attribute__((swift_name("dynamic")));
@property (class, readonly) THETACThetaRepositoryImageStitchingEnum *dynamicAuto __attribute__((swift_name("dynamicAuto")));
@property (class, readonly) THETACThetaRepositoryImageStitchingEnum *dynamicSemiAuto __attribute__((swift_name("dynamicSemiAuto")));
@property (class, readonly) THETACThetaRepositoryImageStitchingEnum *dynamicSave __attribute__((swift_name("dynamicSave")));
@property (class, readonly) THETACThetaRepositoryImageStitchingEnum *dynamicLoad __attribute__((swift_name("dynamicLoad")));
@property (class, readonly) THETACThetaRepositoryImageStitchingEnum *none __attribute__((swift_name("none")));
+ (THETACKotlinArray<THETACThetaRepositoryImageStitchingEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryImageStitchingEnum *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ImageStitchingEnumCompanion")))
@interface THETACThetaRepositoryImageStitchingEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryImageStitchingEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.IsoAutoHighLimitEnum")))
@interface THETACThetaRepositoryIsoAutoHighLimitEnum : THETACKotlinEnum<THETACThetaRepositoryIsoAutoHighLimitEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryIsoAutoHighLimitEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryIsoAutoHighLimitEnum *iso100 __attribute__((swift_name("iso100")));
@property (class, readonly) THETACThetaRepositoryIsoAutoHighLimitEnum *iso125 __attribute__((swift_name("iso125")));
@property (class, readonly) THETACThetaRepositoryIsoAutoHighLimitEnum *iso160 __attribute__((swift_name("iso160")));
@property (class, readonly) THETACThetaRepositoryIsoAutoHighLimitEnum *iso200 __attribute__((swift_name("iso200")));
@property (class, readonly) THETACThetaRepositoryIsoAutoHighLimitEnum *iso250 __attribute__((swift_name("iso250")));
@property (class, readonly) THETACThetaRepositoryIsoAutoHighLimitEnum *iso320 __attribute__((swift_name("iso320")));
@property (class, readonly) THETACThetaRepositoryIsoAutoHighLimitEnum *iso400 __attribute__((swift_name("iso400")));
@property (class, readonly) THETACThetaRepositoryIsoAutoHighLimitEnum *iso500 __attribute__((swift_name("iso500")));
@property (class, readonly) THETACThetaRepositoryIsoAutoHighLimitEnum *iso640 __attribute__((swift_name("iso640")));
@property (class, readonly) THETACThetaRepositoryIsoAutoHighLimitEnum *iso800 __attribute__((swift_name("iso800")));
@property (class, readonly) THETACThetaRepositoryIsoAutoHighLimitEnum *iso1000 __attribute__((swift_name("iso1000")));
@property (class, readonly) THETACThetaRepositoryIsoAutoHighLimitEnum *iso1250 __attribute__((swift_name("iso1250")));
@property (class, readonly) THETACThetaRepositoryIsoAutoHighLimitEnum *iso1600 __attribute__((swift_name("iso1600")));
@property (class, readonly) THETACThetaRepositoryIsoAutoHighLimitEnum *iso2000 __attribute__((swift_name("iso2000")));
@property (class, readonly) THETACThetaRepositoryIsoAutoHighLimitEnum *iso2500 __attribute__((swift_name("iso2500")));
@property (class, readonly) THETACThetaRepositoryIsoAutoHighLimitEnum *iso3200 __attribute__((swift_name("iso3200")));
@property (class, readonly) THETACThetaRepositoryIsoAutoHighLimitEnum *iso4000 __attribute__((swift_name("iso4000")));
@property (class, readonly) THETACThetaRepositoryIsoAutoHighLimitEnum *iso5000 __attribute__((swift_name("iso5000")));
@property (class, readonly) THETACThetaRepositoryIsoAutoHighLimitEnum *iso6400 __attribute__((swift_name("iso6400")));
@property (class, readonly) THETACThetaRepositoryIsoAutoHighLimitEnum *doNotUpdateMySettingCondition __attribute__((swift_name("doNotUpdateMySettingCondition")));
+ (THETACKotlinArray<THETACThetaRepositoryIsoAutoHighLimitEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryIsoAutoHighLimitEnum *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.IsoAutoHighLimitEnumCompanion")))
@interface THETACThetaRepositoryIsoAutoHighLimitEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryIsoAutoHighLimitEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryIsoAutoHighLimitEnum * _Nullable)getValue:(int32_t)value __attribute__((swift_name("get(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.IsoEnum")))
@interface THETACThetaRepositoryIsoEnum : THETACKotlinEnum<THETACThetaRepositoryIsoEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryIsoEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryIsoEnum *isoAuto __attribute__((swift_name("isoAuto")));
@property (class, readonly) THETACThetaRepositoryIsoEnum *iso50 __attribute__((swift_name("iso50")));
@property (class, readonly) THETACThetaRepositoryIsoEnum *iso64 __attribute__((swift_name("iso64")));
@property (class, readonly) THETACThetaRepositoryIsoEnum *iso80 __attribute__((swift_name("iso80")));
@property (class, readonly) THETACThetaRepositoryIsoEnum *iso100 __attribute__((swift_name("iso100")));
@property (class, readonly) THETACThetaRepositoryIsoEnum *iso125 __attribute__((swift_name("iso125")));
@property (class, readonly) THETACThetaRepositoryIsoEnum *iso160 __attribute__((swift_name("iso160")));
@property (class, readonly) THETACThetaRepositoryIsoEnum *iso200 __attribute__((swift_name("iso200")));
@property (class, readonly) THETACThetaRepositoryIsoEnum *iso250 __attribute__((swift_name("iso250")));
@property (class, readonly) THETACThetaRepositoryIsoEnum *iso320 __attribute__((swift_name("iso320")));
@property (class, readonly) THETACThetaRepositoryIsoEnum *iso400 __attribute__((swift_name("iso400")));
@property (class, readonly) THETACThetaRepositoryIsoEnum *iso500 __attribute__((swift_name("iso500")));
@property (class, readonly) THETACThetaRepositoryIsoEnum *iso640 __attribute__((swift_name("iso640")));
@property (class, readonly) THETACThetaRepositoryIsoEnum *iso800 __attribute__((swift_name("iso800")));
@property (class, readonly) THETACThetaRepositoryIsoEnum *iso1000 __attribute__((swift_name("iso1000")));
@property (class, readonly) THETACThetaRepositoryIsoEnum *iso1250 __attribute__((swift_name("iso1250")));
@property (class, readonly) THETACThetaRepositoryIsoEnum *iso1600 __attribute__((swift_name("iso1600")));
@property (class, readonly) THETACThetaRepositoryIsoEnum *iso2000 __attribute__((swift_name("iso2000")));
@property (class, readonly) THETACThetaRepositoryIsoEnum *iso2500 __attribute__((swift_name("iso2500")));
@property (class, readonly) THETACThetaRepositoryIsoEnum *iso3200 __attribute__((swift_name("iso3200")));
@property (class, readonly) THETACThetaRepositoryIsoEnum *iso4000 __attribute__((swift_name("iso4000")));
@property (class, readonly) THETACThetaRepositoryIsoEnum *iso5000 __attribute__((swift_name("iso5000")));
@property (class, readonly) THETACThetaRepositoryIsoEnum *iso6400 __attribute__((swift_name("iso6400")));
+ (THETACKotlinArray<THETACThetaRepositoryIsoEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryIsoEnum *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.IsoEnumCompanion")))
@interface THETACThetaRepositoryIsoEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryIsoEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryIsoEnum * _Nullable)getValue:(int32_t)value __attribute__((swift_name("get(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.LanguageEnum")))
@interface THETACThetaRepositoryLanguageEnum : THETACKotlinEnum<THETACThetaRepositoryLanguageEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryLanguageEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryLanguageEnum *de __attribute__((swift_name("de")));
@property (class, readonly) THETACThetaRepositoryLanguageEnum *enGb __attribute__((swift_name("enGb")));
@property (class, readonly) THETACThetaRepositoryLanguageEnum *enUs __attribute__((swift_name("enUs")));
@property (class, readonly) THETACThetaRepositoryLanguageEnum *fr __attribute__((swift_name("fr")));
@property (class, readonly) THETACThetaRepositoryLanguageEnum *it __attribute__((swift_name("it")));
@property (class, readonly) THETACThetaRepositoryLanguageEnum *ja __attribute__((swift_name("ja")));
@property (class, readonly) THETACThetaRepositoryLanguageEnum *ko __attribute__((swift_name("ko")));
@property (class, readonly) THETACThetaRepositoryLanguageEnum *zhCn __attribute__((swift_name("zhCn")));
@property (class, readonly) THETACThetaRepositoryLanguageEnum *zhTw __attribute__((swift_name("zhTw")));
+ (THETACKotlinArray<THETACThetaRepositoryLanguageEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryLanguageEnum *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.LanguageEnumCompanion")))
@interface THETACThetaRepositoryLanguageEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryLanguageEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("ThetaRepositoryMaxRecordableTime")))
@protocol THETACThetaRepositoryMaxRecordableTime
@required
@property (readonly) THETACInt * _Nullable sec_ __attribute__((swift_name("sec_")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.MaxRecordableTimeEnum")))
@interface THETACThetaRepositoryMaxRecordableTimeEnum : THETACKotlinEnum<THETACThetaRepositoryMaxRecordableTimeEnum *> <THETACThetaRepositoryMaxRecordableTime>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryMaxRecordableTimeEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryMaxRecordableTimeEnum *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) THETACThetaRepositoryMaxRecordableTimeEnum *recordableTime180 __attribute__((swift_name("recordableTime180")));
@property (class, readonly) THETACThetaRepositoryMaxRecordableTimeEnum *recordableTime300 __attribute__((swift_name("recordableTime300")));
@property (class, readonly) THETACThetaRepositoryMaxRecordableTimeEnum *recordableTime1500 __attribute__((swift_name("recordableTime1500")));
@property (class, readonly) THETACThetaRepositoryMaxRecordableTimeEnum *recordableTime3000 __attribute__((swift_name("recordableTime3000")));
@property (class, readonly) THETACThetaRepositoryMaxRecordableTimeEnum *recordableTime7200 __attribute__((swift_name("recordableTime7200")));
@property (class, readonly) THETACThetaRepositoryMaxRecordableTimeEnum *doNotUpdateMySettingCondition __attribute__((swift_name("doNotUpdateMySettingCondition")));
+ (THETACKotlinArray<THETACThetaRepositoryMaxRecordableTimeEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryMaxRecordableTimeEnum *> *entries __attribute__((swift_name("entries")));
@property (readonly) THETACInt * _Nullable sec_ __attribute__((swift_name("sec_")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.MaxRecordableTimeEnumCompanion")))
@interface THETACThetaRepositoryMaxRecordableTimeEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryMaxRecordableTimeEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryMaxRecordableTimeEnum *)getSec:(int32_t)sec __attribute__((swift_name("get(sec:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.MicrophoneOptionEnum")))
@interface THETACThetaRepositoryMicrophoneOptionEnum : THETACKotlinEnum<THETACThetaRepositoryMicrophoneOptionEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryMicrophoneOptionEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryMicrophoneOptionEnum *auto_ __attribute__((swift_name("auto_")));
@property (class, readonly) THETACThetaRepositoryMicrophoneOptionEnum *internal __attribute__((swift_name("internal")));
@property (class, readonly) THETACThetaRepositoryMicrophoneOptionEnum *external __attribute__((swift_name("external")));
+ (THETACKotlinArray<THETACThetaRepositoryMicrophoneOptionEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryMicrophoneOptionEnum *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.MicrophoneOptionEnumCompanion")))
@interface THETACThetaRepositoryMicrophoneOptionEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryMicrophoneOptionEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.NetworkTypeEnum")))
@interface THETACThetaRepositoryNetworkTypeEnum : THETACKotlinEnum<THETACThetaRepositoryNetworkTypeEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryNetworkTypeEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryNetworkTypeEnum *direct __attribute__((swift_name("direct")));
@property (class, readonly) THETACThetaRepositoryNetworkTypeEnum *client __attribute__((swift_name("client")));
@property (class, readonly) THETACThetaRepositoryNetworkTypeEnum *ethernet __attribute__((swift_name("ethernet")));
@property (class, readonly) THETACThetaRepositoryNetworkTypeEnum *off __attribute__((swift_name("off")));
+ (THETACKotlinArray<THETACThetaRepositoryNetworkTypeEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryNetworkTypeEnum *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.NetworkTypeEnumCompanion")))
@interface THETACThetaRepositoryNetworkTypeEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryNetworkTypeEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.NotConnectedException")))
@interface THETACThetaRepositoryNotConnectedException : THETACThetaRepositoryThetaRepositoryException
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("ThetaRepositoryOffDelay")))
@protocol THETACThetaRepositoryOffDelay
@required
@property (readonly) int32_t sec __attribute__((swift_name("sec")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.OffDelayEnum")))
@interface THETACThetaRepositoryOffDelayEnum : THETACKotlinEnum<THETACThetaRepositoryOffDelayEnum *> <THETACThetaRepositoryOffDelay>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryOffDelayEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryOffDelayEnum *disable __attribute__((swift_name("disable")));
@property (class, readonly) THETACThetaRepositoryOffDelayEnum *offDelay5m __attribute__((swift_name("offDelay5m")));
@property (class, readonly) THETACThetaRepositoryOffDelayEnum *offDelay10m __attribute__((swift_name("offDelay10m")));
@property (class, readonly) THETACThetaRepositoryOffDelayEnum *offDelay15m __attribute__((swift_name("offDelay15m")));
@property (class, readonly) THETACThetaRepositoryOffDelayEnum *offDelay30m __attribute__((swift_name("offDelay30m")));
+ (THETACKotlinArray<THETACThetaRepositoryOffDelayEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryOffDelayEnum *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t sec __attribute__((swift_name("sec")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.OffDelayEnumCompanion")))
@interface THETACThetaRepositoryOffDelayEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryOffDelayEnumCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACThetaRepositoryOffDelay>)getSec:(int32_t)sec __attribute__((swift_name("get(sec:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.OffDelaySec")))
@interface THETACThetaRepositoryOffDelaySec : THETACBase <THETACThetaRepositoryOffDelay>
- (instancetype)initWithSec:(int32_t)sec __attribute__((swift_name("init(sec:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
@property (readonly) int32_t sec __attribute__((swift_name("sec")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.OptionNameEnum")))
@interface THETACThetaRepositoryOptionNameEnum : THETACKotlinEnum<THETACThetaRepositoryOptionNameEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *aiautothumbnail __attribute__((swift_name("aiautothumbnail")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *aperture __attribute__((swift_name("aperture")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *autobracket __attribute__((swift_name("autobracket")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *bitrate __attribute__((swift_name("bitrate")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *bluetoothpower __attribute__((swift_name("bluetoothpower")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *bluetoothrole __attribute__((swift_name("bluetoothrole")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *burstmode __attribute__((swift_name("burstmode")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *burstoption __attribute__((swift_name("burstoption")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *cameracontrolsource __attribute__((swift_name("cameracontrolsource")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *cameramode __attribute__((swift_name("cameramode")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *camerapower __attribute__((swift_name("camerapower")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *captureinterval __attribute__((swift_name("captureinterval")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *capturemode __attribute__((swift_name("capturemode")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *capturenumber __attribute__((swift_name("capturenumber")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *colortemperature __attribute__((swift_name("colortemperature")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *compositeshootingoutputinterval __attribute__((swift_name("compositeshootingoutputinterval")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *compositeshootingtime __attribute__((swift_name("compositeshootingtime")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *continuousnumber __attribute__((swift_name("continuousnumber")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *datetimezone __attribute__((swift_name("datetimezone")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *ethernetconfig __attribute__((swift_name("ethernetconfig")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *exposurecompensation __attribute__((swift_name("exposurecompensation")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *exposuredelay __attribute__((swift_name("exposuredelay")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *exposureprogram __attribute__((swift_name("exposureprogram")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *facedetect __attribute__((swift_name("facedetect")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *fileformat __attribute__((swift_name("fileformat")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *filter __attribute__((swift_name("filter")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *function __attribute__((swift_name("function")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *gain __attribute__((swift_name("gain")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *gpsinfo __attribute__((swift_name("gpsinfo")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *imagestitching __attribute__((swift_name("imagestitching")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *isgpson __attribute__((swift_name("isgpson")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *iso __attribute__((swift_name("iso")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *isoautohighlimit __attribute__((swift_name("isoautohighlimit")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *language __attribute__((swift_name("language")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *latestenabledexposuredelaytime __attribute__((swift_name("latestenabledexposuredelaytime")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *maxrecordabletime __attribute__((swift_name("maxrecordabletime")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *networktype __attribute__((swift_name("networktype")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *offdelay __attribute__((swift_name("offdelay")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *password __attribute__((swift_name("password")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *powersaving __attribute__((swift_name("powersaving")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *preset __attribute__((swift_name("preset")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *previewformat __attribute__((swift_name("previewformat")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *proxy __attribute__((swift_name("proxy")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *remainingpictures __attribute__((swift_name("remainingpictures")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *remainingvideoseconds __attribute__((swift_name("remainingvideoseconds")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *remainingspace __attribute__((swift_name("remainingspace")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *sleepdelay __attribute__((swift_name("sleepdelay")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *topbottomcorrection __attribute__((swift_name("topbottomcorrection")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *topbottomcorrectionrotation __attribute__((swift_name("topbottomcorrectionrotation")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *totalspace __attribute__((swift_name("totalspace")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *shootingmethod __attribute__((swift_name("shootingmethod")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *shutterspeed __attribute__((swift_name("shutterspeed")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *shuttervolume __attribute__((swift_name("shuttervolume")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *timeshift __attribute__((swift_name("timeshift")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *username __attribute__((swift_name("username")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *videostitching __attribute__((swift_name("videostitching")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *visibilityreduction __attribute__((swift_name("visibilityreduction")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *whitebalance __attribute__((swift_name("whitebalance")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *whitebalanceautostrength __attribute__((swift_name("whitebalanceautostrength")));
@property (class, readonly) THETACThetaRepositoryOptionNameEnum *wlanfrequency __attribute__((swift_name("wlanfrequency")));
+ (THETACKotlinArray<THETACThetaRepositoryOptionNameEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryOptionNameEnum *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@property (readonly) id<THETACKotlinKClass> valueType __attribute__((swift_name("valueType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.Options")))
@interface THETACThetaRepositoryOptions : THETACBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithAiAutoThumbnail:(THETACThetaRepositoryAiAutoThumbnailEnum * _Nullable)aiAutoThumbnail aperture:(THETACThetaRepositoryApertureEnum * _Nullable)aperture autoBracket:(THETACThetaRepositoryBracketSettingList * _Nullable)autoBracket bitrate:(id<THETACThetaRepositoryBitrate> _Nullable)bitrate bluetoothPower:(THETACThetaRepositoryBluetoothPowerEnum * _Nullable)bluetoothPower bluetoothRole:(THETACThetaRepositoryBluetoothRoleEnum * _Nullable)bluetoothRole burstMode:(THETACThetaRepositoryBurstModeEnum * _Nullable)burstMode burstOption:(THETACThetaRepositoryBurstOption * _Nullable)burstOption cameraControlSource:(THETACThetaRepositoryCameraControlSourceEnum * _Nullable)cameraControlSource cameraMode:(THETACThetaRepositoryCameraModeEnum * _Nullable)cameraMode cameraPower:(THETACThetaRepositoryCameraPowerEnum * _Nullable)cameraPower captureInterval:(THETACInt * _Nullable)captureInterval captureMode:(THETACThetaRepositoryCaptureModeEnum * _Nullable)captureMode captureNumber:(THETACInt * _Nullable)captureNumber colorTemperature:(THETACInt * _Nullable)colorTemperature compositeShootingOutputInterval:(THETACInt * _Nullable)compositeShootingOutputInterval compositeShootingTime:(THETACInt * _Nullable)compositeShootingTime continuousNumber:(THETACThetaRepositoryContinuousNumberEnum * _Nullable)continuousNumber dateTimeZone:(NSString * _Nullable)dateTimeZone ethernetConfig:(THETACThetaRepositoryEthernetConfig * _Nullable)ethernetConfig exposureCompensation:(THETACThetaRepositoryExposureCompensationEnum * _Nullable)exposureCompensation exposureDelay:(THETACThetaRepositoryExposureDelayEnum * _Nullable)exposureDelay exposureProgram:(THETACThetaRepositoryExposureProgramEnum * _Nullable)exposureProgram faceDetect:(THETACThetaRepositoryFaceDetectEnum * _Nullable)faceDetect fileFormat:(THETACThetaRepositoryFileFormatEnum * _Nullable)fileFormat filter:(THETACThetaRepositoryFilterEnum * _Nullable)filter function:(THETACThetaRepositoryShootingFunctionEnum * _Nullable)function gain:(THETACThetaRepositoryGainEnum * _Nullable)gain gpsInfo:(THETACThetaRepositoryGpsInfo * _Nullable)gpsInfo imageStitching:(THETACThetaRepositoryImageStitchingEnum * _Nullable)imageStitching isGpsOn:(THETACBoolean * _Nullable)isGpsOn iso:(THETACThetaRepositoryIsoEnum * _Nullable)iso isoAutoHighLimit:(THETACThetaRepositoryIsoAutoHighLimitEnum * _Nullable)isoAutoHighLimit language:(THETACThetaRepositoryLanguageEnum * _Nullable)language latestEnabledExposureDelayTime:(THETACThetaRepositoryExposureDelayEnum * _Nullable)latestEnabledExposureDelayTime maxRecordableTime:(THETACThetaRepositoryMaxRecordableTimeEnum * _Nullable)maxRecordableTime networkType:(THETACThetaRepositoryNetworkTypeEnum * _Nullable)networkType offDelay:(id<THETACThetaRepositoryOffDelay> _Nullable)offDelay password:(NSString * _Nullable)password powerSaving:(THETACThetaRepositoryPowerSavingEnum * _Nullable)powerSaving preset:(THETACThetaRepositoryPresetEnum * _Nullable)preset previewFormat:(THETACThetaRepositoryPreviewFormatEnum * _Nullable)previewFormat proxy:(THETACThetaRepositoryProxy * _Nullable)proxy remainingPictures:(THETACInt * _Nullable)remainingPictures remainingVideoSeconds:(THETACInt * _Nullable)remainingVideoSeconds remainingSpace:(THETACLong * _Nullable)remainingSpace shootingMethod:(THETACThetaRepositoryShootingMethodEnum * _Nullable)shootingMethod shutterSpeed:(THETACThetaRepositoryShutterSpeedEnum * _Nullable)shutterSpeed sleepDelay:(id<THETACThetaRepositorySleepDelay> _Nullable)sleepDelay timeShift:(THETACThetaRepositoryTimeShiftSetting * _Nullable)timeShift topBottomCorrection:(THETACThetaRepositoryTopBottomCorrectionOptionEnum * _Nullable)topBottomCorrection topBottomCorrectionRotation:(THETACThetaRepositoryTopBottomCorrectionRotation * _Nullable)topBottomCorrectionRotation totalSpace:(THETACLong * _Nullable)totalSpace shutterVolume:(THETACInt * _Nullable)shutterVolume username:(NSString * _Nullable)username videoStitching:(THETACThetaRepositoryVideoStitchingEnum * _Nullable)videoStitching visibilityReduction:(THETACThetaRepositoryVisibilityReductionEnum * _Nullable)visibilityReduction whiteBalance:(THETACThetaRepositoryWhiteBalanceEnum * _Nullable)whiteBalance whiteBalanceAutoStrength:(THETACThetaRepositoryWhiteBalanceAutoStrengthEnum * _Nullable)whiteBalanceAutoStrength wlanFrequency:(THETACThetaRepositoryWlanFrequencyEnum * _Nullable)wlanFrequency __attribute__((swift_name("init(aiAutoThumbnail:aperture:autoBracket:bitrate:bluetoothPower:bluetoothRole:burstMode:burstOption:cameraControlSource:cameraMode:cameraPower:captureInterval:captureMode:captureNumber:colorTemperature:compositeShootingOutputInterval:compositeShootingTime:continuousNumber:dateTimeZone:ethernetConfig:exposureCompensation:exposureDelay:exposureProgram:faceDetect:fileFormat:filter:function:gain:gpsInfo:imageStitching:isGpsOn:iso:isoAutoHighLimit:language:latestEnabledExposureDelayTime:maxRecordableTime:networkType:offDelay:password:powerSaving:preset:previewFormat:proxy:remainingPictures:remainingVideoSeconds:remainingSpace:shootingMethod:shutterSpeed:sleepDelay:timeShift:topBottomCorrection:topBottomCorrectionRotation:totalSpace:shutterVolume:username:videoStitching:visibilityReduction:whiteBalance:whiteBalanceAutoStrength:wlanFrequency:)"))) __attribute__((objc_designated_initializer));
- (THETACThetaRepositoryOptions *)doCopyAiAutoThumbnail:(THETACThetaRepositoryAiAutoThumbnailEnum * _Nullable)aiAutoThumbnail aperture:(THETACThetaRepositoryApertureEnum * _Nullable)aperture autoBracket:(THETACThetaRepositoryBracketSettingList * _Nullable)autoBracket bitrate:(id<THETACThetaRepositoryBitrate> _Nullable)bitrate bluetoothPower:(THETACThetaRepositoryBluetoothPowerEnum * _Nullable)bluetoothPower bluetoothRole:(THETACThetaRepositoryBluetoothRoleEnum * _Nullable)bluetoothRole burstMode:(THETACThetaRepositoryBurstModeEnum * _Nullable)burstMode burstOption:(THETACThetaRepositoryBurstOption * _Nullable)burstOption cameraControlSource:(THETACThetaRepositoryCameraControlSourceEnum * _Nullable)cameraControlSource cameraMode:(THETACThetaRepositoryCameraModeEnum * _Nullable)cameraMode cameraPower:(THETACThetaRepositoryCameraPowerEnum * _Nullable)cameraPower captureInterval:(THETACInt * _Nullable)captureInterval captureMode:(THETACThetaRepositoryCaptureModeEnum * _Nullable)captureMode captureNumber:(THETACInt * _Nullable)captureNumber colorTemperature:(THETACInt * _Nullable)colorTemperature compositeShootingOutputInterval:(THETACInt * _Nullable)compositeShootingOutputInterval compositeShootingTime:(THETACInt * _Nullable)compositeShootingTime continuousNumber:(THETACThetaRepositoryContinuousNumberEnum * _Nullable)continuousNumber dateTimeZone:(NSString * _Nullable)dateTimeZone ethernetConfig:(THETACThetaRepositoryEthernetConfig * _Nullable)ethernetConfig exposureCompensation:(THETACThetaRepositoryExposureCompensationEnum * _Nullable)exposureCompensation exposureDelay:(THETACThetaRepositoryExposureDelayEnum * _Nullable)exposureDelay exposureProgram:(THETACThetaRepositoryExposureProgramEnum * _Nullable)exposureProgram faceDetect:(THETACThetaRepositoryFaceDetectEnum * _Nullable)faceDetect fileFormat:(THETACThetaRepositoryFileFormatEnum * _Nullable)fileFormat filter:(THETACThetaRepositoryFilterEnum * _Nullable)filter function:(THETACThetaRepositoryShootingFunctionEnum * _Nullable)function gain:(THETACThetaRepositoryGainEnum * _Nullable)gain gpsInfo:(THETACThetaRepositoryGpsInfo * _Nullable)gpsInfo imageStitching:(THETACThetaRepositoryImageStitchingEnum * _Nullable)imageStitching isGpsOn:(THETACBoolean * _Nullable)isGpsOn iso:(THETACThetaRepositoryIsoEnum * _Nullable)iso isoAutoHighLimit:(THETACThetaRepositoryIsoAutoHighLimitEnum * _Nullable)isoAutoHighLimit language:(THETACThetaRepositoryLanguageEnum * _Nullable)language latestEnabledExposureDelayTime:(THETACThetaRepositoryExposureDelayEnum * _Nullable)latestEnabledExposureDelayTime maxRecordableTime:(THETACThetaRepositoryMaxRecordableTimeEnum * _Nullable)maxRecordableTime networkType:(THETACThetaRepositoryNetworkTypeEnum * _Nullable)networkType offDelay:(id<THETACThetaRepositoryOffDelay> _Nullable)offDelay password:(NSString * _Nullable)password powerSaving:(THETACThetaRepositoryPowerSavingEnum * _Nullable)powerSaving preset:(THETACThetaRepositoryPresetEnum * _Nullable)preset previewFormat:(THETACThetaRepositoryPreviewFormatEnum * _Nullable)previewFormat proxy:(THETACThetaRepositoryProxy * _Nullable)proxy remainingPictures:(THETACInt * _Nullable)remainingPictures remainingVideoSeconds:(THETACInt * _Nullable)remainingVideoSeconds remainingSpace:(THETACLong * _Nullable)remainingSpace shootingMethod:(THETACThetaRepositoryShootingMethodEnum * _Nullable)shootingMethod shutterSpeed:(THETACThetaRepositoryShutterSpeedEnum * _Nullable)shutterSpeed sleepDelay:(id<THETACThetaRepositorySleepDelay> _Nullable)sleepDelay timeShift:(THETACThetaRepositoryTimeShiftSetting * _Nullable)timeShift topBottomCorrection:(THETACThetaRepositoryTopBottomCorrectionOptionEnum * _Nullable)topBottomCorrection topBottomCorrectionRotation:(THETACThetaRepositoryTopBottomCorrectionRotation * _Nullable)topBottomCorrectionRotation totalSpace:(THETACLong * _Nullable)totalSpace shutterVolume:(THETACInt * _Nullable)shutterVolume username:(NSString * _Nullable)username videoStitching:(THETACThetaRepositoryVideoStitchingEnum * _Nullable)videoStitching visibilityReduction:(THETACThetaRepositoryVisibilityReductionEnum * _Nullable)visibilityReduction whiteBalance:(THETACThetaRepositoryWhiteBalanceEnum * _Nullable)whiteBalance whiteBalanceAutoStrength:(THETACThetaRepositoryWhiteBalanceAutoStrengthEnum * _Nullable)whiteBalanceAutoStrength wlanFrequency:(THETACThetaRepositoryWlanFrequencyEnum * _Nullable)wlanFrequency __attribute__((swift_name("doCopy(aiAutoThumbnail:aperture:autoBracket:bitrate:bluetoothPower:bluetoothRole:burstMode:burstOption:cameraControlSource:cameraMode:cameraPower:captureInterval:captureMode:captureNumber:colorTemperature:compositeShootingOutputInterval:compositeShootingTime:continuousNumber:dateTimeZone:ethernetConfig:exposureCompensation:exposureDelay:exposureProgram:faceDetect:fileFormat:filter:function:gain:gpsInfo:imageStitching:isGpsOn:iso:isoAutoHighLimit:language:latestEnabledExposureDelayTime:maxRecordableTime:networkType:offDelay:password:powerSaving:preset:previewFormat:proxy:remainingPictures:remainingVideoSeconds:remainingSpace:shootingMethod:shutterSpeed:sleepDelay:timeShift:topBottomCorrection:topBottomCorrectionRotation:totalSpace:shutterVolume:username:videoStitching:visibilityReduction:whiteBalance:whiteBalanceAutoStrength:wlanFrequency:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (id _Nullable)getValueName:(THETACThetaRepositoryOptionNameEnum *)name error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("getValue(name:)"))) __attribute__((swift_error(nonnull_error)));
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (BOOL)setValueName:(THETACThetaRepositoryOptionNameEnum *)name value:(id)value error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("setValue(name:value:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property THETACThetaRepositoryAiAutoThumbnailEnum * _Nullable aiAutoThumbnail __attribute__((swift_name("aiAutoThumbnail")));
@property THETACThetaRepositoryApertureEnum * _Nullable aperture __attribute__((swift_name("aperture")));
@property THETACThetaRepositoryBracketSettingList * _Nullable autoBracket __attribute__((swift_name("autoBracket")));
@property id<THETACThetaRepositoryBitrate> _Nullable bitrate __attribute__((swift_name("bitrate")));
@property THETACThetaRepositoryBluetoothPowerEnum * _Nullable bluetoothPower __attribute__((swift_name("bluetoothPower")));
@property THETACThetaRepositoryBluetoothRoleEnum * _Nullable bluetoothRole __attribute__((swift_name("bluetoothRole")));
@property THETACThetaRepositoryBurstModeEnum * _Nullable burstMode __attribute__((swift_name("burstMode")));
@property THETACThetaRepositoryBurstOption * _Nullable burstOption __attribute__((swift_name("burstOption")));
@property THETACThetaRepositoryCameraControlSourceEnum * _Nullable cameraControlSource __attribute__((swift_name("cameraControlSource")));
@property THETACThetaRepositoryCameraModeEnum * _Nullable cameraMode __attribute__((swift_name("cameraMode")));
@property THETACThetaRepositoryCameraPowerEnum * _Nullable cameraPower __attribute__((swift_name("cameraPower")));
@property THETACInt * _Nullable captureInterval __attribute__((swift_name("captureInterval")));
@property THETACThetaRepositoryCaptureModeEnum * _Nullable captureMode __attribute__((swift_name("captureMode")));
@property THETACInt * _Nullable captureNumber __attribute__((swift_name("captureNumber")));
@property THETACInt * _Nullable colorTemperature __attribute__((swift_name("colorTemperature")));
@property THETACInt * _Nullable compositeShootingOutputInterval __attribute__((swift_name("compositeShootingOutputInterval")));
@property THETACInt * _Nullable compositeShootingTime __attribute__((swift_name("compositeShootingTime")));
@property THETACThetaRepositoryContinuousNumberEnum * _Nullable continuousNumber __attribute__((swift_name("continuousNumber")));
@property NSString * _Nullable dateTimeZone __attribute__((swift_name("dateTimeZone")));
@property THETACThetaRepositoryEthernetConfig * _Nullable ethernetConfig __attribute__((swift_name("ethernetConfig")));
@property THETACThetaRepositoryExposureCompensationEnum * _Nullable exposureCompensation __attribute__((swift_name("exposureCompensation")));
@property THETACThetaRepositoryExposureDelayEnum * _Nullable exposureDelay __attribute__((swift_name("exposureDelay")));
@property THETACThetaRepositoryExposureProgramEnum * _Nullable exposureProgram __attribute__((swift_name("exposureProgram")));
@property THETACThetaRepositoryFaceDetectEnum * _Nullable faceDetect __attribute__((swift_name("faceDetect")));
@property THETACThetaRepositoryFileFormatEnum * _Nullable fileFormat __attribute__((swift_name("fileFormat")));
@property THETACThetaRepositoryFilterEnum * _Nullable filter __attribute__((swift_name("filter")));
@property THETACThetaRepositoryShootingFunctionEnum * _Nullable function __attribute__((swift_name("function")));
@property THETACThetaRepositoryGainEnum * _Nullable gain __attribute__((swift_name("gain")));
@property THETACThetaRepositoryGpsInfo * _Nullable gpsInfo __attribute__((swift_name("gpsInfo")));
@property THETACThetaRepositoryImageStitchingEnum * _Nullable imageStitching __attribute__((swift_name("imageStitching")));
@property THETACBoolean * _Nullable isGpsOn __attribute__((swift_name("isGpsOn")));
@property THETACThetaRepositoryIsoEnum * _Nullable iso __attribute__((swift_name("iso")));
@property THETACThetaRepositoryIsoAutoHighLimitEnum * _Nullable isoAutoHighLimit __attribute__((swift_name("isoAutoHighLimit")));
@property THETACThetaRepositoryLanguageEnum * _Nullable language __attribute__((swift_name("language")));
@property THETACThetaRepositoryExposureDelayEnum * _Nullable latestEnabledExposureDelayTime __attribute__((swift_name("latestEnabledExposureDelayTime")));
@property THETACThetaRepositoryMaxRecordableTimeEnum * _Nullable maxRecordableTime __attribute__((swift_name("maxRecordableTime")));
@property THETACThetaRepositoryNetworkTypeEnum * _Nullable networkType __attribute__((swift_name("networkType")));
@property id<THETACThetaRepositoryOffDelay> _Nullable offDelay __attribute__((swift_name("offDelay")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property THETACThetaRepositoryPowerSavingEnum * _Nullable powerSaving __attribute__((swift_name("powerSaving")));
@property THETACThetaRepositoryPresetEnum * _Nullable preset __attribute__((swift_name("preset")));
@property THETACThetaRepositoryPreviewFormatEnum * _Nullable previewFormat __attribute__((swift_name("previewFormat")));
@property THETACThetaRepositoryProxy * _Nullable proxy __attribute__((swift_name("proxy")));
@property THETACInt * _Nullable remainingPictures __attribute__((swift_name("remainingPictures")));
@property THETACLong * _Nullable remainingSpace __attribute__((swift_name("remainingSpace")));
@property THETACInt * _Nullable remainingVideoSeconds __attribute__((swift_name("remainingVideoSeconds")));
@property THETACThetaRepositoryShootingMethodEnum * _Nullable shootingMethod __attribute__((swift_name("shootingMethod")));
@property THETACThetaRepositoryShutterSpeedEnum * _Nullable shutterSpeed __attribute__((swift_name("shutterSpeed")));
@property THETACInt * _Nullable shutterVolume __attribute__((swift_name("shutterVolume")));
@property id<THETACThetaRepositorySleepDelay> _Nullable sleepDelay __attribute__((swift_name("sleepDelay")));
@property THETACThetaRepositoryTimeShiftSetting * _Nullable timeShift __attribute__((swift_name("timeShift")));
@property THETACThetaRepositoryTopBottomCorrectionOptionEnum * _Nullable topBottomCorrection __attribute__((swift_name("topBottomCorrection")));
@property THETACThetaRepositoryTopBottomCorrectionRotation * _Nullable topBottomCorrectionRotation __attribute__((swift_name("topBottomCorrectionRotation")));
@property THETACLong * _Nullable totalSpace __attribute__((swift_name("totalSpace")));
@property NSString * _Nullable username __attribute__((swift_name("username")));
@property THETACThetaRepositoryVideoStitchingEnum * _Nullable videoStitching __attribute__((swift_name("videoStitching")));
@property THETACThetaRepositoryVisibilityReductionEnum * _Nullable visibilityReduction __attribute__((swift_name("visibilityReduction")));
@property THETACThetaRepositoryWhiteBalanceEnum * _Nullable whiteBalance __attribute__((swift_name("whiteBalance")));
@property THETACThetaRepositoryWhiteBalanceAutoStrengthEnum * _Nullable whiteBalanceAutoStrength __attribute__((swift_name("whiteBalanceAutoStrength")));
@property THETACThetaRepositoryWlanFrequencyEnum * _Nullable wlanFrequency __attribute__((swift_name("wlanFrequency")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.PhotoFileFormatEnum")))
@interface THETACThetaRepositoryPhotoFileFormatEnum : THETACKotlinEnum<THETACThetaRepositoryPhotoFileFormatEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryPhotoFileFormatEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryPhotoFileFormatEnum *image2k __attribute__((swift_name("image2k")));
@property (class, readonly) THETACThetaRepositoryPhotoFileFormatEnum *image5k __attribute__((swift_name("image5k")));
@property (class, readonly) THETACThetaRepositoryPhotoFileFormatEnum *image67k __attribute__((swift_name("image67k")));
@property (class, readonly) THETACThetaRepositoryPhotoFileFormatEnum *rawP67k __attribute__((swift_name("rawP67k")));
@property (class, readonly) THETACThetaRepositoryPhotoFileFormatEnum *image55k __attribute__((swift_name("image55k")));
@property (class, readonly) THETACThetaRepositoryPhotoFileFormatEnum *image11k __attribute__((swift_name("image11k")));
+ (THETACKotlinArray<THETACThetaRepositoryPhotoFileFormatEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryPhotoFileFormatEnum *> *entries __attribute__((swift_name("entries")));
@property (readonly) THETACThetaRepositoryFileFormatEnum *fileFormat __attribute__((swift_name("fileFormat")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.PhotoFileFormatEnumCompanion")))
@interface THETACThetaRepositoryPhotoFileFormatEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryPhotoFileFormatEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryPhotoFileFormatEnum * _Nullable)getFileFormat:(THETACThetaRepositoryFileFormatEnum *)fileFormat __attribute__((swift_name("get(fileFormat:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.PluginInfo")))
@interface THETACThetaRepositoryPluginInfo : THETACBase
- (instancetype)initWithName:(NSString *)name packageName:(NSString *)packageName version:(NSString *)version isPreInstalled:(BOOL)isPreInstalled isRunning:(BOOL)isRunning isForeground:(BOOL)isForeground isBoot:(BOOL)isBoot hasWebServer:(BOOL)hasWebServer exitStatus:(NSString *)exitStatus message:(NSString *)message __attribute__((swift_name("init(name:packageName:version:isPreInstalled:isRunning:isForeground:isBoot:hasWebServer:exitStatus:message:)"))) __attribute__((objc_designated_initializer));
- (THETACThetaRepositoryPluginInfo *)doCopyName:(NSString *)name packageName:(NSString *)packageName version:(NSString *)version isPreInstalled:(BOOL)isPreInstalled isRunning:(BOOL)isRunning isForeground:(BOOL)isForeground isBoot:(BOOL)isBoot hasWebServer:(BOOL)hasWebServer exitStatus:(NSString *)exitStatus message:(NSString *)message __attribute__((swift_name("doCopy(name:packageName:version:isPreInstalled:isRunning:isForeground:isBoot:hasWebServer:exitStatus:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *exitStatus __attribute__((swift_name("exitStatus")));
@property (readonly) BOOL hasWebServer __attribute__((swift_name("hasWebServer")));
@property (readonly) BOOL isBoot __attribute__((swift_name("isBoot")));
@property (readonly) BOOL isForeground __attribute__((swift_name("isForeground")));
@property (readonly) BOOL isPreInstalled __attribute__((swift_name("isPreInstalled")));
@property (readonly) BOOL isRunning __attribute__((swift_name("isRunning")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *packageName __attribute__((swift_name("packageName")));
@property (readonly) NSString *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.PowerSavingEnum")))
@interface THETACThetaRepositoryPowerSavingEnum : THETACKotlinEnum<THETACThetaRepositoryPowerSavingEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryPowerSavingEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryPowerSavingEnum *on __attribute__((swift_name("on")));
@property (class, readonly) THETACThetaRepositoryPowerSavingEnum *off __attribute__((swift_name("off")));
+ (THETACKotlinArray<THETACThetaRepositoryPowerSavingEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryPowerSavingEnum *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.PowerSavingEnumCompanion")))
@interface THETACThetaRepositoryPowerSavingEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryPowerSavingEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.PresetEnum")))
@interface THETACThetaRepositoryPresetEnum : THETACKotlinEnum<THETACThetaRepositoryPresetEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryPresetEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryPresetEnum *face __attribute__((swift_name("face")));
@property (class, readonly) THETACThetaRepositoryPresetEnum *nightView __attribute__((swift_name("nightView")));
@property (class, readonly) THETACThetaRepositoryPresetEnum *lensByLensExposure __attribute__((swift_name("lensByLensExposure")));
@property (class, readonly) THETACThetaRepositoryPresetEnum *room __attribute__((swift_name("room")));
+ (THETACKotlinArray<THETACThetaRepositoryPresetEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryPresetEnum *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.PresetEnumCompanion")))
@interface THETACThetaRepositoryPresetEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryPresetEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.PreviewFormatEnum")))
@interface THETACThetaRepositoryPreviewFormatEnum : THETACKotlinEnum<THETACThetaRepositoryPreviewFormatEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryPreviewFormatEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryPreviewFormatEnum *w1024H512F30 __attribute__((swift_name("w1024H512F30")));
@property (class, readonly) THETACThetaRepositoryPreviewFormatEnum *w1024H512F15 __attribute__((swift_name("w1024H512F15")));
@property (class, readonly) THETACThetaRepositoryPreviewFormatEnum *w512H512F30 __attribute__((swift_name("w512H512F30")));
@property (class, readonly) THETACThetaRepositoryPreviewFormatEnum *w1920H960F8 __attribute__((swift_name("w1920H960F8")));
@property (class, readonly) THETACThetaRepositoryPreviewFormatEnum *w1024H512F8 __attribute__((swift_name("w1024H512F8")));
@property (class, readonly) THETACThetaRepositoryPreviewFormatEnum *w640H320F30 __attribute__((swift_name("w640H320F30")));
@property (class, readonly) THETACThetaRepositoryPreviewFormatEnum *w640H320F8 __attribute__((swift_name("w640H320F8")));
@property (class, readonly) THETACThetaRepositoryPreviewFormatEnum *w640H320F10 __attribute__((swift_name("w640H320F10")));
+ (THETACKotlinArray<THETACThetaRepositoryPreviewFormatEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryPreviewFormatEnum *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t framerate __attribute__((swift_name("framerate")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.PreviewFormatEnumCompanion")))
@interface THETACThetaRepositoryPreviewFormatEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryPreviewFormatEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ProjectionTypeEnum")))
@interface THETACThetaRepositoryProjectionTypeEnum : THETACKotlinEnum<THETACThetaRepositoryProjectionTypeEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryProjectionTypeEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryProjectionTypeEnum *equirectangular __attribute__((swift_name("equirectangular")));
@property (class, readonly) THETACThetaRepositoryProjectionTypeEnum *dualFisheye __attribute__((swift_name("dualFisheye")));
@property (class, readonly) THETACThetaRepositoryProjectionTypeEnum *fisheye __attribute__((swift_name("fisheye")));
+ (THETACKotlinArray<THETACThetaRepositoryProjectionTypeEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryProjectionTypeEnum *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ProjectionTypeEnumCompanion")))
@interface THETACThetaRepositoryProjectionTypeEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryProjectionTypeEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.Proxy")))
@interface THETACThetaRepositoryProxy : THETACBase
- (instancetype)initWithUse:(BOOL)use __attribute__((swift_name("init(use:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithUse:(BOOL)use url:(NSString * _Nullable)url port:(THETACInt * _Nullable)port userid:(NSString * _Nullable)userid password:(NSString * _Nullable)password __attribute__((swift_name("init(use:url:port:userid:password:)"))) __attribute__((objc_designated_initializer));
- (THETACThetaRepositoryProxy *)doCopyUse:(BOOL)use url:(NSString * _Nullable)url port:(THETACInt * _Nullable)port userid:(NSString * _Nullable)userid password:(NSString * _Nullable)password __attribute__((swift_name("doCopy(use:url:port:userid:password:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) THETACInt * _Nullable port __attribute__((swift_name("port")));
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@property (readonly) BOOL use __attribute__((swift_name("use")));
@property (readonly) NSString * _Nullable userid __attribute__((swift_name("userid")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ShootingFunctionEnum")))
@interface THETACThetaRepositoryShootingFunctionEnum : THETACKotlinEnum<THETACThetaRepositoryShootingFunctionEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryShootingFunctionEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryShootingFunctionEnum *normal __attribute__((swift_name("normal")));
@property (class, readonly) THETACThetaRepositoryShootingFunctionEnum *selfTimer __attribute__((swift_name("selfTimer")));
@property (class, readonly) THETACThetaRepositoryShootingFunctionEnum *mySetting __attribute__((swift_name("mySetting")));
+ (THETACKotlinArray<THETACThetaRepositoryShootingFunctionEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryShootingFunctionEnum *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ShootingFunctionEnumCompanion")))
@interface THETACThetaRepositoryShootingFunctionEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryShootingFunctionEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ShootingMethodEnum")))
@interface THETACThetaRepositoryShootingMethodEnum : THETACKotlinEnum<THETACThetaRepositoryShootingMethodEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryShootingMethodEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryShootingMethodEnum *normal __attribute__((swift_name("normal")));
@property (class, readonly) THETACThetaRepositoryShootingMethodEnum *interval __attribute__((swift_name("interval")));
@property (class, readonly) THETACThetaRepositoryShootingMethodEnum *moveInterval __attribute__((swift_name("moveInterval")));
@property (class, readonly) THETACThetaRepositoryShootingMethodEnum *fixedInterval __attribute__((swift_name("fixedInterval")));
@property (class, readonly) THETACThetaRepositoryShootingMethodEnum *bracket __attribute__((swift_name("bracket")));
@property (class, readonly) THETACThetaRepositoryShootingMethodEnum *composite __attribute__((swift_name("composite")));
@property (class, readonly) THETACThetaRepositoryShootingMethodEnum *continuous __attribute__((swift_name("continuous")));
@property (class, readonly) THETACThetaRepositoryShootingMethodEnum *timeShift __attribute__((swift_name("timeShift")));
@property (class, readonly) THETACThetaRepositoryShootingMethodEnum *burst __attribute__((swift_name("burst")));
+ (THETACKotlinArray<THETACThetaRepositoryShootingMethodEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryShootingMethodEnum *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ShootingMethodEnumCompanion")))
@interface THETACThetaRepositoryShootingMethodEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryShootingMethodEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ShutterSpeedEnum")))
@interface THETACThetaRepositoryShutterSpeedEnum : THETACKotlinEnum<THETACThetaRepositoryShutterSpeedEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryShutterSpeedEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedAuto __attribute__((swift_name("shutterSpeedAuto")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeed60 __attribute__((swift_name("shutterSpeed60")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeed50 __attribute__((swift_name("shutterSpeed50")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeed40 __attribute__((swift_name("shutterSpeed40")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeed30 __attribute__((swift_name("shutterSpeed30")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeed25 __attribute__((swift_name("shutterSpeed25")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeed20 __attribute__((swift_name("shutterSpeed20")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeed15 __attribute__((swift_name("shutterSpeed15")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeed13 __attribute__((swift_name("shutterSpeed13")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeed10 __attribute__((swift_name("shutterSpeed10")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeed8 __attribute__((swift_name("shutterSpeed8")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeed6 __attribute__((swift_name("shutterSpeed6")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeed5 __attribute__((swift_name("shutterSpeed5")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeed4 __attribute__((swift_name("shutterSpeed4")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeed32 __attribute__((swift_name("shutterSpeed32")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeed25_ __attribute__((swift_name("shutterSpeed25_")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeed2 __attribute__((swift_name("shutterSpeed2")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeed16 __attribute__((swift_name("shutterSpeed16")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeed13_ __attribute__((swift_name("shutterSpeed13_")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeed1 __attribute__((swift_name("shutterSpeed1")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver13 __attribute__((swift_name("shutterSpeedOneOver13")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver16 __attribute__((swift_name("shutterSpeedOneOver16")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver2 __attribute__((swift_name("shutterSpeedOneOver2")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver25 __attribute__((swift_name("shutterSpeedOneOver25")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver3 __attribute__((swift_name("shutterSpeedOneOver3")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver4 __attribute__((swift_name("shutterSpeedOneOver4")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver5 __attribute__((swift_name("shutterSpeedOneOver5")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver6 __attribute__((swift_name("shutterSpeedOneOver6")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver8 __attribute__((swift_name("shutterSpeedOneOver8")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver10 __attribute__((swift_name("shutterSpeedOneOver10")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver13_ __attribute__((swift_name("shutterSpeedOneOver13_")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver15 __attribute__((swift_name("shutterSpeedOneOver15")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver20 __attribute__((swift_name("shutterSpeedOneOver20")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver25_ __attribute__((swift_name("shutterSpeedOneOver25_")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver30 __attribute__((swift_name("shutterSpeedOneOver30")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver40 __attribute__((swift_name("shutterSpeedOneOver40")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver50 __attribute__((swift_name("shutterSpeedOneOver50")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver60 __attribute__((swift_name("shutterSpeedOneOver60")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver80 __attribute__((swift_name("shutterSpeedOneOver80")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver100 __attribute__((swift_name("shutterSpeedOneOver100")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver125 __attribute__((swift_name("shutterSpeedOneOver125")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver160 __attribute__((swift_name("shutterSpeedOneOver160")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver200 __attribute__((swift_name("shutterSpeedOneOver200")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver250 __attribute__((swift_name("shutterSpeedOneOver250")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver320 __attribute__((swift_name("shutterSpeedOneOver320")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver400 __attribute__((swift_name("shutterSpeedOneOver400")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver500 __attribute__((swift_name("shutterSpeedOneOver500")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver640 __attribute__((swift_name("shutterSpeedOneOver640")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver800 __attribute__((swift_name("shutterSpeedOneOver800")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver1000 __attribute__((swift_name("shutterSpeedOneOver1000")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver1250 __attribute__((swift_name("shutterSpeedOneOver1250")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver1600 __attribute__((swift_name("shutterSpeedOneOver1600")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver2000 __attribute__((swift_name("shutterSpeedOneOver2000")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver2500 __attribute__((swift_name("shutterSpeedOneOver2500")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver3200 __attribute__((swift_name("shutterSpeedOneOver3200")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver4000 __attribute__((swift_name("shutterSpeedOneOver4000")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver5000 __attribute__((swift_name("shutterSpeedOneOver5000")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver6400 __attribute__((swift_name("shutterSpeedOneOver6400")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver8000 __attribute__((swift_name("shutterSpeedOneOver8000")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver10000 __attribute__((swift_name("shutterSpeedOneOver10000")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver12500 __attribute__((swift_name("shutterSpeedOneOver12500")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver12800 __attribute__((swift_name("shutterSpeedOneOver12800")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver16000 __attribute__((swift_name("shutterSpeedOneOver16000")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver20000 __attribute__((swift_name("shutterSpeedOneOver20000")));
@property (class, readonly) THETACThetaRepositoryShutterSpeedEnum *shutterSpeedOneOver25000 __attribute__((swift_name("shutterSpeedOneOver25000")));
+ (THETACKotlinArray<THETACThetaRepositoryShutterSpeedEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryShutterSpeedEnum *> *entries __attribute__((swift_name("entries")));
@property (readonly) double value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ShutterSpeedEnumCompanion")))
@interface THETACThetaRepositoryShutterSpeedEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryShutterSpeedEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryShutterSpeedEnum * _Nullable)getValue:(double)value __attribute__((swift_name("get(value:)")));
@end

__attribute__((swift_name("ThetaRepositorySleepDelay")))
@protocol THETACThetaRepositorySleepDelay
@required
@property (readonly) int32_t sec __attribute__((swift_name("sec")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.SleepDelayEnum")))
@interface THETACThetaRepositorySleepDelayEnum : THETACKotlinEnum<THETACThetaRepositorySleepDelayEnum *> <THETACThetaRepositorySleepDelay>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositorySleepDelayEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositorySleepDelayEnum *sleepDelay3m __attribute__((swift_name("sleepDelay3m")));
@property (class, readonly) THETACThetaRepositorySleepDelayEnum *sleepDelay5m __attribute__((swift_name("sleepDelay5m")));
@property (class, readonly) THETACThetaRepositorySleepDelayEnum *sleepDelay7m __attribute__((swift_name("sleepDelay7m")));
@property (class, readonly) THETACThetaRepositorySleepDelayEnum *sleepDelay10m __attribute__((swift_name("sleepDelay10m")));
@property (class, readonly) THETACThetaRepositorySleepDelayEnum *disable __attribute__((swift_name("disable")));
+ (THETACKotlinArray<THETACThetaRepositorySleepDelayEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositorySleepDelayEnum *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t sec __attribute__((swift_name("sec")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.SleepDelayEnumCompanion")))
@interface THETACThetaRepositorySleepDelayEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositorySleepDelayEnumCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACThetaRepositorySleepDelay>)getSec:(int32_t)sec __attribute__((swift_name("get(sec:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.SleepDelaySec")))
@interface THETACThetaRepositorySleepDelaySec : THETACBase <THETACThetaRepositorySleepDelay>
- (instancetype)initWithSec:(int32_t)sec __attribute__((swift_name("init(sec:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
@property (readonly) int32_t sec __attribute__((swift_name("sec")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.StateGpsInfo")))
@interface THETACThetaRepositoryStateGpsInfo : THETACBase
- (instancetype)initWithGpsInfo:(THETACThetaRepositoryGpsInfo * _Nullable)gpsInfo __attribute__((swift_name("init(gpsInfo:)"))) __attribute__((objc_designated_initializer));
- (THETACThetaRepositoryStateGpsInfo *)doCopyGpsInfo:(THETACThetaRepositoryGpsInfo * _Nullable)gpsInfo __attribute__((swift_name("doCopy(gpsInfo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACThetaRepositoryGpsInfo * _Nullable gpsInfo __attribute__((swift_name("gpsInfo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.StorageEnum")))
@interface THETACThetaRepositoryStorageEnum : THETACKotlinEnum<THETACThetaRepositoryStorageEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) THETACThetaRepositoryStorageEnum *internal __attribute__((swift_name("internal")));
@property (class, readonly) THETACThetaRepositoryStorageEnum *sd __attribute__((swift_name("sd")));
@property (class, readonly) THETACThetaRepositoryStorageEnum *current __attribute__((swift_name("current")));
+ (THETACKotlinArray<THETACThetaRepositoryStorageEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryStorageEnum *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ThetaFiles")))
@interface THETACThetaRepositoryThetaFiles : THETACBase
- (instancetype)initWithFileList:(NSArray<THETACThetaRepositoryFileInfo *> *)fileList totalEntries:(int32_t)totalEntries __attribute__((swift_name("init(fileList:totalEntries:)"))) __attribute__((objc_designated_initializer));
- (THETACThetaRepositoryThetaFiles *)doCopyFileList:(NSArray<THETACThetaRepositoryFileInfo *> *)fileList totalEntries:(int32_t)totalEntries __attribute__((swift_name("doCopy(fileList:totalEntries:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<THETACThetaRepositoryFileInfo *> *fileList __attribute__((swift_name("fileList")));
@property (readonly) int32_t totalEntries __attribute__((swift_name("totalEntries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ThetaInfo")))
@interface THETACThetaRepositoryThetaInfo : THETACBase
- (instancetype)initWithManufacturer:(NSString *)manufacturer model:(NSString *)model serialNumber:(NSString *)serialNumber wlanMacAddress:(NSString * _Nullable)wlanMacAddress bluetoothMacAddress:(NSString * _Nullable)bluetoothMacAddress firmwareVersion:(NSString *)firmwareVersion supportUrl:(NSString *)supportUrl hasGps:(BOOL)hasGps hasGyro:(BOOL)hasGyro uptime:(int32_t)uptime api:(NSArray<NSString *> *)api endpoints:(THETACEndPoint *)endpoints apiLevel:(NSArray<THETACInt *> *)apiLevel __attribute__((swift_name("init(manufacturer:model:serialNumber:wlanMacAddress:bluetoothMacAddress:firmwareVersion:supportUrl:hasGps:hasGyro:uptime:api:endpoints:apiLevel:)"))) __attribute__((objc_designated_initializer));
- (THETACThetaRepositoryThetaInfo *)doCopyManufacturer:(NSString *)manufacturer model:(NSString *)model serialNumber:(NSString *)serialNumber wlanMacAddress:(NSString * _Nullable)wlanMacAddress bluetoothMacAddress:(NSString * _Nullable)bluetoothMacAddress firmwareVersion:(NSString *)firmwareVersion supportUrl:(NSString *)supportUrl hasGps:(BOOL)hasGps hasGyro:(BOOL)hasGyro uptime:(int32_t)uptime api:(NSArray<NSString *> *)api endpoints:(THETACEndPoint *)endpoints apiLevel:(NSArray<THETACInt *> *)apiLevel __attribute__((swift_name("doCopy(manufacturer:model:serialNumber:wlanMacAddress:bluetoothMacAddress:firmwareVersion:supportUrl:hasGps:hasGyro:uptime:api:endpoints:apiLevel:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> *api __attribute__((swift_name("api")));
@property (readonly) NSArray<THETACInt *> *apiLevel __attribute__((swift_name("apiLevel")));
@property (readonly) NSString * _Nullable bluetoothMacAddress __attribute__((swift_name("bluetoothMacAddress")));
@property (readonly) THETACEndPoint *endpoints __attribute__((swift_name("endpoints")));
@property (readonly) NSString *firmwareVersion __attribute__((swift_name("firmwareVersion")));
@property (readonly) BOOL hasGps __attribute__((swift_name("hasGps")));
@property (readonly) BOOL hasGyro __attribute__((swift_name("hasGyro")));
@property (readonly) NSString *manufacturer __attribute__((swift_name("manufacturer")));
@property (readonly) NSString *model __attribute__((swift_name("model")));
@property (readonly) NSString *serialNumber __attribute__((swift_name("serialNumber")));
@property (readonly) NSString *supportUrl __attribute__((swift_name("supportUrl")));
@property (readonly) int32_t uptime __attribute__((swift_name("uptime")));
@property (readonly) NSString * _Nullable wlanMacAddress __attribute__((swift_name("wlanMacAddress")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ThetaModel")))
@interface THETACThetaRepositoryThetaModel : THETACKotlinEnum<THETACThetaRepositoryThetaModel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryThetaModelCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryThetaModel *thetaS __attribute__((swift_name("thetaS")));
@property (class, readonly) THETACThetaRepositoryThetaModel *thetaSc __attribute__((swift_name("thetaSc")));
@property (class, readonly) THETACThetaRepositoryThetaModel *thetaV __attribute__((swift_name("thetaV")));
@property (class, readonly) THETACThetaRepositoryThetaModel *thetaZ1 __attribute__((swift_name("thetaZ1")));
@property (class, readonly) THETACThetaRepositoryThetaModel *thetaX __attribute__((swift_name("thetaX")));
@property (class, readonly) THETACThetaRepositoryThetaModel *thetaSc2 __attribute__((swift_name("thetaSc2")));
@property (class, readonly) THETACThetaRepositoryThetaModel *thetaSc2B __attribute__((swift_name("thetaSc2B")));
+ (THETACKotlinArray<THETACThetaRepositoryThetaModel *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryThetaModel *> *entries __attribute__((swift_name("entries")));
@property (readonly) id _Nullable firstCharOfSerialNumber __attribute__((swift_name("firstCharOfSerialNumber")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ThetaModelCompanion")))
@interface THETACThetaRepositoryThetaModelCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryThetaModelCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryThetaModel * _Nullable)getModel:(NSString * _Nullable)model serialNumber:(NSString * _Nullable)serialNumber __attribute__((swift_name("get(model:serialNumber:)")));
- (BOOL)isBeforeThetaVModel:(THETACThetaRepositoryThetaModel * _Nullable)model __attribute__((swift_name("isBeforeThetaV(model:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ThetaState")))
@interface THETACThetaRepositoryThetaState : THETACBase
- (instancetype)initWithFingerprint:(NSString * _Nullable)fingerprint batteryLevel:(THETACFloat * _Nullable)batteryLevel storageUri:(NSString * _Nullable)storageUri storageID:(NSString * _Nullable)storageID captureStatus:(THETACThetaRepositoryCaptureStatusEnum * _Nullable)captureStatus recordedTime:(THETACInt * _Nullable)recordedTime recordableTime:(THETACInt * _Nullable)recordableTime capturedPictures:(THETACInt * _Nullable)capturedPictures compositeShootingElapsedTime:(THETACInt * _Nullable)compositeShootingElapsedTime latestFileUrl:(NSString * _Nullable)latestFileUrl chargingState:(THETACThetaRepositoryChargingStateEnum * _Nullable)chargingState apiVersion:(THETACInt * _Nullable)apiVersion isPluginRunning:(THETACBoolean * _Nullable)isPluginRunning isPluginWebServer:(THETACBoolean * _Nullable)isPluginWebServer function:(THETACThetaRepositoryShootingFunctionEnum * _Nullable)function isMySettingChanged:(THETACBoolean * _Nullable)isMySettingChanged currentMicrophone:(THETACThetaRepositoryMicrophoneOptionEnum * _Nullable)currentMicrophone isSdCard:(THETACBoolean * _Nullable)isSdCard cameraError:(NSArray<THETACThetaRepositoryCameraErrorEnum *> * _Nullable)cameraError isBatteryInsert:(THETACBoolean * _Nullable)isBatteryInsert externalGpsInfo:(THETACThetaRepositoryStateGpsInfo * _Nullable)externalGpsInfo internalGpsInfo:(THETACThetaRepositoryStateGpsInfo * _Nullable)internalGpsInfo boardTemp:(THETACInt * _Nullable)boardTemp batteryTemp:(THETACInt * _Nullable)batteryTemp __attribute__((swift_name("init(fingerprint:batteryLevel:storageUri:storageID:captureStatus:recordedTime:recordableTime:capturedPictures:compositeShootingElapsedTime:latestFileUrl:chargingState:apiVersion:isPluginRunning:isPluginWebServer:function:isMySettingChanged:currentMicrophone:isSdCard:cameraError:isBatteryInsert:externalGpsInfo:internalGpsInfo:boardTemp:batteryTemp:)"))) __attribute__((objc_designated_initializer));
- (THETACThetaRepositoryThetaState *)doCopyFingerprint:(NSString * _Nullable)fingerprint batteryLevel:(THETACFloat * _Nullable)batteryLevel storageUri:(NSString * _Nullable)storageUri storageID:(NSString * _Nullable)storageID captureStatus:(THETACThetaRepositoryCaptureStatusEnum * _Nullable)captureStatus recordedTime:(THETACInt * _Nullable)recordedTime recordableTime:(THETACInt * _Nullable)recordableTime capturedPictures:(THETACInt * _Nullable)capturedPictures compositeShootingElapsedTime:(THETACInt * _Nullable)compositeShootingElapsedTime latestFileUrl:(NSString * _Nullable)latestFileUrl chargingState:(THETACThetaRepositoryChargingStateEnum * _Nullable)chargingState apiVersion:(THETACInt * _Nullable)apiVersion isPluginRunning:(THETACBoolean * _Nullable)isPluginRunning isPluginWebServer:(THETACBoolean * _Nullable)isPluginWebServer function:(THETACThetaRepositoryShootingFunctionEnum * _Nullable)function isMySettingChanged:(THETACBoolean * _Nullable)isMySettingChanged currentMicrophone:(THETACThetaRepositoryMicrophoneOptionEnum * _Nullable)currentMicrophone isSdCard:(THETACBoolean * _Nullable)isSdCard cameraError:(NSArray<THETACThetaRepositoryCameraErrorEnum *> * _Nullable)cameraError isBatteryInsert:(THETACBoolean * _Nullable)isBatteryInsert externalGpsInfo:(THETACThetaRepositoryStateGpsInfo * _Nullable)externalGpsInfo internalGpsInfo:(THETACThetaRepositoryStateGpsInfo * _Nullable)internalGpsInfo boardTemp:(THETACInt * _Nullable)boardTemp batteryTemp:(THETACInt * _Nullable)batteryTemp __attribute__((swift_name("doCopy(fingerprint:batteryLevel:storageUri:storageID:captureStatus:recordedTime:recordableTime:capturedPictures:compositeShootingElapsedTime:latestFileUrl:chargingState:apiVersion:isPluginRunning:isPluginWebServer:function:isMySettingChanged:currentMicrophone:isSdCard:cameraError:isBatteryInsert:externalGpsInfo:internalGpsInfo:boardTemp:batteryTemp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACInt * _Nullable apiVersion __attribute__((swift_name("apiVersion")));
@property (readonly) THETACFloat * _Nullable batteryLevel __attribute__((swift_name("batteryLevel")));
@property (readonly) THETACInt * _Nullable batteryTemp __attribute__((swift_name("batteryTemp")));
@property (readonly) THETACInt * _Nullable boardTemp __attribute__((swift_name("boardTemp")));
@property (readonly) NSArray<THETACThetaRepositoryCameraErrorEnum *> * _Nullable cameraError __attribute__((swift_name("cameraError")));
@property (readonly) THETACThetaRepositoryCaptureStatusEnum * _Nullable captureStatus __attribute__((swift_name("captureStatus")));
@property (readonly) THETACInt * _Nullable capturedPictures __attribute__((swift_name("capturedPictures")));
@property (readonly) THETACThetaRepositoryChargingStateEnum * _Nullable chargingState __attribute__((swift_name("chargingState")));
@property (readonly) THETACInt * _Nullable compositeShootingElapsedTime __attribute__((swift_name("compositeShootingElapsedTime")));
@property (readonly) THETACThetaRepositoryMicrophoneOptionEnum * _Nullable currentMicrophone __attribute__((swift_name("currentMicrophone")));
@property (readonly) THETACThetaRepositoryStateGpsInfo * _Nullable externalGpsInfo __attribute__((swift_name("externalGpsInfo")));
@property (readonly) NSString * _Nullable fingerprint __attribute__((swift_name("fingerprint")));
@property (readonly) THETACThetaRepositoryShootingFunctionEnum * _Nullable function __attribute__((swift_name("function")));
@property (readonly) THETACThetaRepositoryStateGpsInfo * _Nullable internalGpsInfo __attribute__((swift_name("internalGpsInfo")));
@property (readonly) THETACBoolean * _Nullable isBatteryInsert __attribute__((swift_name("isBatteryInsert")));
@property (readonly) THETACBoolean * _Nullable isMySettingChanged __attribute__((swift_name("isMySettingChanged")));
@property (readonly) THETACBoolean * _Nullable isPluginRunning __attribute__((swift_name("isPluginRunning")));
@property (readonly) THETACBoolean * _Nullable isPluginWebServer __attribute__((swift_name("isPluginWebServer")));
@property (readonly) THETACBoolean * _Nullable isSdCard __attribute__((swift_name("isSdCard")));
@property (readonly) NSString * _Nullable latestFileUrl __attribute__((swift_name("latestFileUrl")));
@property (readonly) THETACInt * _Nullable recordableTime __attribute__((swift_name("recordableTime")));
@property (readonly) THETACInt * _Nullable recordedTime __attribute__((swift_name("recordedTime")));
@property (readonly) NSString * _Nullable storageID __attribute__((swift_name("storageID")));
@property (readonly) NSString * _Nullable storageUri __attribute__((swift_name("storageUri")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ThetaUnauthorizedException")))
@interface THETACThetaRepositoryThetaUnauthorizedException : THETACThetaRepositoryThetaRepositoryException
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ThetaWebApiException")))
@interface THETACThetaRepositoryThetaWebApiException : THETACThetaRepositoryThetaRepositoryException
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACThetaRepositoryThetaWebApiExceptionCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.ThetaWebApiExceptionCompanion")))
@interface THETACThetaRepositoryThetaWebApiExceptionCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryThetaWebApiExceptionCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.TimeShiftIntervalEnum")))
@interface THETACThetaRepositoryTimeShiftIntervalEnum : THETACKotlinEnum<THETACThetaRepositoryTimeShiftIntervalEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryTimeShiftIntervalEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryTimeShiftIntervalEnum *interval0 __attribute__((swift_name("interval0")));
@property (class, readonly) THETACThetaRepositoryTimeShiftIntervalEnum *interval1 __attribute__((swift_name("interval1")));
@property (class, readonly) THETACThetaRepositoryTimeShiftIntervalEnum *interval2 __attribute__((swift_name("interval2")));
@property (class, readonly) THETACThetaRepositoryTimeShiftIntervalEnum *interval3 __attribute__((swift_name("interval3")));
@property (class, readonly) THETACThetaRepositoryTimeShiftIntervalEnum *interval4 __attribute__((swift_name("interval4")));
@property (class, readonly) THETACThetaRepositoryTimeShiftIntervalEnum *interval5 __attribute__((swift_name("interval5")));
@property (class, readonly) THETACThetaRepositoryTimeShiftIntervalEnum *interval6 __attribute__((swift_name("interval6")));
@property (class, readonly) THETACThetaRepositoryTimeShiftIntervalEnum *interval7 __attribute__((swift_name("interval7")));
@property (class, readonly) THETACThetaRepositoryTimeShiftIntervalEnum *interval8 __attribute__((swift_name("interval8")));
@property (class, readonly) THETACThetaRepositoryTimeShiftIntervalEnum *interval9 __attribute__((swift_name("interval9")));
@property (class, readonly) THETACThetaRepositoryTimeShiftIntervalEnum *interval10 __attribute__((swift_name("interval10")));
+ (THETACKotlinArray<THETACThetaRepositoryTimeShiftIntervalEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryTimeShiftIntervalEnum *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t sec __attribute__((swift_name("sec")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.TimeShiftIntervalEnumCompanion")))
@interface THETACThetaRepositoryTimeShiftIntervalEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryTimeShiftIntervalEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryTimeShiftIntervalEnum * _Nullable)getSec:(int32_t)sec __attribute__((swift_name("get(sec:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.TimeShiftSetting")))
@interface THETACThetaRepositoryTimeShiftSetting : THETACBase
- (instancetype)initWithIsFrontFirst:(THETACBoolean * _Nullable)isFrontFirst firstInterval:(THETACThetaRepositoryTimeShiftIntervalEnum * _Nullable)firstInterval secondInterval:(THETACThetaRepositoryTimeShiftIntervalEnum * _Nullable)secondInterval __attribute__((swift_name("init(isFrontFirst:firstInterval:secondInterval:)"))) __attribute__((objc_designated_initializer));
- (THETACThetaRepositoryTimeShiftSetting *)doCopyIsFrontFirst:(THETACBoolean * _Nullable)isFrontFirst firstInterval:(THETACThetaRepositoryTimeShiftIntervalEnum * _Nullable)firstInterval secondInterval:(THETACThetaRepositoryTimeShiftIntervalEnum * _Nullable)secondInterval __attribute__((swift_name("doCopy(isFrontFirst:firstInterval:secondInterval:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property THETACThetaRepositoryTimeShiftIntervalEnum * _Nullable firstInterval __attribute__((swift_name("firstInterval")));
@property THETACBoolean * _Nullable isFrontFirst __attribute__((swift_name("isFrontFirst")));
@property THETACThetaRepositoryTimeShiftIntervalEnum * _Nullable secondInterval __attribute__((swift_name("secondInterval")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.Timeout")))
@interface THETACThetaRepositoryTimeout : THETACBase
- (instancetype)initWithConnectTimeout:(int64_t)connectTimeout requestTimeout:(int64_t)requestTimeout socketTimeout:(int64_t)socketTimeout __attribute__((swift_name("init(connectTimeout:requestTimeout:socketTimeout:)"))) __attribute__((objc_designated_initializer));
- (THETACThetaRepositoryTimeout *)doCopyConnectTimeout:(int64_t)connectTimeout requestTimeout:(int64_t)requestTimeout socketTimeout:(int64_t)socketTimeout __attribute__((swift_name("doCopy(connectTimeout:requestTimeout:socketTimeout:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t connectTimeout __attribute__((swift_name("connectTimeout")));
@property (readonly) int64_t requestTimeout __attribute__((swift_name("requestTimeout")));
@property (readonly) int64_t socketTimeout __attribute__((swift_name("socketTimeout")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.TopBottomCorrectionOptionEnum")))
@interface THETACThetaRepositoryTopBottomCorrectionOptionEnum : THETACKotlinEnum<THETACThetaRepositoryTopBottomCorrectionOptionEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryTopBottomCorrectionOptionEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryTopBottomCorrectionOptionEnum *apply __attribute__((swift_name("apply")));
@property (class, readonly) THETACThetaRepositoryTopBottomCorrectionOptionEnum *applyAuto __attribute__((swift_name("applyAuto")));
@property (class, readonly) THETACThetaRepositoryTopBottomCorrectionOptionEnum *applySemiauto __attribute__((swift_name("applySemiauto")));
@property (class, readonly) THETACThetaRepositoryTopBottomCorrectionOptionEnum *applySave __attribute__((swift_name("applySave")));
@property (class, readonly) THETACThetaRepositoryTopBottomCorrectionOptionEnum *applyLoad __attribute__((swift_name("applyLoad")));
@property (class, readonly) THETACThetaRepositoryTopBottomCorrectionOptionEnum *disapply __attribute__((swift_name("disapply")));
@property (class, readonly) THETACThetaRepositoryTopBottomCorrectionOptionEnum *manual __attribute__((swift_name("manual")));
+ (THETACKotlinArray<THETACThetaRepositoryTopBottomCorrectionOptionEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryTopBottomCorrectionOptionEnum *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.TopBottomCorrectionOptionEnumCompanion")))
@interface THETACThetaRepositoryTopBottomCorrectionOptionEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryTopBottomCorrectionOptionEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.TopBottomCorrectionRotation")))
@interface THETACThetaRepositoryTopBottomCorrectionRotation : THETACBase
- (instancetype)initWithPitch:(float)pitch roll:(float)roll yaw:(float)yaw __attribute__((swift_name("init(pitch:roll:yaw:)"))) __attribute__((objc_designated_initializer));
- (THETACThetaRepositoryTopBottomCorrectionRotation *)doCopyPitch:(float)pitch roll:(float)roll yaw:(float)yaw __attribute__((swift_name("doCopy(pitch:roll:yaw:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float pitch __attribute__((swift_name("pitch")));
@property (readonly) float roll __attribute__((swift_name("roll")));
@property (readonly) float yaw __attribute__((swift_name("yaw")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.VideoFileFormatEnum")))
@interface THETACThetaRepositoryVideoFileFormatEnum : THETACKotlinEnum<THETACThetaRepositoryVideoFileFormatEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryVideoFileFormatEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryVideoFileFormatEnum *videoHd __attribute__((swift_name("videoHd")));
@property (class, readonly) THETACThetaRepositoryVideoFileFormatEnum *videoFullHd __attribute__((swift_name("videoFullHd")));
@property (class, readonly) THETACThetaRepositoryVideoFileFormatEnum *video2k __attribute__((swift_name("video2k")));
@property (class, readonly) THETACThetaRepositoryVideoFileFormatEnum *video2kNoCodec __attribute__((swift_name("video2kNoCodec")));
@property (class, readonly) THETACThetaRepositoryVideoFileFormatEnum *video4k __attribute__((swift_name("video4k")));
@property (class, readonly) THETACThetaRepositoryVideoFileFormatEnum *video4kNoCodec __attribute__((swift_name("video4kNoCodec")));
@property (class, readonly) THETACThetaRepositoryVideoFileFormatEnum *video2k30f __attribute__((swift_name("video2k30f")));
@property (class, readonly) THETACThetaRepositoryVideoFileFormatEnum *video2k60f __attribute__((swift_name("video2k60f")));
@property (class, readonly) THETACThetaRepositoryVideoFileFormatEnum *video27k27522f __attribute__((swift_name("video27k27522f")));
@property (class, readonly) THETACThetaRepositoryVideoFileFormatEnum *video27k27525f __attribute__((swift_name("video27k27525f")));
@property (class, readonly) THETACThetaRepositoryVideoFileFormatEnum *video27k275210f __attribute__((swift_name("video27k275210f")));
@property (class, readonly) THETACThetaRepositoryVideoFileFormatEnum *video27k275230f __attribute__((swift_name("video27k275230f")));
@property (class, readonly) THETACThetaRepositoryVideoFileFormatEnum *video27k1f __attribute__((swift_name("video27k1f")));
@property (class, readonly) THETACThetaRepositoryVideoFileFormatEnum *video27k2f __attribute__((swift_name("video27k2f")));
@property (class, readonly) THETACThetaRepositoryVideoFileFormatEnum *video36k1f __attribute__((swift_name("video36k1f")));
@property (class, readonly) THETACThetaRepositoryVideoFileFormatEnum *video36k2f __attribute__((swift_name("video36k2f")));
@property (class, readonly) THETACThetaRepositoryVideoFileFormatEnum *video4k10f __attribute__((swift_name("video4k10f")));
@property (class, readonly) THETACThetaRepositoryVideoFileFormatEnum *video4k15f __attribute__((swift_name("video4k15f")));
@property (class, readonly) THETACThetaRepositoryVideoFileFormatEnum *video4k30f __attribute__((swift_name("video4k30f")));
@property (class, readonly) THETACThetaRepositoryVideoFileFormatEnum *video4k60f __attribute__((swift_name("video4k60f")));
@property (class, readonly) THETACThetaRepositoryVideoFileFormatEnum *video57k2f __attribute__((swift_name("video57k2f")));
@property (class, readonly) THETACThetaRepositoryVideoFileFormatEnum *video57k5f __attribute__((swift_name("video57k5f")));
@property (class, readonly) THETACThetaRepositoryVideoFileFormatEnum *video57k10f __attribute__((swift_name("video57k10f")));
@property (class, readonly) THETACThetaRepositoryVideoFileFormatEnum *video57k15f __attribute__((swift_name("video57k15f")));
@property (class, readonly) THETACThetaRepositoryVideoFileFormatEnum *video57k30f __attribute__((swift_name("video57k30f")));
@property (class, readonly) THETACThetaRepositoryVideoFileFormatEnum *video7k2f __attribute__((swift_name("video7k2f")));
@property (class, readonly) THETACThetaRepositoryVideoFileFormatEnum *video7k5f __attribute__((swift_name("video7k5f")));
@property (class, readonly) THETACThetaRepositoryVideoFileFormatEnum *video7k10f __attribute__((swift_name("video7k10f")));
+ (THETACKotlinArray<THETACThetaRepositoryVideoFileFormatEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryVideoFileFormatEnum *> *entries __attribute__((swift_name("entries")));
@property (readonly) THETACThetaRepositoryFileFormatEnum *fileFormat __attribute__((swift_name("fileFormat")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.VideoFileFormatEnumCompanion")))
@interface THETACThetaRepositoryVideoFileFormatEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryVideoFileFormatEnumCompanion *shared __attribute__((swift_name("shared")));
- (THETACThetaRepositoryVideoFileFormatEnum * _Nullable)getFileFormat:(THETACThetaRepositoryFileFormatEnum *)fileFormat __attribute__((swift_name("get(fileFormat:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.VideoStitchingEnum")))
@interface THETACThetaRepositoryVideoStitchingEnum : THETACKotlinEnum<THETACThetaRepositoryVideoStitchingEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryVideoStitchingEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryVideoStitchingEnum *none __attribute__((swift_name("none")));
@property (class, readonly) THETACThetaRepositoryVideoStitchingEnum *ondevice __attribute__((swift_name("ondevice")));
+ (THETACKotlinArray<THETACThetaRepositoryVideoStitchingEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryVideoStitchingEnum *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.VideoStitchingEnumCompanion")))
@interface THETACThetaRepositoryVideoStitchingEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryVideoStitchingEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.VisibilityReductionEnum")))
@interface THETACThetaRepositoryVisibilityReductionEnum : THETACKotlinEnum<THETACThetaRepositoryVisibilityReductionEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryVisibilityReductionEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryVisibilityReductionEnum *on __attribute__((swift_name("on")));
@property (class, readonly) THETACThetaRepositoryVisibilityReductionEnum *off __attribute__((swift_name("off")));
+ (THETACKotlinArray<THETACThetaRepositoryVisibilityReductionEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryVisibilityReductionEnum *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.VisibilityReductionEnumCompanion")))
@interface THETACThetaRepositoryVisibilityReductionEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryVisibilityReductionEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.WhiteBalanceAutoStrengthEnum")))
@interface THETACThetaRepositoryWhiteBalanceAutoStrengthEnum : THETACKotlinEnum<THETACThetaRepositoryWhiteBalanceAutoStrengthEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryWhiteBalanceAutoStrengthEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryWhiteBalanceAutoStrengthEnum *on __attribute__((swift_name("on")));
@property (class, readonly) THETACThetaRepositoryWhiteBalanceAutoStrengthEnum *off __attribute__((swift_name("off")));
+ (THETACKotlinArray<THETACThetaRepositoryWhiteBalanceAutoStrengthEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryWhiteBalanceAutoStrengthEnum *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.WhiteBalanceAutoStrengthEnumCompanion")))
@interface THETACThetaRepositoryWhiteBalanceAutoStrengthEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryWhiteBalanceAutoStrengthEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.WhiteBalanceEnum")))
@interface THETACThetaRepositoryWhiteBalanceEnum : THETACKotlinEnum<THETACThetaRepositoryWhiteBalanceEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryWhiteBalanceEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryWhiteBalanceEnum *auto_ __attribute__((swift_name("auto_")));
@property (class, readonly) THETACThetaRepositoryWhiteBalanceEnum *daylight __attribute__((swift_name("daylight")));
@property (class, readonly) THETACThetaRepositoryWhiteBalanceEnum *shade __attribute__((swift_name("shade")));
@property (class, readonly) THETACThetaRepositoryWhiteBalanceEnum *cloudyDaylight __attribute__((swift_name("cloudyDaylight")));
@property (class, readonly) THETACThetaRepositoryWhiteBalanceEnum *incandescent __attribute__((swift_name("incandescent")));
@property (class, readonly) THETACThetaRepositoryWhiteBalanceEnum *warmWhiteFluorescent __attribute__((swift_name("warmWhiteFluorescent")));
@property (class, readonly) THETACThetaRepositoryWhiteBalanceEnum *daylightFluorescent __attribute__((swift_name("daylightFluorescent")));
@property (class, readonly) THETACThetaRepositoryWhiteBalanceEnum *daywhiteFluorescent __attribute__((swift_name("daywhiteFluorescent")));
@property (class, readonly) THETACThetaRepositoryWhiteBalanceEnum *fluorescent __attribute__((swift_name("fluorescent")));
@property (class, readonly) THETACThetaRepositoryWhiteBalanceEnum *bulbFluorescent __attribute__((swift_name("bulbFluorescent")));
@property (class, readonly) THETACThetaRepositoryWhiteBalanceEnum *colorTemperature __attribute__((swift_name("colorTemperature")));
@property (class, readonly) THETACThetaRepositoryWhiteBalanceEnum *underwater __attribute__((swift_name("underwater")));
+ (THETACKotlinArray<THETACThetaRepositoryWhiteBalanceEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryWhiteBalanceEnum *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.WhiteBalanceEnumCompanion")))
@interface THETACThetaRepositoryWhiteBalanceEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryWhiteBalanceEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.WlanFrequencyEnum")))
@interface THETACThetaRepositoryWlanFrequencyEnum : THETACKotlinEnum<THETACThetaRepositoryWlanFrequencyEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACThetaRepositoryWlanFrequencyEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) THETACThetaRepositoryWlanFrequencyEnum *ghz24 __attribute__((swift_name("ghz24")));
@property (class, readonly) THETACThetaRepositoryWlanFrequencyEnum *ghz5 __attribute__((swift_name("ghz5")));
+ (THETACKotlinArray<THETACThetaRepositoryWlanFrequencyEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACThetaRepositoryWlanFrequencyEnum *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.WlanFrequencyEnumCompanion")))
@interface THETACThetaRepositoryWlanFrequencyEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACThetaRepositoryWlanFrequencyEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ThetaRepository.Xmp")))
@interface THETACThetaRepositoryXmp : THETACBase
- (instancetype)initWithPoseHeadingDegrees:(THETACDouble * _Nullable)poseHeadingDegrees fullPanoWidthPixels:(int32_t)fullPanoWidthPixels fullPanoHeightPixels:(int32_t)fullPanoHeightPixels __attribute__((swift_name("init(poseHeadingDegrees:fullPanoWidthPixels:fullPanoHeightPixels:)"))) __attribute__((objc_designated_initializer));
- (THETACThetaRepositoryXmp *)doCopyPoseHeadingDegrees:(THETACDouble * _Nullable)poseHeadingDegrees fullPanoWidthPixels:(int32_t)fullPanoWidthPixels fullPanoHeightPixels:(int32_t)fullPanoHeightPixels __attribute__((swift_name("doCopy(poseHeadingDegrees:fullPanoWidthPixels:fullPanoHeightPixels:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t fullPanoHeightPixels __attribute__((swift_name("fullPanoHeightPixels")));
@property (readonly) int32_t fullPanoWidthPixels __attribute__((swift_name("fullPanoWidthPixels")));
@property (readonly) THETACDouble * _Nullable poseHeadingDegrees __attribute__((swift_name("poseHeadingDegrees")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CameraEvent")))
@interface THETACCameraEvent : THETACBase
- (instancetype)initWithOptions:(THETACThetaRepositoryOptions * _Nullable)options state:(THETACThetaRepositoryThetaState * _Nullable)state __attribute__((swift_name("init(options:state:)"))) __attribute__((objc_designated_initializer));
- (THETACCameraEvent *)doCopyOptions:(THETACThetaRepositoryOptions * _Nullable)options state:(THETACThetaRepositoryThetaState * _Nullable)state __attribute__((swift_name("doCopy(options:state:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) THETACThetaRepositoryOptions * _Nullable options __attribute__((swift_name("options")));
@property (readonly) THETACThetaRepositoryThetaState * _Nullable state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventWebSocket")))
@interface THETACEventWebSocket : THETACBase
- (instancetype)initWithEndpoint:(NSString *)endpoint __attribute__((swift_name("init(endpoint:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)startCallback:(id<THETACEventWebSocketCallback>)callback completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("start(callback:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)stopWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("stop(completionHandler:)")));
@property (readonly) NSString *endpoint __attribute__((swift_name("endpoint")));
@end

__attribute__((swift_name("EventWebSocketCallback")))
@protocol THETACEventWebSocketCallback
@required
- (void)onClose __attribute__((swift_name("onClose()")));
- (void)onReceiveEvent:(THETACCameraEvent *)event __attribute__((swift_name("onReceive(event:)")));
@end

__attribute__((swift_name("Capture")))
@interface THETACCapture : THETACBase
- (THETACThetaRepositoryApertureEnum * _Nullable)getAperture __attribute__((swift_name("getAperture()")));
- (THETACInt * _Nullable)getColorTemperature __attribute__((swift_name("getColorTemperature()")));
- (THETACThetaRepositoryExposureCompensationEnum * _Nullable)getExposureCompensation __attribute__((swift_name("getExposureCompensation()")));
- (THETACThetaRepositoryExposureDelayEnum * _Nullable)getExposureDelay __attribute__((swift_name("getExposureDelay()")));
- (THETACThetaRepositoryExposureProgramEnum * _Nullable)getExposureProgram __attribute__((swift_name("getExposureProgram()")));
- (THETACThetaRepositoryGpsInfo * _Nullable)getGpsInfo __attribute__((swift_name("getGpsInfo()")));
- (THETACThetaRepositoryGpsTagRecordingEnum * _Nullable)getGpsTagRecording __attribute__((swift_name("getGpsTagRecording()")));
- (THETACThetaRepositoryIsoEnum * _Nullable)getIso __attribute__((swift_name("getIso()")));
- (THETACThetaRepositoryIsoAutoHighLimitEnum * _Nullable)getIsoAutoHighLimit __attribute__((swift_name("getIsoAutoHighLimit()")));
- (THETACThetaRepositoryWhiteBalanceEnum * _Nullable)getWhiteBalance __attribute__((swift_name("getWhiteBalance()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BurstCapture")))
@interface THETACBurstCapture : THETACCapture
- (THETACThetaRepositoryBurstModeEnum * _Nullable)getBurstMode __attribute__((swift_name("getBurstMode()")));
- (THETACThetaRepositoryBurstOption * _Nullable)getBurstOption __attribute__((swift_name("getBurstOption()")));
- (int64_t)getCheckStatusCommandInterval __attribute__((swift_name("getCheckStatusCommandInterval()")));
- (THETACBurstCapturing *)startCaptureCallback:(id<THETACBurstCaptureStartCaptureCallback>)callback __attribute__((swift_name("startCapture(callback:)")));
@end

__attribute__((swift_name("CaptureBuilder")))
@interface THETACCaptureBuilder<T> : THETACBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (T _Nullable)setApertureAperture:(THETACThetaRepositoryApertureEnum *)aperture __attribute__((swift_name("setAperture(aperture:)")));
- (T _Nullable)setColorTemperatureKelvin:(int32_t)kelvin __attribute__((swift_name("setColorTemperature(kelvin:)")));
- (T _Nullable)setExposureCompensationValue:(THETACThetaRepositoryExposureCompensationEnum *)value __attribute__((swift_name("setExposureCompensation(value:)")));
- (T _Nullable)setExposureDelayDelay:(THETACThetaRepositoryExposureDelayEnum *)delay __attribute__((swift_name("setExposureDelay(delay:)")));
- (T _Nullable)setExposureProgramProgram:(THETACThetaRepositoryExposureProgramEnum *)program __attribute__((swift_name("setExposureProgram(program:)")));
- (T _Nullable)setGpsInfoGpsInfo:(THETACThetaRepositoryGpsInfo *)gpsInfo __attribute__((swift_name("setGpsInfo(gpsInfo:)")));
- (T _Nullable)setGpsTagRecordingValue:(THETACThetaRepositoryGpsTagRecordingEnum *)value __attribute__((swift_name("setGpsTagRecording(value:)")));
- (T _Nullable)setIsoIso:(THETACThetaRepositoryIsoEnum *)iso __attribute__((swift_name("setIso(iso:)")));
- (T _Nullable)setIsoAutoHighLimitIso:(THETACThetaRepositoryIsoAutoHighLimitEnum *)iso __attribute__((swift_name("setIsoAutoHighLimit(iso:)")));
- (T _Nullable)setWhiteBalanceWhiteBalance:(THETACThetaRepositoryWhiteBalanceEnum *)whiteBalance __attribute__((swift_name("setWhiteBalance(whiteBalance:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BurstCapture.Builder")))
@interface THETACBurstCaptureBuilder : THETACCaptureBuilder<THETACBurstCaptureBuilder *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)buildWithCompletionHandler:(void (^)(THETACBurstCapture * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("build(completionHandler:)")));
- (THETACBurstCaptureBuilder *)setBurstModeMode:(THETACThetaRepositoryBurstModeEnum *)mode __attribute__((swift_name("setBurstMode(mode:)")));
- (THETACBurstCaptureBuilder *)setCheckStatusCommandIntervalTimeMillis:(int64_t)timeMillis __attribute__((swift_name("setCheckStatusCommandInterval(timeMillis:)")));
@end

__attribute__((swift_name("BurstCaptureStartCaptureCallback")))
@protocol THETACBurstCaptureStartCaptureCallback
@required
- (void)onCaptureCompletedFileUrls:(NSArray<NSString *> * _Nullable)fileUrls __attribute__((swift_name("onCaptureCompleted(fileUrls:)")));
- (void)onCaptureFailedException:(THETACThetaRepositoryThetaRepositoryException *)exception __attribute__((swift_name("onCaptureFailed(exception:)")));
- (void)onCapturingStatus:(THETACCapturingStatusEnum *)status __attribute__((swift_name("onCapturing(status:)")));
- (void)onProgressCompletion:(float)completion __attribute__((swift_name("onProgress(completion:)")));
- (void)onStopFailedException:(THETACThetaRepositoryThetaRepositoryException *)exception __attribute__((swift_name("onStopFailed(exception:)")));
@end

__attribute__((swift_name("Capturing")))
@interface THETACCapturing : THETACBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)stopCapture __attribute__((swift_name("stopCapture()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BurstCapturing")))
@interface THETACBurstCapturing : THETACCapturing
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)cancelCapture __attribute__((swift_name("cancelCapture()")));
- (void)stopCapture __attribute__((swift_name("stopCapture()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CapturingStatusEnum")))
@interface THETACCapturingStatusEnum : THETACKotlinEnum<THETACCapturingStatusEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) THETACCapturingStatusEnum *capturing __attribute__((swift_name("capturing")));
@property (class, readonly) THETACCapturingStatusEnum *selfTimerCountdown __attribute__((swift_name("selfTimerCountdown")));
+ (THETACKotlinArray<THETACCapturingStatusEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<THETACCapturingStatusEnum *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CompositeIntervalCapture")))
@interface THETACCompositeIntervalCapture : THETACCapture
- (int64_t)getCheckStatusCommandInterval __attribute__((swift_name("getCheckStatusCommandInterval()")));
- (THETACInt * _Nullable)getCompositeShootingOutputInterval __attribute__((swift_name("getCompositeShootingOutputInterval()")));
- (THETACInt * _Nullable)getCompositeShootingTime __attribute__((swift_name("getCompositeShootingTime()")));
- (THETACCompositeIntervalCapturing *)startCaptureCallback:(id<THETACCompositeIntervalCaptureStartCaptureCallback>)callback __attribute__((swift_name("startCapture(callback:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CompositeIntervalCapture.Builder")))
@interface THETACCompositeIntervalCaptureBuilder : THETACCaptureBuilder<THETACCompositeIntervalCaptureBuilder *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)buildWithCompletionHandler:(void (^)(THETACCompositeIntervalCapture * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("build(completionHandler:)")));
- (THETACCompositeIntervalCaptureBuilder *)setCheckStatusCommandIntervalTimeMillis:(int64_t)timeMillis __attribute__((swift_name("setCheckStatusCommandInterval(timeMillis:)")));
- (THETACCompositeIntervalCaptureBuilder *)setCompositeShootingOutputIntervalSec:(int32_t)sec __attribute__((swift_name("setCompositeShootingOutputInterval(sec:)")));
@end

__attribute__((swift_name("CompositeIntervalCaptureStartCaptureCallback")))
@protocol THETACCompositeIntervalCaptureStartCaptureCallback
@required
- (void)onCaptureCompletedFileUrls:(NSArray<NSString *> * _Nullable)fileUrls __attribute__((swift_name("onCaptureCompleted(fileUrls:)")));
- (void)onCaptureFailedException:(THETACThetaRepositoryThetaRepositoryException *)exception __attribute__((swift_name("onCaptureFailed(exception:)")));
- (void)onCapturingStatus:(THETACCapturingStatusEnum *)status __attribute__((swift_name("onCapturing(status:)")));
- (void)onProgressCompletion:(float)completion __attribute__((swift_name("onProgress(completion:)")));
- (void)onStopFailedException:(THETACThetaRepositoryThetaRepositoryException *)exception __attribute__((swift_name("onStopFailed(exception:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CompositeIntervalCapturing")))
@interface THETACCompositeIntervalCapturing : THETACCapturing
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)cancelCapture __attribute__((swift_name("cancelCapture()")));
- (void)stopCapture __attribute__((swift_name("stopCapture()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContinuousCapture")))
@interface THETACContinuousCapture : THETACCapture
- (int64_t)getCheckStatusCommandInterval __attribute__((swift_name("getCheckStatusCommandInterval()")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)getContinuousNumberWithCompletionHandler:(void (^)(THETACThetaRepositoryContinuousNumberEnum * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getContinuousNumber(completionHandler:)")));
- (THETACThetaRepositoryPhotoFileFormatEnum * _Nullable)getFileFormat __attribute__((swift_name("getFileFormat()")));
- (void)startCaptureCallback:(id<THETACContinuousCaptureStartCaptureCallback>)callback __attribute__((swift_name("startCapture(callback:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContinuousCapture.Builder")))
@interface THETACContinuousCaptureBuilder : THETACCaptureBuilder<THETACContinuousCaptureBuilder *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)buildWithCompletionHandler:(void (^)(THETACContinuousCapture * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("build(completionHandler:)")));
- (THETACContinuousCaptureBuilder *)setCheckStatusCommandIntervalTimeMillis:(int64_t)timeMillis __attribute__((swift_name("setCheckStatusCommandInterval(timeMillis:)")));
- (THETACContinuousCaptureBuilder *)setFileFormatFileFormat:(THETACThetaRepositoryPhotoFileFormatEnum *)fileFormat __attribute__((swift_name("setFileFormat(fileFormat:)")));
@end

__attribute__((swift_name("ContinuousCaptureStartCaptureCallback")))
@protocol THETACContinuousCaptureStartCaptureCallback
@required
- (void)onCaptureCompletedFileUrls:(NSArray<NSString *> * _Nullable)fileUrls __attribute__((swift_name("onCaptureCompleted(fileUrls:)")));
- (void)onCaptureFailedException:(THETACThetaRepositoryThetaRepositoryException *)exception __attribute__((swift_name("onCaptureFailed(exception:)")));
- (void)onCapturingStatus:(THETACCapturingStatusEnum *)status __attribute__((swift_name("onCapturing(status:)")));
- (void)onProgressCompletion:(float)completion __attribute__((swift_name("onProgress(completion:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LimitlessIntervalCapture")))
@interface THETACLimitlessIntervalCapture : THETACCapture
- (THETACInt * _Nullable)getCaptureInterval __attribute__((swift_name("getCaptureInterval()")));
- (int64_t)getCheckStatusCommandInterval __attribute__((swift_name("getCheckStatusCommandInterval()")));
- (THETACLimitlessIntervalCapturing *)startCaptureCallback:(id<THETACLimitlessIntervalCaptureStartCaptureCallback>)callback __attribute__((swift_name("startCapture(callback:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LimitlessIntervalCapture.Builder")))
@interface THETACLimitlessIntervalCaptureBuilder : THETACCaptureBuilder<THETACLimitlessIntervalCaptureBuilder *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)buildWithCompletionHandler:(void (^)(THETACLimitlessIntervalCapture * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("build(completionHandler:)")));
- (THETACLimitlessIntervalCaptureBuilder *)setCaptureIntervalInterval:(int32_t)interval __attribute__((swift_name("setCaptureInterval(interval:)")));
- (THETACLimitlessIntervalCaptureBuilder *)setCheckStatusCommandIntervalTimeMillis:(int64_t)timeMillis __attribute__((swift_name("setCheckStatusCommandInterval(timeMillis:)")));
@property (readonly) THETACThetaRepositoryThetaModel * _Nullable cameraModel __attribute__((swift_name("cameraModel")));
@end

__attribute__((swift_name("LimitlessIntervalCaptureStartCaptureCallback")))
@protocol THETACLimitlessIntervalCaptureStartCaptureCallback
@required
- (void)onCaptureCompletedFileUrls:(NSArray<NSString *> * _Nullable)fileUrls __attribute__((swift_name("onCaptureCompleted(fileUrls:)")));
- (void)onCaptureFailedException:(THETACThetaRepositoryThetaRepositoryException *)exception __attribute__((swift_name("onCaptureFailed(exception:)")));
- (void)onCapturingStatus:(THETACCapturingStatusEnum *)status __attribute__((swift_name("onCapturing(status:)")));
- (void)onStopFailedException:(THETACThetaRepositoryThetaRepositoryException *)exception __attribute__((swift_name("onStopFailed(exception:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LimitlessIntervalCapturing")))
@interface THETACLimitlessIntervalCapturing : THETACCapturing
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)stopCapture __attribute__((swift_name("stopCapture()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MultiBracketCapture")))
@interface THETACMultiBracketCapture : THETACCapture
@property (class, readonly, getter=companion) THETACMultiBracketCaptureCompanion *companion __attribute__((swift_name("companion")));
- (THETACThetaRepositoryBracketSettingList * _Nullable)getBracketSettings __attribute__((swift_name("getBracketSettings()")));
- (int64_t)getCheckStatusCommandInterval __attribute__((swift_name("getCheckStatusCommandInterval()")));
- (THETACMultiBracketCapturing *)startCaptureCallback:(id<THETACMultiBracketCaptureStartCaptureCallback>)callback __attribute__((swift_name("startCapture(callback:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MultiBracketCapture.Builder")))
@interface THETACMultiBracketCaptureBuilder : THETACCaptureBuilder<THETACMultiBracketCaptureBuilder *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACMultiBracketCaptureBuilderCompanion *companion __attribute__((swift_name("companion")));
- (THETACMultiBracketCaptureBuilder *)addBracketParametersAperture:(THETACThetaRepositoryApertureEnum * _Nullable)aperture colorTemperature:(THETACInt * _Nullable)colorTemperature exposureCompensation:(THETACThetaRepositoryExposureCompensationEnum * _Nullable)exposureCompensation exposureProgram:(THETACThetaRepositoryExposureProgramEnum * _Nullable)exposureProgram iso:(THETACThetaRepositoryIsoEnum * _Nullable)iso shutterSpeed:(THETACThetaRepositoryShutterSpeedEnum * _Nullable)shutterSpeed whiteBalance:(THETACThetaRepositoryWhiteBalanceEnum * _Nullable)whiteBalance __attribute__((swift_name("addBracketParameters(aperture:colorTemperature:exposureCompensation:exposureProgram:iso:shutterSpeed:whiteBalance:)")));
- (THETACMultiBracketCaptureBuilder *)addBracketSettingListBracketSettingList:(NSArray<THETACThetaRepositoryBracketSetting *> *)bracketSettingList __attribute__((swift_name("addBracketSettingList(bracketSettingList:)")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)buildWithCompletionHandler:(void (^)(THETACMultiBracketCapture * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("build(completionHandler:)")));
- (THETACMultiBracketCaptureBuilder *)setCheckStatusCommandIntervalTimeMillis:(int64_t)timeMillis __attribute__((swift_name("setCheckStatusCommandInterval(timeMillis:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MultiBracketCapture.BuilderCompanion")))
@interface THETACMultiBracketCaptureBuilderCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACMultiBracketCaptureBuilderCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t DEFAULT_COLOR_TEMPERATURE __attribute__((swift_name("DEFAULT_COLOR_TEMPERATURE")));
@property (readonly) int32_t MAX_SHOTS __attribute__((swift_name("MAX_SHOTS")));
@property (readonly) int32_t MIN_SHOTS __attribute__((swift_name("MIN_SHOTS")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MultiBracketCapture.Companion")))
@interface THETACMultiBracketCaptureCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACMultiBracketCaptureCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int64_t SC2_STATE_CHECK_INTERVAL __attribute__((swift_name("SC2_STATE_CHECK_INTERVAL")));
@end

__attribute__((swift_name("MultiBracketCaptureStartCaptureCallback")))
@protocol THETACMultiBracketCaptureStartCaptureCallback
@required
- (void)onCaptureCompletedFileUrls:(NSArray<NSString *> * _Nullable)fileUrls __attribute__((swift_name("onCaptureCompleted(fileUrls:)")));
- (void)onCaptureFailedException:(THETACThetaRepositoryThetaRepositoryException *)exception __attribute__((swift_name("onCaptureFailed(exception:)")));
- (void)onCapturingStatus:(THETACCapturingStatusEnum *)status __attribute__((swift_name("onCapturing(status:)")));
- (void)onProgressCompletion:(float)completion __attribute__((swift_name("onProgress(completion:)")));
- (void)onStopFailedException:(THETACThetaRepositoryThetaRepositoryException *)exception __attribute__((swift_name("onStopFailed(exception:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MultiBracketCapturing")))
@interface THETACMultiBracketCapturing : THETACCapturing
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)cancelCapture __attribute__((swift_name("cancelCapture()")));
- (void)stopCapture __attribute__((swift_name("stopCapture()")));
@end

__attribute__((swift_name("PhotoCaptureBase")))
@interface THETACPhotoCaptureBase : THETACCapture
- (THETACThetaRepositoryPhotoFileFormatEnum * _Nullable)getFileFormat __attribute__((swift_name("getFileFormat()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhotoCapture")))
@interface THETACPhotoCapture : THETACPhotoCaptureBase
- (int64_t)getCheckStatusCommandInterval __attribute__((swift_name("getCheckStatusCommandInterval()")));
- (THETACThetaRepositoryFilterEnum * _Nullable)getFilter __attribute__((swift_name("getFilter()")));
- (THETACThetaRepositoryPresetEnum * _Nullable)getPreset __attribute__((swift_name("getPreset()")));
- (void)takePictureCallback:(id<THETACPhotoCaptureTakePictureCallback>)callback __attribute__((swift_name("takePicture(callback:)")));
@end

__attribute__((swift_name("PhotoCaptureBaseBuilder")))
@interface THETACPhotoCaptureBaseBuilder<T> : THETACCaptureBuilder<T>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (T _Nullable)setFileFormatFileFormat:(THETACThetaRepositoryPhotoFileFormatEnum *)fileFormat __attribute__((swift_name("setFileFormat(fileFormat:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhotoCapture.Builder")))
@interface THETACPhotoCaptureBuilder : THETACPhotoCaptureBaseBuilder<THETACPhotoCaptureBuilder *>

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)buildWithCompletionHandler:(void (^)(THETACPhotoCapture * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("build(completionHandler:)")));
- (THETACPhotoCaptureBuilder *)setCheckStatusCommandIntervalTimeMillis:(int64_t)timeMillis __attribute__((swift_name("setCheckStatusCommandInterval(timeMillis:)")));
- (THETACPhotoCaptureBuilder *)setFilterFilter:(THETACThetaRepositoryFilterEnum *)filter __attribute__((swift_name("setFilter(filter:)")));
- (THETACPhotoCaptureBuilder *)setPresetPreset:(THETACThetaRepositoryPresetEnum *)preset __attribute__((swift_name("setPreset(preset:)")));
@end

__attribute__((swift_name("PhotoCaptureTakePictureCallback")))
@protocol THETACPhotoCaptureTakePictureCallback
@required
- (void)onCapturingStatus:(THETACCapturingStatusEnum *)status __attribute__((swift_name("onCapturing(status:)")));
- (void)onErrorException:(THETACThetaRepositoryThetaRepositoryException *)exception __attribute__((swift_name("onError(exception:)")));
- (void)onSuccessFileUrl:(NSString * _Nullable)fileUrl __attribute__((swift_name("onSuccess(fileUrl:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ShotCountSpecifiedIntervalCapture")))
@interface THETACShotCountSpecifiedIntervalCapture : THETACCapture
- (THETACInt * _Nullable)getCaptureInterval __attribute__((swift_name("getCaptureInterval()")));
- (THETACInt * _Nullable)getCaptureNumber __attribute__((swift_name("getCaptureNumber()")));
- (int64_t)getCheckStatusCommandInterval __attribute__((swift_name("getCheckStatusCommandInterval()")));
- (THETACShotCountSpecifiedIntervalCapturing *)startCaptureCallback:(id<THETACShotCountSpecifiedIntervalCaptureStartCaptureCallback>)callback __attribute__((swift_name("startCapture(callback:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ShotCountSpecifiedIntervalCapture.Builder")))
@interface THETACShotCountSpecifiedIntervalCaptureBuilder : THETACCaptureBuilder<THETACShotCountSpecifiedIntervalCaptureBuilder *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)buildWithCompletionHandler:(void (^)(THETACShotCountSpecifiedIntervalCapture * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("build(completionHandler:)")));
- (THETACShotCountSpecifiedIntervalCaptureBuilder *)setCaptureIntervalInterval:(int32_t)interval __attribute__((swift_name("setCaptureInterval(interval:)")));
- (THETACShotCountSpecifiedIntervalCaptureBuilder *)setCheckStatusCommandIntervalTimeMillis:(int64_t)timeMillis __attribute__((swift_name("setCheckStatusCommandInterval(timeMillis:)")));
@end

__attribute__((swift_name("ShotCountSpecifiedIntervalCaptureStartCaptureCallback")))
@protocol THETACShotCountSpecifiedIntervalCaptureStartCaptureCallback
@required
- (void)onCaptureCompletedFileUrls:(NSArray<NSString *> * _Nullable)fileUrls __attribute__((swift_name("onCaptureCompleted(fileUrls:)")));
- (void)onCaptureFailedException:(THETACThetaRepositoryThetaRepositoryException *)exception __attribute__((swift_name("onCaptureFailed(exception:)")));
- (void)onCapturingStatus:(THETACCapturingStatusEnum *)status __attribute__((swift_name("onCapturing(status:)")));
- (void)onProgressCompletion:(float)completion __attribute__((swift_name("onProgress(completion:)")));
- (void)onStopFailedException:(THETACThetaRepositoryThetaRepositoryException *)exception __attribute__((swift_name("onStopFailed(exception:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ShotCountSpecifiedIntervalCapturing")))
@interface THETACShotCountSpecifiedIntervalCapturing : THETACCapturing
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)cancelCapture __attribute__((swift_name("cancelCapture()")));
- (void)stopCapture __attribute__((swift_name("stopCapture()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimeShiftCapture")))
@interface THETACTimeShiftCapture : THETACCapture
- (int64_t)getCheckStatusCommandInterval __attribute__((swift_name("getCheckStatusCommandInterval()")));
- (THETACThetaRepositoryTimeShiftSetting * _Nullable)getTimeShiftSetting __attribute__((swift_name("getTimeShiftSetting()")));
- (THETACTimeShiftCapturing *)startCaptureCallback:(id<THETACTimeShiftCaptureStartCaptureCallback>)callback __attribute__((swift_name("startCapture(callback:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimeShiftCapture.Builder")))
@interface THETACTimeShiftCaptureBuilder : THETACCaptureBuilder<THETACTimeShiftCaptureBuilder *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) THETACTimeShiftCaptureBuilderCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)buildWithCompletionHandler:(void (^)(THETACTimeShiftCapture * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("build(completionHandler:)")));
- (THETACTimeShiftCaptureBuilder *)setCheckStatusCommandIntervalTimeMillis:(int64_t)timeMillis __attribute__((swift_name("setCheckStatusCommandInterval(timeMillis:)")));
- (THETACTimeShiftCaptureBuilder *)setFirstIntervalInterval:(THETACThetaRepositoryTimeShiftIntervalEnum *)interval __attribute__((swift_name("setFirstInterval(interval:)")));
- (THETACTimeShiftCaptureBuilder *)setIsFrontFirstIsFrontFirst:(BOOL)isFrontFirst __attribute__((swift_name("setIsFrontFirst(isFrontFirst:)")));
- (THETACTimeShiftCaptureBuilder *)setSecondIntervalInterval:(THETACThetaRepositoryTimeShiftIntervalEnum *)interval __attribute__((swift_name("setSecondInterval(interval:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimeShiftCapture.BuilderCompanion")))
@interface THETACTimeShiftCaptureBuilderCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACTimeShiftCaptureBuilderCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t SC2B_DEFAULT_EXPOSURE_DELAY __attribute__((swift_name("SC2B_DEFAULT_EXPOSURE_DELAY")));
@property (readonly) int32_t SC2B_DEFAULT_FIRST_INTERVAL __attribute__((swift_name("SC2B_DEFAULT_FIRST_INTERVAL")));
@property (readonly) int32_t SC2B_DEFAULT_SECOND_INTERVAL __attribute__((swift_name("SC2B_DEFAULT_SECOND_INTERVAL")));
@end

__attribute__((swift_name("TimeShiftCaptureStartCaptureCallback")))
@protocol THETACTimeShiftCaptureStartCaptureCallback
@required
- (void)onCaptureCompletedFileUrl:(NSString * _Nullable)fileUrl __attribute__((swift_name("onCaptureCompleted(fileUrl:)")));
- (void)onCaptureFailedException:(THETACThetaRepositoryThetaRepositoryException *)exception __attribute__((swift_name("onCaptureFailed(exception:)")));
- (void)onCapturingStatus:(THETACCapturingStatusEnum *)status __attribute__((swift_name("onCapturing(status:)")));
- (void)onProgressCompletion:(float)completion __attribute__((swift_name("onProgress(completion:)")));
- (void)onStopFailedException:(THETACThetaRepositoryThetaRepositoryException *)exception __attribute__((swift_name("onStopFailed(exception:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimeShiftCapturing")))
@interface THETACTimeShiftCapturing : THETACCapturing
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)cancelCapture __attribute__((swift_name("cancelCapture()")));
- (void)stopCapture __attribute__((swift_name("stopCapture()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoCapture")))
@interface THETACVideoCapture : THETACCapture
- (int64_t)getCheckStatusCommandInterval __attribute__((swift_name("getCheckStatusCommandInterval()")));
- (THETACThetaRepositoryVideoFileFormatEnum * _Nullable)getFileFormat __attribute__((swift_name("getFileFormat()")));
- (THETACThetaRepositoryMaxRecordableTimeEnum * _Nullable)getMaxRecordableTime __attribute__((swift_name("getMaxRecordableTime()")));
- (THETACVideoCapturing *)startCaptureCallback:(id<THETACVideoCaptureStartCaptureCallback>)callback __attribute__((swift_name("startCapture(callback:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoCapture.Builder")))
@interface THETACVideoCaptureBuilder : THETACCaptureBuilder<THETACVideoCaptureBuilder *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));

/**
 * @note This method converts all Kotlin exceptions to errors.
*/
- (void)buildWithCompletionHandler:(void (^)(THETACVideoCapture * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("build(completionHandler:)")));
- (THETACVideoCaptureBuilder *)setCheckStatusCommandIntervalTimeMillis:(int64_t)timeMillis __attribute__((swift_name("setCheckStatusCommandInterval(timeMillis:)")));
- (THETACVideoCaptureBuilder *)setFileFormatFileFormat:(THETACThetaRepositoryVideoFileFormatEnum *)fileFormat __attribute__((swift_name("setFileFormat(fileFormat:)")));
- (THETACVideoCaptureBuilder *)setMaxRecordableTimeTime:(THETACThetaRepositoryMaxRecordableTimeEnum *)time __attribute__((swift_name("setMaxRecordableTime(time:)")));
@end

__attribute__((swift_name("VideoCaptureStartCaptureCallback")))
@protocol THETACVideoCaptureStartCaptureCallback
@required
- (void)onCaptureCompletedFileUrl:(NSString * _Nullable)fileUrl __attribute__((swift_name("onCaptureCompleted(fileUrl:)")));
- (void)onCaptureFailedException:(THETACThetaRepositoryThetaRepositoryException *)exception __attribute__((swift_name("onCaptureFailed(exception:)")));
- (void)onCaptureStartedFileUrl:(NSString * _Nullable)fileUrl __attribute__((swift_name("onCaptureStarted(fileUrl:)")));
- (void)onCapturingStatus:(THETACCapturingStatusEnum *)status __attribute__((swift_name("onCapturing(status:)")));
- (void)onStopFailedException:(THETACThetaRepositoryThetaRepositoryException *)exception __attribute__((swift_name("onStopFailed(exception:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoCapturing")))
@interface THETACVideoCapturing : THETACCapturing
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)stopCapture __attribute__((swift_name("stopCapture()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EndPoint")))
@interface THETACEndPoint : THETACBase
- (instancetype)initWithHttpPort:(int32_t)httpPort httpUpdatesPort:(int32_t)httpUpdatesPort __attribute__((swift_name("init(httpPort:httpUpdatesPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACEndPointCompanion *companion __attribute__((swift_name("companion")));
- (THETACEndPoint *)doCopyHttpPort:(int32_t)httpPort httpUpdatesPort:(int32_t)httpUpdatesPort __attribute__((swift_name("doCopy(httpPort:httpUpdatesPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/ricoh360/thetaclient/transferred/NumberAsIntSerializer))
*/
@property (readonly) int32_t httpPort __attribute__((swift_name("httpPort")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/ricoh360/thetaclient/transferred/NumberAsIntSerializer))
*/
@property (readonly) int32_t httpUpdatesPort __attribute__((swift_name("httpUpdatesPort")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EndPoint.Companion")))
@interface THETACEndPointCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACEndPointCompanion *shared __attribute__((swift_name("shared")));
- (id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformKt")))
@interface THETACPlatformKt : THETACBase
+ (int64_t)currentTimeMillis __attribute__((swift_name("currentTimeMillis()")));
+ (NSData *)frameFromPacket:(THETACKotlinPair<THETACKotlinByteArray *, THETACInt *> *)packet __attribute__((swift_name("frameFrom(packet:)")));
+ (NSString *)randomUUID __attribute__((swift_name("randomUUID()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ApiClientKt")))
@interface THETACApiClientKt : THETACBase
+ (id<THETACMultipartPostClient>)getMultipartPostClient __attribute__((swift_name("getMultipartPostClient()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebSocketClientKt")))
@interface THETACWebSocketClientKt : THETACBase
+ (NSString *)changeUrlToWebSocketUrl:(NSString *)url __attribute__((swift_name("changeUrlToWebSocket(url:)")));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface THETACKotlinIllegalStateException : THETACKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(THETACKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(THETACKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface THETACKotlinCancellationException : THETACKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(THETACKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(THETACKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface THETACKotlinByteArray : THETACBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(THETACByte *(^)(THETACInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (THETACKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface THETACKotlinPair<__covariant A, __covariant B> : THETACBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (THETACKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface THETACKtor_httpHttpMethod : THETACBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) THETACKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (THETACKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface THETACKotlinArray<T> : THETACBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(THETACInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<THETACKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol THETACKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<THETACKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol THETACKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol THETACKotlinSuspendFunction1 <THETACKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface THETACKotlinEnumCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol THETACKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol THETACKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol THETACKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol THETACKotlinKClass <THETACKotlinKDeclarationContainer, THETACKotlinKAnnotatedElement, THETACKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol THETACKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<THETACKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<THETACKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol THETACKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<THETACKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<THETACKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol THETACKotlinx_serialization_coreKSerializer <THETACKotlinx_serialization_coreSerializationStrategy, THETACKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((swift_name("KotlinIterator")))
@protocol THETACKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface THETACKotlinByteIterator : THETACBase <THETACKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (THETACByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface THETACKtor_httpHttpMethodCompanion : THETACBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) THETACKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (THETACKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<THETACKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) THETACKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) THETACKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) THETACKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) THETACKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) THETACKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) THETACKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) THETACKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol THETACKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol THETACKotlinx_serialization_coreEncoder
@required
- (id<THETACKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<THETACKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<THETACKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<THETACKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<THETACKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) THETACKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol THETACKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<THETACKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<THETACKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<THETACKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) THETACKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol THETACKotlinx_serialization_coreDecoder
@required
- (id<THETACKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<THETACKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (THETACKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<THETACKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<THETACKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) THETACKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol THETACKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<THETACKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<THETACKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<THETACKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) THETACKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface THETACKotlinx_serialization_coreSerializersModule : THETACBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<THETACKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<THETACKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<THETACKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<THETACKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<THETACKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<THETACKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<THETACKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<THETACKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol THETACKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface THETACKotlinx_serialization_coreSerialKind : THETACBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol THETACKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<THETACKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<THETACKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<THETACKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<THETACKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) THETACKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface THETACKotlinNothing : THETACBase
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol THETACKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<THETACKotlinKClass>)kClass provider:(id<THETACKotlinx_serialization_coreKSerializer> (^)(NSArray<id<THETACKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<THETACKotlinKClass>)kClass serializer:(id<THETACKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<THETACKotlinKClass>)baseClass actualClass:(id<THETACKotlinKClass>)actualClass actualSerializer:(id<THETACKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<THETACKotlinKClass>)baseClass defaultDeserializerProvider:(id<THETACKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<THETACKotlinKClass>)baseClass defaultDeserializerProvider:(id<THETACKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<THETACKotlinKClass>)baseClass defaultSerializerProvider:(id<THETACKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
