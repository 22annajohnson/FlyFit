#import <Foundation/Foundation.h>

NS_SWIFT_NAME(DataCallback)
typedef void (^MBXDataCallback)(NSData * _Nonnull data); // NOLINT(modernize-use-using)

NS_SWIFT_NAME(DataRef)
__attribute__((visibility ("default")))
@interface MBXDataRef : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

/**
 * Create object that wraps the data
 * @param data data object
 */
- (nonnull instancetype)initWithData:(nonnull NSData *)data;

/**
 * Create object that wraps the mutable data.
 * This initializer behaves exactly like `initWithData` in Objective-C.
 * However, `NSData` is implicitly bridged to `Data` in Swift, which means that `NSMutableData` must
 * be converted  to `Data` in order to pass as parameter to `initWithData` initializer.
 * This conversion unfortunately copies the underlying memory. Hence, this method is meant to
 * pass`NSMutableData` directly from Swift
 * @param data mutable data object
 */
- (nonnull instancetype)initWithMutableData:(nonnull NSMutableData *)mutableData;

/**
 * Invoke the callback synchronously and with the wrapped data as a parameter
 * The data is guaranteed to be usable within the scope of the callback only.
 * Note that `NSData` that is implicitly bridged to Swift `Data` is not automatically deallocated
 * at the end of the lexical scope. It is only deallocated with the help of `autoreleasepool`.
 * See https://stackoverflow.com/questions/35705601/nsdata-causing-leak for more details.
 * This method wraps the callback invocation within an `autoreleasepool` block
 * so that the `NSData` is deallocated right when `DataRef` object is deallocated.
 * It is not recommneded to mutate the Swift `Data` as it would trigger a memory copy.
 * It is not recommended to use the data outside the scope of the callback.
 * If the data escapes the scope of the callback, please consider:
 * 1. Keep the DataRef object alive as long as the buffer data is used
 * 2. Use `autoreleasepool` so that the bridged `NSData` is deallocated
 */
- (void)withData:(nonnull MBXDataCallback)callback NS_SWIFT_NAME(withData(_:));

@end
