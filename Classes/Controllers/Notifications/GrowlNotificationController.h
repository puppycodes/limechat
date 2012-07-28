// LimeChat is copyrighted free software by Satoshi Nakagawa <psychs AT limechat DOT net>.
// You can redistribute it and/or modify it under the terms of the GPL version 2 (see the file GPL.txt).

#import "NotificationController.h"
#import "Growl/Growl.h"


@interface GrowlNotificationController : NSObject <NotificationController, GrowlApplicationBridgeDelegate>

@property (nonatomic, weak) id<NotificationControllerDelegate> delegate;

- (void)notify:(UserNotificationType)type title:(NSString*)title desc:(NSString*)desc context:(id)context;

@end
