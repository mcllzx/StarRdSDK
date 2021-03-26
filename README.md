# StarRdSDK

#### 1、集成方式(Cocopods)

​	`pod 'StarRdSdk'`

#### 2、使用

- 导入

  `#import <StarRdSdk/StarRdSdk.h>`

- 初始化

  `[StarRdPubileManager initWithJsonStr:@"JSON"];`

  ```json
  JSON 格式
  {
      "advertisingPositionsMap":{
          "book_details_banner":{
              "advertisingPosition":"book_details_banner",
              "advertisingPositionsId":"467b6588a2a28bff5b",
              "advertisingSerialNumber":1,
              "advertisingType":"横幅广告",
              "id":"5"
          },
          "information_flow":{
              "advertisingPosition":"information_flow",
              "advertisingPositionsId":"9f273c39a30ab43655",
              "advertisingSerialNumber":2,
              "advertisingType":"信息流",
              "id":"6"
          },
        	"bookmall_intertitical":{
              "advertisingPosition":"bookmall_intertitical",
              "advertisingPositionsId":"9535af29514e548fe0",
              "advertisingSerialNumber":2,
              "advertisingType":"插屏广告",
              "id":"6"
          }
      },
      "appId":"5",
      "thirdPartyAppId":"2001",
      "thirdPartyAppName":"demo"
  }
  ```

- 获取阅读视图

  ```objective-c
  // 不带导航栏的VC
  UIViewController *mainVC = [StarRdPubileManager backViewControllerWith:NO];
  // 带导航栏的VC
  UIViewController *mainVC = [StarRdPubileManager backViewControllerWith:YES];
  ```

- 如果有依赖问题，手动导入`libc++.tbd`

#### 3、播放功能

- 添加`Required background modes -> App plays audio`

- 需要在AppDelegate文件里面添加以下方法

  ```
  - (void)applicationDidEnterBackground:(UIApplication *)application {
      NSLog(@"applicationDidEnterBackground:");
      [application beginReceivingRemoteControlEvents];
  }
  
  - (void)applicationWillEnterForeground:(UIApplication *)application {
      NSLog(@"applicationWillEnterForeground:");
      [application endReceivingRemoteControlEvents];
  }
  
  #pragma mark - 后台播放
  
  - (BOOL)canBecomeFirstResponder {
      return YES;
  }
  
  - (void)remoteControlReceivedWithEvent:(UIEvent *)event {
      switch (event.subtype) {
          case UIEventSubtypeRemoteControlPlay: {//恢复播放
              [StarRdPubileManager playReplayAction];
          }
              break;
          case UIEventSubtypeRemoteControlPause: {//暂停
              [StarRdPubileManager playPauseAction];
              break;
          }
          case UIEventSubtypeRemoteControlPreviousTrack: {//上一曲
              [StarRdPubileManager playLastAction];
              break;
          }
          case UIEventSubtypeRemoteControlNextTrack: {//下一曲
              [StarRdPubileManager playNextAction];
              break;
          }
          case UIEventSubtypeRemoteControlTogglePlayPause: {//小窗口暂停
              [StarRdPubileManager playPauseAction];
              break;
          }
          default:
              break;
      }
  }
  ```

  