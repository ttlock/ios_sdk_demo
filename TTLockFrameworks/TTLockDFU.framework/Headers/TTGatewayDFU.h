//
//  TTGatewayDFU.h
//  TTLockSourceCodeDemo
//
//  Created by 王娟娟 on 2019/4/27.
//  Copyright © 2019 Sciener. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TTLockDFU/TTDFUMacros.h>

@interface TTGatewayDFU : NSObject

+ (instancetype _Nonnull  )shareInstance;

- (void)startDfuWithClientId:(NSString *_Nonnull)clientId
                 accessToken:(NSString *_Nonnull)accessToken
                   gatewayId:(NSNumber *_Nonnull)gatewayId
                  gatewayMac:(NSString *_Nonnull)gatewayMac
                successBlock:(TTLockDFUSuccessBlock _Nullable )sblock
                   failBlock:(TTLockDFUFailBlock _Nullable )fblock;

- (void)retryEnterUpgradeModebyNet;
- (void)retryEnterUpgradeModebyBluetooth;

- (void)pauseUpgrade;
- (void)restartUpgrade;
- (BOOL)stopUpgrade;
- (BOOL)paused;
@end

