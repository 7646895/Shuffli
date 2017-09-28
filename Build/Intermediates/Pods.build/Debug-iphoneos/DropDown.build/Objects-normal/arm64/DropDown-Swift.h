// Generated by Apple Swift version 4.0 effective-3.2 (swiftlang-900.0.65 clang-900.0.37)
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

#if __has_attribute(external_source_symbol)
# define SWIFT_STRINGIFY(str) #str
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name) _Pragma(SWIFT_STRINGIFY(clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in=module_name, generated_declaration))), apply_to=any(function, enum, objc_interface, objc_category, objc_protocol))))
# define SWIFT_MODULE_NAMESPACE_POP _Pragma("clang attribute pop")
#else
# define SWIFT_MODULE_NAMESPACE_PUSH(module_name)
# define SWIFT_MODULE_NAMESPACE_POP
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
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
#  define SWIFT_ENUM_ATTR __attribute__((enum_extensibility(open)))
# else
#  define SWIFT_ENUM_ATTR
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
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
#if __has_feature(modules)
@import UIKit;
@import CoreGraphics;
@import Foundation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

SWIFT_MODULE_NAMESPACE_PUSH("DropDown")
@class UIView;

/// Can be <code>UIView</code> or <code>UIBarButtonItem</code>.
SWIFT_PROTOCOL("_TtP8DropDown10AnchorView_")
@protocol AnchorView
@property (nonatomic, readonly, strong) UIView * _Nonnull plainView;
@end

@class UIColor;
@class UIFont;
@class UINib;
@class DropDownCell;
@class NSCoder;

/// A Material Design drop down in replacement for <code>UIPickerView</code>.
SWIFT_CLASS("_TtC8DropDown8DropDown")
@interface DropDown : UIView
/// The current visible drop down. There can be only one visible drop down at a time.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, weak) DropDown * _Nullable VisibleDropDown;)
+ (DropDown * _Nullable)VisibleDropDown SWIFT_WARN_UNUSED_RESULT;
+ (void)setVisibleDropDown:(DropDown * _Nullable)value;
/// The view to which the drop down will displayed onto.
@property (nonatomic, weak) id <AnchorView> _Nullable anchorView;
/// The offset point relative to <code>anchorView</code> when the drop down is shown above the anchor view.
/// By default, the drop down is showed onto the <code>anchorView</code> with the top
/// left corner for its origin, so an offset equal to (0, 0).
/// You can change here the default drop down origin.
@property (nonatomic) CGPoint topOffset;
/// The offset point relative to <code>anchorView</code> when the drop down is shown below the anchor view.
/// By default, the drop down is showed onto the <code>anchorView</code> with the top
/// left corner for its origin, so an offset equal to (0, 0).
/// You can change here the default drop down origin.
@property (nonatomic) CGPoint bottomOffset;
@property (nonatomic) CGFloat cellHeight;
@property (nonatomic, strong) UIColor * _Nullable backgroundColor;
/// The background color of the selected cell in the drop down.
/// Changing the background color automatically reloads the drop down.
@property (nonatomic, strong) UIColor * _Nonnull selectionBackgroundColor;
/// The separator color between cells.
/// Changing the separator color automatically reloads the drop down.
@property (nonatomic, strong) UIColor * _Nonnull separatorColor;
/// The corner radius of DropDown.
/// Changing the corner radius automatically reloads the drop down.
@property (nonatomic) CGFloat cornerRadius;
/// The color of the shadow.
/// Changing the shadow color automatically reloads the drop down.
@property (nonatomic, strong) UIColor * _Nonnull shadowColor;
/// The offset of the shadow.
/// Changing the shadow color automatically reloads the drop down.
@property (nonatomic) CGSize shadowOffset;
/// The opacity of the shadow.
/// Changing the shadow opacity automatically reloads the drop down.
@property (nonatomic) float shadowOpacity;
/// The radius of the shadow.
/// Changing the shadow radius automatically reloads the drop down.
@property (nonatomic) CGFloat shadowRadius;
/// The duration of the show/hide animation.
@property (nonatomic) double animationduration;
/// The option of the show animation. Global change.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) UIViewAnimationOptions animationEntranceOptions;)
+ (UIViewAnimationOptions)animationEntranceOptions SWIFT_WARN_UNUSED_RESULT;
+ (void)setAnimationEntranceOptions:(UIViewAnimationOptions)value;
/// The option of the hide animation. Global change.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) UIViewAnimationOptions animationExitOptions;)
+ (UIViewAnimationOptions)animationExitOptions SWIFT_WARN_UNUSED_RESULT;
+ (void)setAnimationExitOptions:(UIViewAnimationOptions)value;
/// The option of the show animation. Only change the caller. To change all drop down’s use the static var.
@property (nonatomic) UIViewAnimationOptions animationEntranceOptions;
/// The option of the hide animation. Only change the caller. To change all drop down’s use the static var.
@property (nonatomic) UIViewAnimationOptions animationExitOptions;
/// The downScale transformation of the tableview when the DropDown is appearing
@property (nonatomic) CGAffineTransform downScaleTransform;
/// The color of the text for each cells of the drop down.
/// Changing the text color automatically reloads the drop down.
@property (nonatomic, strong) UIColor * _Nonnull textColor;
/// The font of the text for each cells of the drop down.
/// Changing the text font automatically reloads the drop down.
@property (nonatomic, strong) UIFont * _Nonnull textFont;
/// The NIB to use for DropDownCells
/// Changing the cell nib automatically reloads the drop down.
@property (nonatomic, strong) UINib * _Nonnull cellNib;
/// The data source for the drop down.
/// Changing the data source automatically reloads the drop down.
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull dataSource;
/// The localization keys for the data source for the drop down.
/// Changing this value automatically reloads the drop down.
/// This has uses for setting accibility identifiers on the drop down cells (same ones as the localization keys).
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull localizationKeysDataSource;
/// The format for the cells’ text.
/// By default, the cell’s text takes the plain <code>dataSource</code> value.
/// Changing <code>cellConfiguration</code> automatically reloads the drop down.
@property (nonatomic, copy) NSString * _Nonnull (^ _Nullable cellConfiguration)(NSInteger, NSString * _Nonnull);
/// A advanced formatter for the cells. Allows customization when custom cells are used
/// Changing <code>customCellConfiguration</code> automatically reloads the drop down.
@property (nonatomic, copy) void (^ _Nullable customCellConfiguration)(NSInteger, NSString * _Nonnull, DropDownCell * _Nonnull);
/// The action to execute when the user selects a cell.
@property (nonatomic, copy) void (^ _Nullable selectionAction)(NSInteger, NSString * _Nonnull);
/// The action to execute when the drop down will show.
@property (nonatomic, copy) void (^ _Nullable willShowAction)(void);
/// The action to execute when the user cancels/hides the drop down.
@property (nonatomic, copy) void (^ _Nullable cancelAction)(void);
/// Creates a new instance of a drop down.
/// Don’t forget to setup the <code>dataSource</code>,
/// the <code>anchorView</code> and the <code>selectionAction</code>
/// at least before calling <code>show()</code>.
- (nonnull instancetype)init;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface DropDown (SWIFT_EXTENSION(DropDown))
+ (void)setupDefaultAppearance;
@end

@class UIEvent;

@interface DropDown (SWIFT_EXTENSION(DropDown))
- (UIView * _Nullable)hitTest:(CGPoint)point withEvent:(UIEvent * _Nullable)event SWIFT_WARN_UNUSED_RESULT;
@end




@interface DropDown (SWIFT_EXTENSION(DropDown))
/// Starts listening to keyboard events.
/// Allows the drop down to display correctly when keyboard is showed.
+ (void)startListeningToKeyboard;
@end

@class UITableView;
@class UITableViewCell;

@interface DropDown (SWIFT_EXTENSION(DropDown)) <UITableViewDataSource, UITableViewDelegate>
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)tableView:(UITableView * _Nonnull)tableView willDisplayCell:(UITableViewCell * _Nonnull)cell forRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end

@class NSDictionary;

@interface DropDown (SWIFT_EXTENSION(DropDown))
/// An Objective-C alias for the show() method which converts the returned tuple into an NSDictionary.
///
/// returns:
/// An NSDictionary with a value for the “canBeDisplayed” Bool, and possibly for the “offScreenHeight” Optional(CGFloat).
- (NSDictionary * _Nonnull)show SWIFT_WARN_UNUSED_RESULT;
/// Hides the drop down.
- (void)hide;
@end


@interface DropDown (SWIFT_EXTENSION(DropDown))
- (void)updateConstraints;
- (void)layoutSubviews;
@end


@interface DropDown (SWIFT_EXTENSION(DropDown))
/// Reloads all the cells.
/// It should not be necessary in most cases because each change to
/// <code>dataSource</code>, <code>textColor</code>, <code>textFont</code>, <code>selectionBackgroundColor</code>
/// and <code>cellConfiguration</code> implicitly calls <code>reloadAllComponents()</code>.
- (void)reloadAllComponents;
/// Returns the selected item.
@property (nonatomic, readonly, copy) NSString * _Nullable selectedItem;
@end

@class UILabel;

SWIFT_CLASS("_TtC8DropDown12DropDownCell")
@interface DropDownCell : UITableViewCell
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified optionLabel;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(ios,introduced=3.0);
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface DropDownCell (SWIFT_EXTENSION(DropDown))
- (void)awakeFromNib;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
- (void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;
@end


@interface UIBarButtonItem (SWIFT_EXTENSION(DropDown)) <AnchorView>
@property (nonatomic, readonly, strong) UIView * _Nonnull plainView;
@end






@interface UIView (SWIFT_EXTENSION(DropDown)) <AnchorView>
@property (nonatomic, readonly, strong) UIView * _Nonnull plainView;
@end



SWIFT_MODULE_NAMESPACE_POP
#pragma clang diagnostic pop
