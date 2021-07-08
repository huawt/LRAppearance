//
//  LRSize.h
//  LRAppearance
//
//  Created by WinTer on 2021/7/8.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKit.h>

extern CGFloat kStatusBarHeight;
extern CGFloat kNavigationBarHeight;
extern CGFloat kTabBarOffset;
extern CGFloat kTabBarHeight;
extern CGFloat kStatusBarOffset;
extern CGFloat kFinalTopHeight;
extern CGFloat kUIWidth;
extern CGFloat kUIHeight;
extern BOOL kIsIPhoneX;

NS_ASSUME_NONNULL_BEGIN

@interface LRSize : NSObject
/// 配置UISize
+ (void)configureUISize;
/**
是否是 刘海屏
*/
+ (BOOL)judgeIsIPhoneX;
/**
 是否是 iPhone
 */
BOOL kIsiPhone(void);
/**
 是否是 iPad
 */
BOOL kIsiPad(void);
/**
是否是 刘海屏
*/
BOOL IsIPhoneX(void);
/**
根据size,重绘图片
*/
UIImage *ReSizeImage(UIImage *image, CGSize size);

@end

NS_ASSUME_NONNULL_END
