//
//  XGFaceDetectionTipViewController.h
//  ShargooData
//
//  Created by Twinkleo on 2020/4/26.
//  Copyright © 2020 Twinkleo. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface XGFaceDetectionTipViewController : UIViewController

/**
身份验证并人脸检测后的回调
backData  检测结果
controller   XGFaceDetectionTipViewController
*/
@property (nonatomic, copy) void(^faceDetectionTipBlock)(id backData, UIViewController *controller);

/**
 身份证号（调用此页面时必传）
*/
@property (nonatomic, copy) NSString *idCardNameStr;

/**
 姓名（调用此页面时必传）
*/
@property (nonatomic, copy) NSString *idCardNumberStr;

@end

NS_ASSUME_NONNULL_END
