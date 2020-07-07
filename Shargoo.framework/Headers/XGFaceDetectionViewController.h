//
//  XGFaceDetectionViewController.h
//  ShargooData
//
//  Created by Twinkleo on 2020/4/26.
//  Copyright © 2020 Twinkleo. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface XGFaceDetectionViewController : UIViewController

/**
人脸识别后的回调
backData  识别结果
controller   XGFaceDetectionViewController
*/
@property (nonatomic, copy) void(^faceDetectionBlock)(id backData, UIViewController *controller);

/**
 人脸识别类型
 0为单纯活体检测
 1为身份验证活体检测
 */
@property (nonatomic, assign) NSInteger faceType;

/**
 身份证号（faceType为1时必传）
*/
@property (nonatomic, copy) NSString *idCardNumber;

/**
 姓名（faceType为1时必传）
*/
@property (nonatomic, copy) NSString *idCardName;

@end

NS_ASSUME_NONNULL_END
