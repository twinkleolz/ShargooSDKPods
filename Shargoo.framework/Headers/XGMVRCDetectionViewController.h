//
//  XGMVRCDetectionViewController.h
//  XueGuProduct
//
//  Created by Twinkleo on 2020/5/6.
//  Copyright © 2020 Twinkleo. All rights reserved.
//
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface XGMVRCDetectionViewController : UIViewController

/**
机动车登记证书识别后的回调
backData  识别结果
image        拍摄的照片
controller   XGMVRCDetectionViewController
*/
@property (nonatomic, copy) void(^MVRCDetectionBlock)(id backData, UIImage *image, UIViewController *controller);

@end

NS_ASSUME_NONNULL_END
