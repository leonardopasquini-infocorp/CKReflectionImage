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

@class CKReflectionImage;

/**
 * The CKViewController extends that UIViewController class provides the fundamental view-management model for iOS applications. 
 * The basic view controller class supports the presentation of an associated view, support for managing modal views, and support for 
 * rotating views in response to device orientation changes. Subclasses such as UINavigationController and UITabBarController provide 
 * additional behavior for managing complex hierarchies of view controllers and views.
 *
 * @author <a href="mailto:ivan.palmergarcia@gmail.com">Ivan Palmer</a>
 */
@interface CKViewController : UIViewController {
@private
    
    /**
     * A reflection image example.
     */
    CKReflectionImage *reflectionImage;
    
}

/**
 * Create and return an autoreleased CKViewController contructed from NIB file.
 *
 * @return An autoreleased CKViewController constructed from NIB file.
 */
+ (CKViewController *)ckViewController;

@end
