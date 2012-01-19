/**
 * ----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE":
 * The Cocoakit author wrote this file. As long as you retain this notice you
 * can do whatever you want with this stuff. If we meet some day, and you think
 * this stuff is worth it, you can buy me a beer in return or, drink a beer in 
 * my honor.
 * ----------------------------------------------------------------------------
 */

#import <UIKit/UIKit.h>

@class CKViewController;

/**
 * The CKAppDelegate extends that UIResponder class defines an interface for objects that respond to and handle events. 
 * It is the superclass of UIApplication, UIView and its subclasses (which include UIWindow). 
 * Instances of these classes are sometimes referred to as responder objects or, simply, responders.
 *
 * @author <a href="mailto:ivan.palmergarcia@gmail.com">Ivan Palmer</a>
 */
@interface CKAppDelegate : UIResponder <UIApplicationDelegate>

@property (nonatomic, readwrite, retain) UIWindow *window;

@property (nonatomic, readwrite, retain) CKViewController *viewController;

@end
