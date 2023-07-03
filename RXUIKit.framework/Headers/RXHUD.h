//
//  RXHUD.h
//  MisApp-iOS
//
//  Created by 陈汉 on 2023/2/14.
//

#import <Foundation/Foundation.h>
#import <MBProgressHUD/MBProgressHUD.h>
//#import "MBProgressHUD+Extension.h"

static CGFloat showDelayTime = 1.5;
OBJC_EXPORT NSString * const showText;

NS_ASSUME_NONNULL_BEGIN

@interface RXHUD : NSObject

@property (nonatomic,strong) MBProgressHUD * hud;

+ (instancetype)instantce;

/**
 * 展示HUD
 */
+ (void)showHUD;
/**
 * 展示HUD，可设置偏移量
 */
+ (void)showHUDWithOffset:(CGRect)rect;
/**
 * 隐藏HUD
 */
+ (void)hideHUD;
/**
 * 隐藏Web版HUD
 */
+ (void)hideWebHUD;
/**
 * 添加文字loading，没有icon
 */
+ (void)showText:(NSString *)text;
/**
 * 成功icon+文字
 */
+ (void)showSuccessText:(NSString *)text;
/**
 * 失败icon+文字
 */
+ (void)showErrorText:(NSString *)text;

@end

NS_ASSUME_NONNULL_END
