
#import <Foundation/Foundation.h>

#ifndef _LRAPPEARANCE_
#define _LRAPPEARANCE_

#if __has_include(<LRAppearance/LRAppearance.h>)

FOUNDATION_EXPORT double LRAppearanceVersionNumber;
FOUNDATION_EXPORT const unsigned char LRAppearanceVersionString[];

#import <LRAppearance/LRSize.h>

#else

#import "LRSize.h"

#endif /* __has_include */

#endif /* _LRAPPEARANCE_ */


#ifdef DEBUG
#define LRDebugLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__)
#else
#define LRDebugLog(...)
#endif

