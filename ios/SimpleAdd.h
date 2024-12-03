
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNSimpleAddSpec.h"

@interface SimpleAdd : NSObject <NativeSimpleAddSpec>
#else
#import <React/RCTBridgeModule.h>

@interface SimpleAdd : NSObject <RCTBridgeModule>
#endif

@end
