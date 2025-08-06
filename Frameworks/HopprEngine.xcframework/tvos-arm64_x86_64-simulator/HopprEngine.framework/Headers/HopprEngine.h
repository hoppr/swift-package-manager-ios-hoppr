#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class HopprEngineNodeResult, HopprEngineGraphResult, HopprEngineGraphContext, HopprEngineNodeGraph, HopprEngineBaseNode, HopprEngineNode, HopprEngineNodeEngine, HopprEngineTrigger, HopprEngineTriggerResult, HopprEngineNodeSlot, HopprEngineNodeInputResult, HopprEngineFunctionExecutionRule, HopprEngineNodeReference, HopprEngineFunctionBaseNode, HopprEngineKotlinUnit, HopprEngineKotlinEnumCompanion, HopprEngineKotlinEnum<E>, HopprEngineDataValueType, HopprEngineKotlinArray<T>, HopprEngineHopprEngine, HopprEngineGraphReference, HopprEngineNodeSlotReference, HopprEngineNodeSuccessResult, HopprEngineKotlinx_serialization_jsonJsonElementCompanion, HopprEngineKotlinx_serialization_jsonJsonElement, HopprEngineKotlinThrowable, HopprEngineKotlinx_serialization_coreSerializersModule, HopprEngineKotlinx_serialization_coreSerialKind, HopprEngineKotlinNothing;

@protocol HopprEngineIDataType, HopprEngineKotlinComparable, HopprEngineKotlinIterator, HopprEngineKotlinx_serialization_coreKSerializer, HopprEngineKotlinx_serialization_coreEncoder, HopprEngineKotlinx_serialization_coreSerialDescriptor, HopprEngineKotlinx_serialization_coreSerializationStrategy, HopprEngineKotlinx_serialization_coreDecoder, HopprEngineKotlinx_serialization_coreDeserializationStrategy, HopprEngineKotlinx_serialization_coreCompositeEncoder, HopprEngineKotlinAnnotation, HopprEngineKotlinx_serialization_coreCompositeDecoder, HopprEngineKotlinx_serialization_coreSerializersModuleCollector, HopprEngineKotlinKClass, HopprEngineKotlinKDeclarationContainer, HopprEngineKotlinKAnnotatedElement, HopprEngineKotlinKClassifier;

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
@interface HopprEngineBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface HopprEngineBase (HopprEngineBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface HopprEngineMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface HopprEngineMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorHopprEngineKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface HopprEngineNumber : NSNumber
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
@interface HopprEngineByte : HopprEngineNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface HopprEngineUByte : HopprEngineNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface HopprEngineShort : HopprEngineNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface HopprEngineUShort : HopprEngineNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface HopprEngineInt : HopprEngineNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface HopprEngineUInt : HopprEngineNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface HopprEngineLong : HopprEngineNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface HopprEngineULong : HopprEngineNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface HopprEngineFloat : HopprEngineNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface HopprEngineDouble : HopprEngineNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface HopprEngineBoolean : HopprEngineNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphResult")))
@interface HopprEngineGraphResult : HopprEngineBase
- (instancetype)initWithGraphId:(NSString *)graphId inputs:(NSDictionary<NSString *, id<HopprEngineIDataType>> *)inputs outputs:(NSDictionary<NSString *, id<HopprEngineIDataType>> *)outputs result:(HopprEngineNodeResult *)result __attribute__((swift_name("init(graphId:inputs:outputs:result:)"))) __attribute__((objc_designated_initializer));
- (HopprEngineGraphResult *)doCopyGraphId:(NSString *)graphId inputs:(NSDictionary<NSString *, id<HopprEngineIDataType>> *)inputs outputs:(NSDictionary<NSString *, id<HopprEngineIDataType>> *)outputs result:(HopprEngineNodeResult *)result __attribute__((swift_name("doCopy(graphId:inputs:outputs:result:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *graphId __attribute__((swift_name("graphId")));
@property (readonly) NSDictionary<NSString *, id<HopprEngineIDataType>> *inputs __attribute__((swift_name("inputs")));
@property (readonly) NSDictionary<NSString *, id<HopprEngineIDataType>> *outputs __attribute__((swift_name("outputs")));
@property (readonly) HopprEngineNodeResult *result __attribute__((swift_name("result")));
@end

__attribute__((swift_name("NodeEngine")))
@interface HopprEngineNodeEngine : HopprEngineBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)clearGraphs __attribute__((swift_name("clearGraphs()")));
- (HopprEngineGraphContext *)compileContextGraphId:(NSString *)graphId inputs:(NSDictionary<NSString *, id<HopprEngineIDataType>> *)inputs parentContext:(HopprEngineGraphContext * _Nullable)parentContext __attribute__((swift_name("compileContext(graphId:inputs:parentContext:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (HopprEngineGraphResult * _Nullable)executeGraphContext:(HopprEngineGraphContext *)context error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("executeGraph(context:)")));
- (void)registerGraphGraph:(HopprEngineNodeGraph *)graph __attribute__((swift_name("registerGraph(graph:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)registerHandlerName:(NSString *)name error:(NSError * _Nullable * _Nullable)error factory:(HopprEngineBaseNode *(^)(HopprEngineNode *))factory __attribute__((swift_name("registerHandler(name:factory:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)setLogFunctionLog:(void (^)(NSString *, NSString *))log __attribute__((swift_name("setLogFunction(log:)")));
@property (readonly) HopprEngineMutableDictionary<NSString *, id<HopprEngineIDataType>> *globalVariables __attribute__((swift_name("globalVariables")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property void (^ _Nullable logF)(NSString *, NSString *) __attribute__((swift_name("logF")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HopprEngine")))
@interface HopprEngineHopprEngine : HopprEngineNodeEngine
- (instancetype)initWithLog:(void (^)(NSString *, NSString *))log __attribute__((swift_name("init(log:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)addTriggerToQueueNextTrigger:(HopprEngineTrigger *)nextTrigger error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("addTriggerToQueue(nextTrigger:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (NSArray<HopprEngineTriggerResult *> * _Nullable)executeTriggerNextTrigger:(HopprEngineTrigger *)nextTrigger error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("executeTrigger(nextTrigger:)")));
- (void)registerHandlerWrapperName:(NSString *)name factory:(HopprEngineBaseNode *(^)(HopprEngineNode *))factory __attribute__((swift_name("registerHandlerWrapper(name:factory:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (BOOL)replaceGraphsNodeGraphs:(NSArray<HopprEngineNodeGraph *> *)nodeGraphs error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("replaceGraphs(nodeGraphs:)")));
@property (readonly) void (^log)(NSString *, NSString *) __attribute__((swift_name("log")));
@end

__attribute__((swift_name("BaseNode")))
@interface HopprEngineBaseNode : HopprEngineBase
- (instancetype)initWithNodeId:(NSString *)nodeId inputs:(NSDictionary<NSString *, HopprEngineNodeSlot *> *)inputs __attribute__((swift_name("init(nodeId:inputs:)"))) __attribute__((objc_designated_initializer));
- (HopprEngineNodeResult *)executeGraphCtx:(HopprEngineGraphContext *)graphCtx __attribute__((swift_name("execute(graphCtx:)")));
- (HopprEngineNodeInputResult *)getInputGraphCtx:(HopprEngineGraphContext *)graphCtx inputKey:(NSString *)inputKey __attribute__((swift_name("getInput(graphCtx:inputKey:)")));
- (NSDictionary<NSString *, HopprEngineNodeInputResult *> *)getInputsGraphCtx:(HopprEngineGraphContext *)graphCtx __attribute__((swift_name("getInputs(graphCtx:)")));
- (HopprEngineNodeInputResult *)getOutputGraphCtx:(HopprEngineGraphContext *)graphCtx output:(NSString *)output __attribute__((swift_name("getOutput(graphCtx:output:)")));
@property (readonly) NSDictionary<NSString *, HopprEngineNodeSlot *> *inputs __attribute__((swift_name("inputs")));
@property (readonly) NSString *nodeId __attribute__((swift_name("nodeId")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property NSDictionary<NSString *, id<HopprEngineIDataType>> *outputs __attribute__((swift_name("outputs")));
@end

__attribute__((swift_name("FunctionBaseNode")))
@interface HopprEngineFunctionBaseNode : HopprEngineBaseNode
- (instancetype)initWithNode:(HopprEngineNode *)node __attribute__((swift_name("init(node:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithNodeId:(NSString *)nodeId inputs:(NSDictionary<NSString *, HopprEngineNodeSlot *> *)inputs __attribute__((swift_name("init(nodeId:inputs:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (HopprEngineNodeResult *)executeGraphCtx:(HopprEngineGraphContext *)graphCtx __attribute__((swift_name("execute(graphCtx:)")));
- (HopprEngineNodeInputResult *)getOutputGraphCtx:(HopprEngineGraphContext *)graphCtx output:(NSString *)output __attribute__((swift_name("getOutput(graphCtx:output:)")));
- (NSDictionary<NSString *, id<HopprEngineIDataType>> *)handlerCtx:(HopprEngineGraphContext *)ctx inputs:(NSDictionary<NSString *, id<HopprEngineIDataType>> *)inputs __attribute__((swift_name("handler(ctx:inputs:)")));
@property HopprEngineFunctionExecutionRule *executionRule __attribute__((swift_name("executionRule")));
@property (readonly) HopprEngineNodeReference * _Nullable next __attribute__((swift_name("next")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataNode")))
@interface HopprEngineDataNode : HopprEngineFunctionBaseNode
- (instancetype)initWithNode:(HopprEngineNode *)node __attribute__((swift_name("init(node:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id<HopprEngineIDataType>> *)handlerCtx:(HopprEngineGraphContext *)ctx inputs:(NSDictionary<NSString *, id<HopprEngineIDataType>> *)inputs __attribute__((swift_name("handler(ctx:inputs:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonParseNode")))
@interface HopprEngineJsonParseNode : HopprEngineFunctionBaseNode
- (instancetype)initWithNode:(HopprEngineNode *)node __attribute__((swift_name("init(node:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id<HopprEngineIDataType>> *)handlerCtx:(HopprEngineGraphContext *)ctx inputs:(NSDictionary<NSString *, id<HopprEngineIDataType>> *)inputs __attribute__((swift_name("handler(ctx:inputs:)")));
@end

__attribute__((swift_name("IDataType")))
@protocol HopprEngineIDataType
@required
- (NSString *)toJsonString __attribute__((swift_name("toJsonString()")));
@property (readonly) NSString *dataType __attribute__((swift_name("dataType")));
@property (readonly) id value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataBoolean")))
@interface HopprEngineDataBoolean : HopprEngineBase <HopprEngineIDataType>
- (instancetype)initWithValue:(BOOL)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)toJsonString __attribute__((swift_name("toJsonString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *dataType __attribute__((swift_name("dataType")));
@property (readonly) HopprEngineBoolean *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataDouble")))
@interface HopprEngineDataDouble : HopprEngineBase <HopprEngineIDataType>
- (instancetype)initWithValue:(double)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)toJsonString __attribute__((swift_name("toJsonString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *dataType __attribute__((swift_name("dataType")));
@property (readonly) HopprEngineDouble *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataList")))
@interface HopprEngineDataList : HopprEngineBase <HopprEngineIDataType>
- (instancetype)initWithValue:(NSArray<id<HopprEngineIDataType>> *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)toJsonString __attribute__((swift_name("toJsonString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *dataType __attribute__((swift_name("dataType")));
@property (readonly) NSArray<id<HopprEngineIDataType>> *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataLong")))
@interface HopprEngineDataLong : HopprEngineBase <HopprEngineIDataType>
- (instancetype)initWithValue:(int32_t)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithValue_:(int64_t)value __attribute__((swift_name("init(value_:)"))) __attribute__((objc_designated_initializer));
- (NSString *)toJsonString __attribute__((swift_name("toJsonString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *dataType __attribute__((swift_name("dataType")));
@property (readonly) HopprEngineLong *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataMap")))
@interface HopprEngineDataMap : HopprEngineBase <HopprEngineIDataType>
- (instancetype)initWithValue:(NSDictionary<NSString *, id<HopprEngineIDataType>> *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)toJsonString __attribute__((swift_name("toJsonString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *dataType __attribute__((swift_name("dataType")));
@property (readonly) NSDictionary<NSString *, id<HopprEngineIDataType>> *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataNull")))
@interface HopprEngineDataNull : HopprEngineBase <HopprEngineIDataType>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)toJsonString __attribute__((swift_name("toJsonString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *dataType __attribute__((swift_name("dataType")));
@property (readonly) HopprEngineKotlinUnit *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataString")))
@interface HopprEngineDataString : HopprEngineBase <HopprEngineIDataType>
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)toJsonString __attribute__((swift_name("toJsonString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *dataType __attribute__((swift_name("dataType")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol HopprEngineKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface HopprEngineKotlinEnum<E> : HopprEngineBase <HopprEngineKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HopprEngineKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataValueType")))
@interface HopprEngineDataValueType : HopprEngineKotlinEnum<HopprEngineDataValueType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HopprEngineDataValueType *string __attribute__((swift_name("string")));
@property (class, readonly) HopprEngineDataValueType *double_ __attribute__((swift_name("double_")));
@property (class, readonly) HopprEngineDataValueType *long_ __attribute__((swift_name("long_")));
@property (class, readonly) HopprEngineDataValueType *boolean __attribute__((swift_name("boolean")));
@property (class, readonly) HopprEngineDataValueType *array __attribute__((swift_name("array")));
@property (class, readonly) HopprEngineDataValueType *object __attribute__((swift_name("object")));
@property (class, readonly) HopprEngineDataValueType *null __attribute__((swift_name("null")));
+ (HopprEngineKotlinArray<HopprEngineDataValueType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HopprEngineDataValueType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("NodeResult")))
@interface HopprEngineNodeResult : HopprEngineBase
- (instancetype)initWithNodeId:(NSString *)nodeId __attribute__((swift_name("init(nodeId:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *nodeId __attribute__((swift_name("nodeId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExecuteGraphResult")))
@interface HopprEngineExecuteGraphResult : HopprEngineNodeResult
- (instancetype)initWithNodeId:(NSString *)nodeId inputs:(NSDictionary<NSString *, HopprEngineNodeInputResult *> *)inputs outputs:(NSDictionary<NSString *, id<HopprEngineIDataType>> *)outputs graphResult:(HopprEngineGraphResult * _Nullable)graphResult next:(NSArray<HopprEngineNodeResult *> *)next __attribute__((swift_name("init(nodeId:inputs:outputs:graphResult:next:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithNodeId:(NSString *)nodeId __attribute__((swift_name("init(nodeId:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) HopprEngineGraphResult * _Nullable graphResult __attribute__((swift_name("graphResult")));
@property NSDictionary<NSString *, HopprEngineNodeInputResult *> *inputs __attribute__((swift_name("inputs")));
@property (readonly) NSArray<HopprEngineNodeResult *> *next __attribute__((swift_name("next")));
@property (readonly) NSDictionary<NSString *, id<HopprEngineIDataType>> *outputs __attribute__((swift_name("outputs")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FunctionExecutionRule")))
@interface HopprEngineFunctionExecutionRule : HopprEngineKotlinEnum<HopprEngineFunctionExecutionRule *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) HopprEngineFunctionExecutionRule *explicit_ __attribute__((swift_name("explicit_")));
@property (class, readonly) HopprEngineFunctionExecutionRule *implicitOnce __attribute__((swift_name("implicitOnce")));
@property (class, readonly) HopprEngineFunctionExecutionRule *implicitAlways __attribute__((swift_name("implicitAlways")));
+ (HopprEngineKotlinArray<HopprEngineFunctionExecutionRule *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HopprEngineFunctionExecutionRule *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphContext")))
@interface HopprEngineGraphContext : HopprEngineBase
- (instancetype)initWithGraphId:(NSString *)graphId inputs:(NSDictionary<NSString *, id<HopprEngineIDataType>> *)inputs nodes:(NSDictionary<NSString *, id> *)nodes engine:(HopprEngineHopprEngine *)engine parentContext:(HopprEngineGraphContext * _Nullable)parentContext __attribute__((swift_name("init(graphId:inputs:nodes:engine:parentContext:)"))) __attribute__((objc_designated_initializer));
- (void)clearVariableName:(NSString *)name __attribute__((swift_name("clearVariable(name:)")));
- (HopprEngineNodeResult * _Nullable)executeNodeNodeId:(NSString *)nodeId __attribute__((swift_name("executeNode(nodeId:)")));
- (NSDictionary<NSString *, id<HopprEngineIDataType>> *)getAllLocalVariables __attribute__((swift_name("getAllLocalVariables()")));
- (id<HopprEngineIDataType>)getVariableName:(NSString *)name __attribute__((swift_name("getVariable(name:)")));
- (void)setReturnResultV:(NSDictionary<NSString *, id<HopprEngineIDataType>> *)v __attribute__((swift_name("setReturnResult(v:)")));
- (void)setVariableName:(NSString *)name isLocal:(BOOL)isLocal value:(id<HopprEngineIDataType>)value __attribute__((swift_name("setVariable(name:isLocal:value:)")));
@property (readonly) HopprEngineHopprEngine *engine __attribute__((swift_name("engine")));
@property (readonly) NSString *graphId __attribute__((swift_name("graphId")));
@property (readonly) NSDictionary<NSString *, id<HopprEngineIDataType>> *inputs __attribute__((swift_name("inputs")));
@property (readonly) BOOL isReturning __attribute__((swift_name("isReturning")));
@property (readonly) NSDictionary<NSString *, id> *nodes __attribute__((swift_name("nodes")));
@property (readonly) HopprEngineGraphContext * _Nullable parentContext __attribute__((swift_name("parentContext")));
@property NSDictionary<NSString *, id<HopprEngineIDataType>> * _Nullable returnValue __attribute__((swift_name("returnValue")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GraphReference")))
@interface HopprEngineGraphReference : HopprEngineBase
- (instancetype)initWithGraphId:(NSString *)graphId __attribute__((swift_name("init(graphId:)"))) __attribute__((objc_designated_initializer));
- (HopprEngineGraphReference *)doCopyGraphId:(NSString *)graphId __attribute__((swift_name("doCopy(graphId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *graphId __attribute__((swift_name("graphId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Node")))
@interface HopprEngineNode : HopprEngineBase
- (instancetype)initWithNodeId:(NSString *)nodeId nodeType:(NSString *)nodeType inputs:(NSDictionary<NSString *, HopprEngineNodeSlot *> *)inputs children:(NSDictionary<NSString *, HopprEngineNodeReference *> *)children __attribute__((swift_name("init(nodeId:nodeType:inputs:children:)"))) __attribute__((objc_designated_initializer));
- (HopprEngineNode *)doCopyNodeId:(NSString *)nodeId nodeType:(NSString *)nodeType inputs:(NSDictionary<NSString *, HopprEngineNodeSlot *> *)inputs children:(NSDictionary<NSString *, HopprEngineNodeReference *> *)children __attribute__((swift_name("doCopy(nodeId:nodeType:inputs:children:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, HopprEngineNodeReference *> *children __attribute__((swift_name("children")));
@property (readonly) NSDictionary<NSString *, HopprEngineNodeSlot *> *inputs __attribute__((swift_name("inputs")));
@property (readonly) NSString *nodeId __attribute__((swift_name("nodeId")));
@property (readonly) NSString *nodeType __attribute__((swift_name("nodeType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NodeErrorResult")))
@interface HopprEngineNodeErrorResult : HopprEngineNodeResult
- (instancetype)initWithNodeId:(NSString *)nodeId inputs:(NSDictionary<NSString *, HopprEngineNodeInputResult *> *)inputs error:(NSString *)error __attribute__((swift_name("init(nodeId:inputs:error:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithNodeId:(NSString *)nodeId __attribute__((swift_name("init(nodeId:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSString *error __attribute__((swift_name("error")));
@property NSDictionary<NSString *, HopprEngineNodeInputResult *> *inputs __attribute__((swift_name("inputs")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NodeGraph")))
@interface HopprEngineNodeGraph : HopprEngineBase
- (instancetype)initWithGraphId:(NSString *)graphId subscriptions:(NSArray<NSString *> *)subscriptions priority:(int32_t)priority nodes:(NSDictionary<NSString *, HopprEngineNode *> *)nodes __attribute__((swift_name("init(graphId:subscriptions:priority:nodes:)"))) __attribute__((objc_designated_initializer));
- (HopprEngineNodeGraph *)doCopyGraphId:(NSString *)graphId subscriptions:(NSArray<NSString *> *)subscriptions priority:(int32_t)priority nodes:(NSDictionary<NSString *, HopprEngineNode *> *)nodes __attribute__((swift_name("doCopy(graphId:subscriptions:priority:nodes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *graphId __attribute__((swift_name("graphId")));
@property (readonly) NSDictionary<NSString *, HopprEngineNode *> *nodes __attribute__((swift_name("nodes")));
@property (readonly) int32_t priority __attribute__((swift_name("priority")));
@property (readonly) NSArray<NSString *> *subscriptions __attribute__((swift_name("subscriptions")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NodeInputResult")))
@interface HopprEngineNodeInputResult : HopprEngineNodeResult
- (instancetype)initWithNodeId:(NSString *)nodeId output:(id<HopprEngineIDataType>)output nodeResult:(HopprEngineNodeResult * _Nullable)nodeResult __attribute__((swift_name("init(nodeId:output:nodeResult:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithNodeId:(NSString *)nodeId __attribute__((swift_name("init(nodeId:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) HopprEngineNodeResult * _Nullable nodeResult __attribute__((swift_name("nodeResult")));
@property (readonly) id<HopprEngineIDataType> output __attribute__((swift_name("output")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NodeReference")))
@interface HopprEngineNodeReference : HopprEngineBase
- (instancetype)initWithNodeId:(NSString *)nodeId __attribute__((swift_name("init(nodeId:)"))) __attribute__((objc_designated_initializer));
- (HopprEngineNodeReference *)doCopyNodeId:(NSString *)nodeId __attribute__((swift_name("doCopy(nodeId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *nodeId __attribute__((swift_name("nodeId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NodeSlot")))
@interface HopprEngineNodeSlot : HopprEngineBase
- (instancetype)initWithConnectedSlot:(HopprEngineNodeSlotReference * _Nullable)connectedSlot value:(id<HopprEngineIDataType>)value __attribute__((swift_name("init(connectedSlot:value:)"))) __attribute__((objc_designated_initializer));
- (HopprEngineNodeSlot *)doCopyConnectedSlot:(HopprEngineNodeSlotReference * _Nullable)connectedSlot value:(id<HopprEngineIDataType>)value __attribute__((swift_name("doCopy(connectedSlot:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property HopprEngineNodeSlotReference * _Nullable connectedSlot __attribute__((swift_name("connectedSlot")));
@property id<HopprEngineIDataType> value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NodeSlotReference")))
@interface HopprEngineNodeSlotReference : HopprEngineBase
- (instancetype)initWithSlotId:(NSString *)slotId nodeId:(NSString *)nodeId __attribute__((swift_name("init(slotId:nodeId:)"))) __attribute__((objc_designated_initializer));
- (HopprEngineNodeSlotReference *)doCopySlotId:(NSString *)slotId nodeId:(NSString *)nodeId __attribute__((swift_name("doCopy(slotId:nodeId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *nodeId __attribute__((swift_name("nodeId")));
@property (readonly) NSString *slotId __attribute__((swift_name("slotId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NodeSuccessResult")))
@interface HopprEngineNodeSuccessResult : HopprEngineNodeResult
- (instancetype)initWithNodeId:(NSString *)nodeId inputs:(NSDictionary<NSString *, HopprEngineNodeInputResult *> *)inputs outputs:(NSDictionary<NSString *, id<HopprEngineIDataType>> *)outputs next:(HopprEngineNodeResult * _Nullable)next __attribute__((swift_name("init(nodeId:inputs:outputs:next:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithNodeId:(NSString *)nodeId inputs:(NSDictionary<NSString *, HopprEngineNodeInputResult *> *)inputs outputs:(NSDictionary<NSString *, id<HopprEngineIDataType>> *)outputs next_:(NSArray<HopprEngineNodeResult *> *)next __attribute__((swift_name("init(nodeId:inputs:outputs:next_:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithNodeId:(NSString *)nodeId __attribute__((swift_name("init(nodeId:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property NSDictionary<NSString *, HopprEngineNodeInputResult *> *inputs __attribute__((swift_name("inputs")));
@property (readonly) NSArray<HopprEngineNodeResult *> *next __attribute__((swift_name("next")));
@property (readonly) NSDictionary<NSString *, id<HopprEngineIDataType>> *outputs __attribute__((swift_name("outputs")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Trigger")))
@interface HopprEngineTrigger : HopprEngineBase
- (instancetype)initWithTriggerId:(NSString *)triggerId params:(NSDictionary<NSString *, id<HopprEngineIDataType>> *)params __attribute__((swift_name("init(triggerId:params:)"))) __attribute__((objc_designated_initializer));
- (HopprEngineTrigger *)doCopyTriggerId:(NSString *)triggerId params:(NSDictionary<NSString *, id<HopprEngineIDataType>> *)params __attribute__((swift_name("doCopy(triggerId:params:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSDictionary<NSString *, id<HopprEngineIDataType>> *params __attribute__((swift_name("params")));
@property (readonly) NSString *triggerId __attribute__((swift_name("triggerId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TriggerResult")))
@interface HopprEngineTriggerResult : HopprEngineBase
- (instancetype)initWithTrigger:(HopprEngineTrigger *)trigger graphResults:(NSArray<HopprEngineGraphResult *> *)graphResults __attribute__((swift_name("init(trigger:graphResults:)"))) __attribute__((objc_designated_initializer));
- (HopprEngineTriggerResult *)doCopyTrigger:(HopprEngineTrigger *)trigger graphResults:(NSArray<HopprEngineGraphResult *> *)graphResults __attribute__((swift_name("doCopy(trigger:graphResults:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<HopprEngineGraphResult *> *graphResults __attribute__((swift_name("graphResults")));
@property (readonly) HopprEngineTrigger *trigger __attribute__((swift_name("trigger")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConditionNode")))
@interface HopprEngineConditionNode : HopprEngineBaseNode
- (instancetype)initWithNode:(HopprEngineNode *)node __attribute__((swift_name("init(node:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithNodeId:(NSString *)nodeId inputs:(NSDictionary<NSString *, HopprEngineNodeSlot *> *)inputs __attribute__((swift_name("init(nodeId:inputs:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (HopprEngineNodeResult *)executeGraphCtx:(HopprEngineGraphContext *)graphCtx __attribute__((swift_name("execute(graphCtx:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExecuteGraphNode")))
@interface HopprEngineExecuteGraphNode : HopprEngineBaseNode
- (instancetype)initWithNode:(HopprEngineNode *)node __attribute__((swift_name("init(node:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithNodeId:(NSString *)nodeId inputs:(NSDictionary<NSString *, HopprEngineNodeSlot *> *)inputs __attribute__((swift_name("init(nodeId:inputs:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (HopprEngineNodeResult *)executeGraphCtx:(HopprEngineGraphContext *)graphCtx __attribute__((swift_name("execute(graphCtx:)")));
- (HopprEngineNodeInputResult *)getOutputGraphCtx:(HopprEngineGraphContext *)graphCtx output:(NSString *)output __attribute__((swift_name("getOutput(graphCtx:output:)")));
@property (readonly) HopprEngineNodeReference * _Nullable next __attribute__((swift_name("next")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExecuteTriggerNode")))
@interface HopprEngineExecuteTriggerNode : HopprEngineFunctionBaseNode
- (instancetype)initWithNode:(HopprEngineNode *)node __attribute__((swift_name("init(node:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id<HopprEngineIDataType>> *)handlerCtx:(HopprEngineGraphContext *)ctx inputs:(NSDictionary<NSString *, id<HopprEngineIDataType>> *)inputs __attribute__((swift_name("handler(ctx:inputs:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoopNode")))
@interface HopprEngineLoopNode : HopprEngineBaseNode
- (instancetype)initWithNode:(HopprEngineNode *)node __attribute__((swift_name("init(node:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithNodeId:(NSString *)nodeId inputs:(NSDictionary<NSString *, HopprEngineNodeSlot *> *)inputs __attribute__((swift_name("init(nodeId:inputs:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (HopprEngineNodeResult *)executeGraphCtx:(HopprEngineGraphContext *)graphCtx __attribute__((swift_name("execute(graphCtx:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReturnNode")))
@interface HopprEngineReturnNode : HopprEngineBaseNode
- (instancetype)initWithNode:(HopprEngineNode *)node __attribute__((swift_name("init(node:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithNodeId:(NSString *)nodeId inputs:(NSDictionary<NSString *, HopprEngineNodeSlot *> *)inputs __attribute__((swift_name("init(nodeId:inputs:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (HopprEngineNodeSuccessResult *)executeGraphCtx:(HopprEngineGraphContext *)graphCtx __attribute__((swift_name("execute(graphCtx:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RootNode")))
@interface HopprEngineRootNode : HopprEngineBaseNode
- (instancetype)initWithNode:(HopprEngineNode *)node __attribute__((swift_name("init(node:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithNodeId:(NSString *)nodeId inputs:(NSDictionary<NSString *, HopprEngineNodeSlot *> *)inputs __attribute__((swift_name("init(nodeId:inputs:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (HopprEngineNodeSuccessResult *)executeGraphCtx:(HopprEngineGraphContext *)graphCtx __attribute__((swift_name("execute(graphCtx:)")));
@property (readonly) HopprEngineNodeReference * _Nullable next __attribute__((swift_name("next")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SequenceNode")))
@interface HopprEngineSequenceNode : HopprEngineBaseNode
- (instancetype)initWithNode:(HopprEngineNode *)node __attribute__((swift_name("init(node:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithNodeId:(NSString *)nodeId inputs:(NSDictionary<NSString *, HopprEngineNodeSlot *> *)inputs __attribute__((swift_name("init(nodeId:inputs:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (HopprEngineNodeSuccessResult *)executeGraphCtx:(HopprEngineGraphContext *)graphCtx __attribute__((swift_name("execute(graphCtx:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SwitchNode")))
@interface HopprEngineSwitchNode : HopprEngineBaseNode
- (instancetype)initWithNode:(HopprEngineNode *)node __attribute__((swift_name("init(node:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithNodeId:(NSString *)nodeId inputs:(NSDictionary<NSString *, HopprEngineNodeSlot *> *)inputs __attribute__((swift_name("init(nodeId:inputs:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (HopprEngineNodeSuccessResult *)executeGraphCtx:(HopprEngineGraphContext *)graphCtx __attribute__((swift_name("execute(graphCtx:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ArrayNode")))
@interface HopprEngineArrayNode : HopprEngineFunctionBaseNode
- (instancetype)initWithNode:(HopprEngineNode *)node __attribute__((swift_name("init(node:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id<HopprEngineIDataType>> *)handlerCtx:(HopprEngineGraphContext *)ctx inputs:(NSDictionary<NSString *, id<HopprEngineIDataType>> *)inputs __attribute__((swift_name("handler(ctx:inputs:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BooleanConditionNode")))
@interface HopprEngineBooleanConditionNode : HopprEngineFunctionBaseNode
- (instancetype)initWithNode:(HopprEngineNode *)node __attribute__((swift_name("init(node:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id<HopprEngineIDataType>> *)handlerCtx:(HopprEngineGraphContext *)ctx inputs:(NSDictionary<NSString *, id<HopprEngineIDataType>> *)inputs __attribute__((swift_name("handler(ctx:inputs:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConvertNode")))
@interface HopprEngineConvertNode : HopprEngineFunctionBaseNode
- (instancetype)initWithNode:(HopprEngineNode *)node __attribute__((swift_name("init(node:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id<HopprEngineIDataType>> *)handlerCtx:(HopprEngineGraphContext *)ctx inputs:(NSDictionary<NSString *, id<HopprEngineIDataType>> *)inputs __attribute__((swift_name("handler(ctx:inputs:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataTypeNode")))
@interface HopprEngineDataTypeNode : HopprEngineFunctionBaseNode
- (instancetype)initWithNode:(HopprEngineNode *)node __attribute__((swift_name("init(node:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id<HopprEngineIDataType>> *)handlerCtx:(HopprEngineGraphContext *)ctx inputs:(NSDictionary<NSString *, id<HopprEngineIDataType>> *)inputs __attribute__((swift_name("handler(ctx:inputs:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetVariableNode")))
@interface HopprEngineGetVariableNode : HopprEngineFunctionBaseNode
- (instancetype)initWithNode:(HopprEngineNode *)node __attribute__((swift_name("init(node:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id<HopprEngineIDataType>> *)handlerCtx:(HopprEngineGraphContext *)ctx inputs:(NSDictionary<NSString *, id<HopprEngineIDataType>> *)inputs __attribute__((swift_name("handler(ctx:inputs:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MathNode")))
@interface HopprEngineMathNode : HopprEngineFunctionBaseNode
- (instancetype)initWithNode:(HopprEngineNode *)node __attribute__((swift_name("init(node:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id<HopprEngineIDataType>> *)handlerCtx:(HopprEngineGraphContext *)ctx inputs:(NSDictionary<NSString *, id<HopprEngineIDataType>> *)inputs __attribute__((swift_name("handler(ctx:inputs:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NumberConditionNode")))
@interface HopprEngineNumberConditionNode : HopprEngineFunctionBaseNode
- (instancetype)initWithNode:(HopprEngineNode *)node __attribute__((swift_name("init(node:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id<HopprEngineIDataType>> *)handlerCtx:(HopprEngineGraphContext *)ctx inputs:(NSDictionary<NSString *, id<HopprEngineIDataType>> *)inputs __attribute__((swift_name("handler(ctx:inputs:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ObjectNode")))
@interface HopprEngineObjectNode : HopprEngineFunctionBaseNode
- (instancetype)initWithNode:(HopprEngineNode *)node __attribute__((swift_name("init(node:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id<HopprEngineIDataType>> *)handlerCtx:(HopprEngineGraphContext *)ctx inputs:(NSDictionary<NSString *, id<HopprEngineIDataType>> *)inputs __attribute__((swift_name("handler(ctx:inputs:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SetVariableNode")))
@interface HopprEngineSetVariableNode : HopprEngineFunctionBaseNode
- (instancetype)initWithNode:(HopprEngineNode *)node __attribute__((swift_name("init(node:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id<HopprEngineIDataType>> *)handlerCtx:(HopprEngineGraphContext *)ctx inputs:(NSDictionary<NSString *, id<HopprEngineIDataType>> *)inputs __attribute__((swift_name("handler(ctx:inputs:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringConditionNode")))
@interface HopprEngineStringConditionNode : HopprEngineFunctionBaseNode
- (instancetype)initWithNode:(HopprEngineNode *)node __attribute__((swift_name("init(node:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id<HopprEngineIDataType>> *)handlerCtx:(HopprEngineGraphContext *)ctx inputs:(NSDictionary<NSString *, id<HopprEngineIDataType>> *)inputs __attribute__((swift_name("handler(ctx:inputs:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StringNode")))
@interface HopprEngineStringNode : HopprEngineFunctionBaseNode
- (instancetype)initWithNode:(HopprEngineNode *)node __attribute__((swift_name("init(node:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id<HopprEngineIDataType>> *)handlerCtx:(HopprEngineGraphContext *)ctx inputs:(NSDictionary<NSString *, id<HopprEngineIDataType>> *)inputs __attribute__((swift_name("handler(ctx:inputs:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TriggerNode")))
@interface HopprEngineTriggerNode : HopprEngineFunctionBaseNode
- (instancetype)initWithNode:(HopprEngineNode *)node __attribute__((swift_name("init(node:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id<HopprEngineIDataType>> *)handlerCtx:(HopprEngineGraphContext *)ctx inputs:(NSDictionary<NSString *, id<HopprEngineIDataType>> *)inputs __attribute__((swift_name("handler(ctx:inputs:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonElementSerializer))
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface HopprEngineKotlinx_serialization_jsonJsonElement : HopprEngineBase
@property (class, readonly, getter=companion) HopprEngineKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end

@interface HopprEngineKotlinx_serialization_jsonJsonElement (Extensions)
- (id<HopprEngineIDataType>)toDataType __attribute__((swift_name("toDataType()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DataTypeHelperKt")))
@interface HopprEngineDataTypeHelperKt : HopprEngineBase
+ (NSArray<id<HopprEngineIDataType>> * _Nullable)getArray:(id<HopprEngineIDataType>)receiver __attribute__((swift_name("getArray(_:)")));
+ (HopprEngineBoolean * _Nullable)getBoolean:(id<HopprEngineIDataType>)receiver __attribute__((swift_name("getBoolean(_:)")));
+ (HopprEngineDouble * _Nullable)getDouble:(id<HopprEngineIDataType>)receiver __attribute__((swift_name("getDouble(_:)")));
+ (HopprEngineFloat * _Nullable)getFloat:(id<HopprEngineIDataType>)receiver __attribute__((swift_name("getFloat(_:)")));
+ (HopprEngineInt * _Nullable)getInt:(id<HopprEngineIDataType>)receiver __attribute__((swift_name("getInt(_:)")));
+ (HopprEngineLong * _Nullable)getLong:(id<HopprEngineIDataType>)receiver __attribute__((swift_name("getLong(_:)")));
+ (NSDictionary<NSString *, id<HopprEngineIDataType>> * _Nullable)getObject:(id<HopprEngineIDataType>)receiver __attribute__((swift_name("getObject(_:)")));
+ (NSString * _Nullable)getString:(id<HopprEngineIDataType>)receiver __attribute__((swift_name("getString(_:)")));
+ (HopprEngineTrigger * _Nullable)getTrigger:(id<HopprEngineIDataType>)receiver __attribute__((swift_name("getTrigger(_:)")));
+ (id<HopprEngineIDataType>)toDataType:(HopprEngineBoolean * _Nullable)receiver __attribute__((swift_name("toDataType(_:)")));
+ (id<HopprEngineIDataType>)toDataType_:(HopprEngineDouble * _Nullable)receiver __attribute__((swift_name("toDataType(__:)")));
+ (id<HopprEngineIDataType>)toDataType__:(HopprEngineFloat * _Nullable)receiver __attribute__((swift_name("toDataType(___:)")));
+ (id<HopprEngineIDataType>)toDataType___:(HopprEngineInt * _Nullable)receiver __attribute__((swift_name("toDataType(____:)")));
+ (id<HopprEngineIDataType>)toDataType____:(HopprEngineLong * _Nullable)receiver __attribute__((swift_name("toDataType(_____:)")));
+ (id<HopprEngineIDataType>)toDataType_____:(NSString * _Nullable)receiver __attribute__((swift_name("toDataType(______:)")));
+ (id<HopprEngineIDataType>)toDataType______:(NSArray<NSString *> * _Nullable)receiver __attribute__((swift_name("toDataType(_______:)")));
+ (id<HopprEngineIDataType>)toDataType_______:(NSDictionary<NSString *, NSString *> * _Nullable)receiver __attribute__((swift_name("toDataType(________:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonElementHelperKt")))
@interface HopprEngineJsonElementHelperKt : HopprEngineBase
+ (id<HopprEngineIDataType>)fromJsonStringJson:(NSString *)json __attribute__((swift_name("fromJsonString(json:)")));
+ (id _Nullable)toAny:(id<HopprEngineIDataType>)receiver __attribute__((swift_name("toAny(_:)")));
+ (NSDictionary<NSString *, id> *)toAnyMap:(NSDictionary<NSString *, id<HopprEngineIDataType>> *)receiver __attribute__((swift_name("toAnyMap(_:)")));
+ (NSDictionary<NSString *, id<HopprEngineIDataType>> *)toDataType:(NSDictionary<NSString *, HopprEngineKotlinx_serialization_jsonJsonElement *> *)receiver __attribute__((swift_name("toDataType(_:)")));
+ (NSDictionary<NSString *, id<HopprEngineIDataType>> *)toDataType_:(NSDictionary<NSString *, HopprEngineKotlinx_serialization_jsonJsonElement *> *)receiver __attribute__((swift_name("toDataType(__:)")));
+ (NSDictionary<NSString *, NSArray<NSString *> *> *)toMapStringList:(NSDictionary<NSString *, id<HopprEngineIDataType>> *)receiver __attribute__((swift_name("toMapStringList(_:)")));
+ (NSArray<NSString *> *)toStringList:(NSArray<id<HopprEngineIDataType>> *)receiver __attribute__((swift_name("toStringList(_:)")));
+ (NSDictionary<NSString *, NSString *> *)toStringMap:(NSDictionary<NSString *, id<HopprEngineIDataType>> *)receiver __attribute__((swift_name("toStringMap(_:)")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface HopprEngineKotlinThrowable : HopprEngineBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(HopprEngineKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(HopprEngineKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (HopprEngineKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) HopprEngineKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface HopprEngineKotlinException : HopprEngineKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(HopprEngineKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(HopprEngineKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface HopprEngineKotlinUnit : HopprEngineBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HopprEngineKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface HopprEngineKotlinEnumCompanion : HopprEngineBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HopprEngineKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface HopprEngineKotlinArray<T> : HopprEngineBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(HopprEngineInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<HopprEngineKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface HopprEngineKotlinx_serialization_jsonJsonElementCompanion : HopprEngineBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HopprEngineKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<HopprEngineKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol HopprEngineKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next_ __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol HopprEngineKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<HopprEngineKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<HopprEngineKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol HopprEngineKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<HopprEngineKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<HopprEngineKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol HopprEngineKotlinx_serialization_coreKSerializer <HopprEngineKotlinx_serialization_coreSerializationStrategy, HopprEngineKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol HopprEngineKotlinx_serialization_coreEncoder
@required
- (id<HopprEngineKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<HopprEngineKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<HopprEngineKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<HopprEngineKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<HopprEngineKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<HopprEngineKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<HopprEngineKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
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
- (void)encodeNullableSerializableValueSerializer:(id<HopprEngineKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<HopprEngineKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) HopprEngineKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol HopprEngineKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<HopprEngineKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<HopprEngineKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

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
@property (readonly) NSArray<id<HopprEngineKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

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
@property (readonly) HopprEngineKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol HopprEngineKotlinx_serialization_coreDecoder
@required
- (id<HopprEngineKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<HopprEngineKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<HopprEngineKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<HopprEngineKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<HopprEngineKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
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
- (HopprEngineKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<HopprEngineKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<HopprEngineKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) HopprEngineKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol HopprEngineKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<HopprEngineKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<HopprEngineKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<HopprEngineKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<HopprEngineKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<HopprEngineKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<HopprEngineKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<HopprEngineKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<HopprEngineKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<HopprEngineKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<HopprEngineKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<HopprEngineKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<HopprEngineKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<HopprEngineKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<HopprEngineKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<HopprEngineKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<HopprEngineKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<HopprEngineKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) HopprEngineKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface HopprEngineKotlinx_serialization_coreSerializersModule : HopprEngineBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<HopprEngineKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<HopprEngineKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<HopprEngineKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<HopprEngineKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<HopprEngineKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<HopprEngineKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<HopprEngineKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<HopprEngineKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol HopprEngineKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface HopprEngineKotlinx_serialization_coreSerialKind : HopprEngineBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol HopprEngineKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<HopprEngineKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<HopprEngineKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<HopprEngineKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<HopprEngineKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<HopprEngineKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<HopprEngineKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<HopprEngineKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<HopprEngineKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<HopprEngineKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<HopprEngineKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<HopprEngineKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<HopprEngineKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<HopprEngineKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<HopprEngineKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<HopprEngineKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<HopprEngineKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<HopprEngineKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<HopprEngineKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) HopprEngineKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface HopprEngineKotlinNothing : HopprEngineBase
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol HopprEngineKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<HopprEngineKotlinKClass>)kClass provider:(id<HopprEngineKotlinx_serialization_coreKSerializer> (^)(NSArray<id<HopprEngineKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<HopprEngineKotlinKClass>)kClass serializer:(id<HopprEngineKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<HopprEngineKotlinKClass>)baseClass actualClass:(id<HopprEngineKotlinKClass>)actualClass actualSerializer:(id<HopprEngineKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<HopprEngineKotlinKClass>)baseClass defaultDeserializerProvider:(id<HopprEngineKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<HopprEngineKotlinKClass>)baseClass defaultDeserializerProvider:(id<HopprEngineKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<HopprEngineKotlinKClass>)baseClass defaultSerializerProvider:(id<HopprEngineKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol HopprEngineKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol HopprEngineKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol HopprEngineKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol HopprEngineKotlinKClass <HopprEngineKotlinKDeclarationContainer, HopprEngineKotlinKAnnotatedElement, HopprEngineKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
