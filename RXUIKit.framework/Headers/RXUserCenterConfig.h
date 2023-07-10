//
//  RXUserCenterConfig.h
//  RXUIKit
//
//  Created by 陈汉 on 2023/4/26.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface RXUserCenterConfig : NSObject

/**
 * 透传数据，使用jsonString形式
 */
@property (nonatomic, strong) NSString *transmit_args;
/**
 * 用户的游戏id
 */
@property (nonatomic, strong) NSString *game_user_id;
/**
 * 用户昵称
 */
@property (nonatomic, strong) NSString *nickname;
/**
 * 用户头像
 */
@property (nonatomic, strong) NSString *head_img_url;
/**
 * 在瑞雪客服系统设置的接入点名称 不填写默认为default
 */
@property (nonatomic, strong) NSString *queue_name;

@end

NS_ASSUME_NONNULL_END
