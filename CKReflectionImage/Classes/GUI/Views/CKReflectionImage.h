/**
 * ----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE":
 * The Cocoakit author wrote this file. As long as you retain this notice you
 * can do whatever you want with this stuff. If we meet some day, and you think
 * this stuff is worth it, you can buy me a beer in return.
 * ----------------------------------------------------------------------------
 */

#import <UIKit/UIKit.h>

/**
 * A reflection image view. This class is a subclass from UIView but a UIImageView get a Special Condition:
 * The UIImageView class is optimized to draw its images to the display. UIImageView will not call 
 * drawRect: a subclass. If your subclass needs custom drawing code, it is recommended you use UIView as 
 * the base class.
 *
 * @author <a href="mailto:ivan.palmergarcia@gmail.com">Ivan Palmer</a>
 */
@interface CKReflectionImage : UIView {
@private
    
    /**
     * Image to draw.
     */
    UIImage *image_;
    
    /**
     * Value of gradient start. This value is divided to height of image.
     */
    CGFloat visibleReflectionHeight_;
    
    /**
     * Padding to top image.
     */
    CGFloat paddingToTopImage_;
    
}

/**
 * Provides read-write accesss to UIImage image.
 */
@property (nonatomic, readwrite, retain) UIImage *image;

/**
 * Provides read-write access to gradientStart value.
 */
@property (nonatomic, readwrite, assign) CGFloat visibleReflectionHeight;

/**
 * Provides read-write access to padding to top image variable.
 */
@property (nonatomic, readwrite, assign) CGFloat paddingToTopImage;

@end
