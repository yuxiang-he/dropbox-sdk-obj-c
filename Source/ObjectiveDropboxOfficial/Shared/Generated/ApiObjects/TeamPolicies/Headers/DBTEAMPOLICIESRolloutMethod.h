///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMPOLICIESRolloutMethod;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `RolloutMethod` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMPOLICIESRolloutMethod : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMPOLICIESRolloutMethodTag` enum type represents the possible tag
/// states with which the `DBTEAMPOLICIESRolloutMethod` union can exist.
typedef NS_ENUM(NSInteger, DBTEAMPOLICIESRolloutMethodTag) {
  /// Unlink all.
  DBTEAMPOLICIESRolloutMethodUnlinkAll,

  /// Unlink devices with the most inactivity.
  DBTEAMPOLICIESRolloutMethodUnlinkMostInactive,

  /// Add member to Exceptions.
  DBTEAMPOLICIESRolloutMethodAddMemberToExceptions,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMPOLICIESRolloutMethodTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "unlink_all".
///
/// Description of the "unlink_all" tag state: Unlink all.
///
/// @return An initialized instance.
///
- (instancetype)initWithUnlinkAll;

///
/// Initializes union class with tag state of "unlink_most_inactive".
///
/// Description of the "unlink_most_inactive" tag state: Unlink devices with the
/// most inactivity.
///
/// @return An initialized instance.
///
- (instancetype)initWithUnlinkMostInactive;

///
/// Initializes union class with tag state of "add_member_to_exceptions".
///
/// Description of the "add_member_to_exceptions" tag state: Add member to
/// Exceptions.
///
/// @return An initialized instance.
///
- (instancetype)initWithAddMemberToExceptions;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "unlink_all".
///
/// @return Whether the union's current tag state has value "unlink_all".
///
- (BOOL)isUnlinkAll;

///
/// Retrieves whether the union's current tag state has value
/// "unlink_most_inactive".
///
/// @return Whether the union's current tag state has value
/// "unlink_most_inactive".
///
- (BOOL)isUnlinkMostInactive;

///
/// Retrieves whether the union's current tag state has value
/// "add_member_to_exceptions".
///
/// @return Whether the union's current tag state has value
/// "add_member_to_exceptions".
///
- (BOOL)isAddMemberToExceptions;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBTEAMPOLICIESRolloutMethod` union.
///
@interface DBTEAMPOLICIESRolloutMethodSerializer : NSObject

///
/// Serializes `DBTEAMPOLICIESRolloutMethod` instances.
///
/// @param instance An instance of the `DBTEAMPOLICIESRolloutMethod` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMPOLICIESRolloutMethod` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMPOLICIESRolloutMethod *)instance;

///
/// Deserializes `DBTEAMPOLICIESRolloutMethod` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMPOLICIESRolloutMethod` API object.
///
/// @return An instantiation of the `DBTEAMPOLICIESRolloutMethod` object.
///
+ (DBTEAMPOLICIESRolloutMethod *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
