// Generated by Apple Swift version 5.1 effective-4.2 (swiftlang-1100.0.270.13 clang-1100.0.33.7)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
@import XCTest;
#endif

#import <Quick/Quick.h>

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="Quick",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif




SWIFT_CLASS("_TtC5Quick13_CallsiteBase")
@interface _CallsiteBase : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// An object encapsulating the file and line number at which
/// a particular example is defined.
SWIFT_CLASS("_TtC5Quick8Callsite")
@interface Callsite : _CallsiteBase
/// The absolute path of the file in which an example is defined.
@property (nonatomic, readonly, copy) NSString * _Nonnull file;
/// The line number on which an example is defined.
@property (nonatomic, readonly) NSUInteger line;
- (nonnull instancetype)initWithFile:(NSString * _Nonnull)file line:(NSUInteger)line OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end



@class ExampleMetadata;

/// A configuration encapsulates various options you can use
/// to configure Quick’s behavior.
SWIFT_CLASS("_TtC5Quick13Configuration")
@interface Configuration : NSObject
- (void)beforeEachWithMetadata:(void (^ _Nonnull)(ExampleMetadata * _Nonnull))closure;
- (void)afterEachWithMetadata:(void (^ _Nonnull)(ExampleMetadata * _Nonnull))closure;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC5Quick12_ExampleBase")
@interface _ExampleBase : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class ExampleGroup;

/// Examples, defined with the <code>it</code> function, use assertions to
/// demonstrate how code should behave. These are like “tests” in XCTest.
SWIFT_CLASS("_TtC5Quick7Example")
@interface Example : _ExampleBase
/// A boolean indicating whether the example is a shared example;
/// i.e.: whether it is an example defined with <code>itBehavesLike</code>.
@property (nonatomic) BOOL isSharedExample;
/// The site at which the example is defined.
/// This must be set correctly in order for Xcode to highlight
/// the correct line in red when reporting a failure.
@property (nonatomic, strong) Callsite * _Nonnull callsite;
@property (nonatomic, weak) ExampleGroup * _Nullable group;
- (nonnull instancetype)initWithDescription:(NSString * _Nonnull)description callsite:(Callsite * _Nonnull)callsite flags:(NSDictionary<NSString *, NSNumber *> * _Nonnull)flags closure:(void (^ _Nonnull)(void))closure OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
/// The example name. A name is a concatenation of the name of
/// the example group the example belongs to, followed by the
/// description of the example itself.
/// The example name is used to generate a test method selector
/// to be displayed in Xcode’s test navigator.
@property (nonatomic, readonly, copy) NSString * _Nonnull name;
/// Executes the example closure, as well as all before and after
/// closures defined in the its surrounding example groups.
- (void)run;
/// Evaluates the filter flags set on this example and on the example groups
/// this example belongs to. Flags set on the example are trumped by flags on
/// the example group it belongs to. Flags on inner example groups are trumped
/// by flags on outer example groups.
@property (nonatomic, readonly, copy) NSDictionary<NSString *, NSNumber *> * _Nonnull filterFlags;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end




/// Example groups are logical groupings of examples, defined with
/// the <code>describe</code> and <code>context</code> functions. Example groups can share
/// setup and teardown code.
SWIFT_CLASS("_TtC5Quick12ExampleGroup")
@interface ExampleGroup : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
@property (nonatomic, readonly, copy) NSArray<Example *> * _Nonnull examples;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC5Quick20_ExampleMetadataBase")
@interface _ExampleMetadataBase : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// A class that encapsulates information about an example,
/// including the index at which the example was executed, as
/// well as the example itself.
SWIFT_CLASS("_TtC5Quick15ExampleMetadata")
@interface ExampleMetadata : _ExampleMetadataBase
/// The example for which this metadata was collected.
@property (nonatomic, readonly, strong) Example * _Nonnull example;
/// The index at which this example was executed in the
/// test suite.
@property (nonatomic, readonly) NSInteger exampleIndex;
- (nonnull instancetype)initWithExample:(Example * _Nonnull)example exampleIndex:(NSInteger)exampleIndex OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC5Quick11_FilterBase")
@interface _FilterBase : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// A namespace for filter flag keys, defined primarily to make the
/// keys available in Objective-C.
SWIFT_CLASS("_TtC5Quick6Filter")
@interface Filter : _FilterBase
/// Example and example groups with [Focused: true] are included in test runs,
/// excluding all other examples without this flag. Use this to only run one or
/// two tests that you’re currently focusing on.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull focused;)
+ (NSString * _Nonnull)focused SWIFT_WARN_UNUSED_RESULT;
/// Example and example groups with [Pending: true] are excluded from test runs.
/// Use this to temporarily suspend examples that you know do not pass yet.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull pending;)
+ (NSString * _Nonnull)pending SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// Extension methods or properties for NSObject subclasses are invisible from
/// the Objective-C runtime on static linking unless the consumers add <code>-ObjC</code>
/// linker flag, so let’s make a wrapper class to mitigate that situation.
/// See: https://github.com/Quick/Quick/issues/785 and https://github.com/Quick/Quick/pull/803
SWIFT_CLASS("_TtC5Quick18QCKObjCStringUtils")
@interface QCKObjCStringUtils : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
+ (NSString * _Nonnull)c99ExtendedIdentifierFrom:(NSString * _Nonnull)string SWIFT_WARN_UNUSED_RESULT;
@end

@class World;

@interface QuickConfiguration (SWIFT_EXTENSION(Quick))
+ (void)configureSubclassesIfNeededWithWorld:(World * _Nonnull)world;
@end


/// A base class for a class cluster of Quick test suites, that should correctly
/// build dynamic test suites for XCTest to execute.
SWIFT_CLASS("_TtC5Quick14QuickTestSuite")
@interface QuickTestSuite : XCTestSuite
/// Construct a test suite for a specific, selected subset of test cases (rather
/// than the default, which as all test cases).
/// If this method is called multiple times for the same test case class, e.g..
/// FooSpec/testFoo
/// FooSpec/testBar
/// It is expected that the first call should return a valid test suite, and
/// all subsequent calls should return <code>nil</code>.
+ (QuickTestSuite * _Nullable)selectedTestSuiteForTestCaseWithName:(NSString * _Nonnull)name SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC5Quick10_WorldBase")
@interface _WorldBase : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class QuickSpec;

/// A collection of state Quick builds up in order to work its magic.
/// World is primarily responsible for maintaining a mapping of QuickSpec
/// classes to root example groups for those classes.
/// It also maintains a mapping of shared example names to shared
/// example closures.
/// You may configure how Quick behaves by calling the -[World configure:]
/// method from within an overridden +[QuickConfiguration configure:] method.
SWIFT_CLASS("_TtC5Quick5World")
@interface World : _WorldBase
/// The example group that is currently being run.
/// The DSL requires that this group is correctly set in order to build a
/// correct hierarchy of example groups and their examples.
@property (nonatomic, strong) ExampleGroup * _Null_unspecified currentExampleGroup;
/// The example metadata of the test that is currently being run.
/// This is useful for using the Quick test metadata (like its name) at
/// runtime.
@property (nonatomic, strong) ExampleMetadata * _Nullable currentExampleMetadata;
@property (nonatomic) NSInteger numberOfExamplesRun;
@property (nonatomic) BOOL isRunningAdditionalSuites;
@property (nonatomic, readonly) BOOL isConfigurationFinalized;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) World * _Nonnull sharedWorld;)
+ (World * _Nonnull)sharedWorld SWIFT_WARN_UNUSED_RESULT;
/// Exposes the World’s Configuration object within the scope of the closure
/// so that it may be configured. This method must not be called outside of
/// an overridden +[QuickConfiguration configure:] method.
/// \param closure A closure that takes a Configuration object that can
/// be mutated to change Quick’s behavior.
///
- (void)configure:(SWIFT_NOESCAPE void (^ _Nonnull)(Configuration * _Nonnull))closure;
/// Finalizes the World’s configuration.
/// Any subsequent calls to World.configure() will raise.
- (void)finalizeConfiguration;
/// Returns an internally constructed root example group for the given
/// QuickSpec class.
/// A root example group with the description “root example group” is lazily
/// initialized for each QuickSpec class. This root example group wraps the
/// top level of a -[QuickSpec spec] method–it’s thanks to this group that
/// users can define beforeEach and it closures at the top level, like so:
/// \code
/// override func spec() {
///     // These belong to the root example group
///     beforeEach {}
///     it("is at the top level") {}
/// }
///
/// \endcode\param specClass The QuickSpec class for which to retrieve the root example group.
///
///
/// returns:
/// The root example group for the class.
- (ExampleGroup * _Nonnull)rootExampleGroupForSpecClass:(SWIFT_METATYPE(QuickSpec) _Nonnull)specClass SWIFT_WARN_UNUSED_RESULT;
/// Returns all examples that should be run for a given spec class.
/// There are two filtering passes that occur when determining which examples should be run.
/// That is, these examples are the ones that are included by inclusion filters, and are
/// not excluded by exclusion filters.
/// \param specClass The QuickSpec subclass for which examples are to be returned.
///
///
/// returns:
/// A list of examples to be run as test invocations.
- (NSArray<Example *> * _Nonnull)examplesForSpecClass:(SWIFT_METATYPE(QuickSpec) _Nonnull)specClass SWIFT_WARN_UNUSED_RESULT;
- (void)registerSharedExample:(NSString * _Nonnull)name closure:(void (^ _Nonnull)(NSDictionary<NSString *, id> * _Nonnull (^ _Nonnull)(void)))closure;
- (void (^ _Nonnull)(NSDictionary<NSString *, id> * _Nonnull (^ _Nonnull)(void)))sharedExample:(NSString * _Nonnull)name SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly) NSInteger includedExampleCount;
@property (nonatomic) NSInteger cachedIncludedExampleCount;
@property (nonatomic, readonly) BOOL beforesCurrentlyExecuting;
@property (nonatomic, readonly) BOOL aftersCurrentlyExecuting;
- (void)performWithCurrentExampleGroup:(ExampleGroup * _Nonnull)group closure:(SWIFT_NOESCAPE void (^ _Nonnull)(void))closure;
@end


@interface World (SWIFT_EXTENSION(Quick))
- (void)beforeSuite:(void (^ _Nonnull)(void))closure;
- (void)afterSuite:(void (^ _Nonnull)(void))closure;
- (void)sharedExamples:(NSString * _Nonnull)name closure:(void (^ _Nonnull)(NSDictionary<NSString *, id> * _Nonnull (^ _Nonnull)(void)))closure;
- (void)describe:(NSString * _Nonnull)description flags:(NSDictionary<NSString *, NSNumber *> * _Nonnull)flags closure:(SWIFT_NOESCAPE void (^ _Nonnull)(void))closure;
- (void)context:(NSString * _Nonnull)description flags:(NSDictionary<NSString *, NSNumber *> * _Nonnull)flags closure:(SWIFT_NOESCAPE void (^ _Nonnull)(void))closure;
- (void)fdescribe:(NSString * _Nonnull)description flags:(NSDictionary<NSString *, NSNumber *> * _Nonnull)flags closure:(SWIFT_NOESCAPE void (^ _Nonnull)(void))closure;
- (void)xdescribe:(NSString * _Nonnull)description flags:(NSDictionary<NSString *, NSNumber *> * _Nonnull)flags closure:(SWIFT_NOESCAPE void (^ _Nonnull)(void))closure;
- (void)beforeEach:(void (^ _Nonnull)(void))closure;
- (void)beforeEachWithMetadata:(void (^ _Nonnull)(ExampleMetadata * _Nonnull))closure;
- (void)afterEach:(void (^ _Nonnull)(void))closure;
- (void)afterEachWithMetadata:(void (^ _Nonnull)(ExampleMetadata * _Nonnull))closure;
- (void)itWithDescription:(NSString * _Nonnull)description flags:(NSDictionary<NSString *, NSNumber *> * _Nonnull)flags file:(NSString * _Nonnull)file line:(NSUInteger)line closure:(void (^ _Nonnull)(void))closure;
- (void)fitWithDescription:(NSString * _Nonnull)description flags:(NSDictionary<NSString *, NSNumber *> * _Nonnull)flags file:(NSString * _Nonnull)file line:(NSUInteger)line closure:(void (^ _Nonnull)(void))closure;
- (void)xitWithDescription:(NSString * _Nonnull)description flags:(NSDictionary<NSString *, NSNumber *> * _Nonnull)flags file:(NSString * _Nonnull)file line:(NSUInteger)line closure:(void (^ _Nonnull)(void))closure;
- (void)itBehavesLikeSharedExampleNamed:(NSString * _Nonnull)name sharedExampleContext:(NSDictionary<NSString *, id> * _Nonnull (^ _Nonnull)(void))sharedExampleContext flags:(NSDictionary<NSString *, NSNumber *> * _Nonnull)flags file:(NSString * _Nonnull)file line:(NSUInteger)line;
- (void)pending:(NSString * _Nonnull)description closure:(SWIFT_NOESCAPE void (^ _Nonnull)(void))closure;
@end






#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
