/**
 * CKReflectionImage, example to create an image reflection view.
 * Copyright (C) 2011 cocoakit.com
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#import <UIKit/UIKit.h>

/**
 * A reflection image view. This class is a subclass from UIView but a UIImageView get a Special Condition:
 * The UIImageView class is optimized to draw its images to the display. UIImageView will not call 
 * drawRect: a subclass. If your subclass needs custom drawing code, it is recommended you use UIView as 
 * the base class.
 *
 * How to use this class:
 * Add an view with this class and set values <b>visibleReflectionHeight</b> and <b>paddingToTopImage</b>.
 * The image must be square or more wide. Can't have more high.
 *     __       ____
 *    |  |  or |    |
 *    |__|     |____|
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
    CGFloat visibleReflectioHeight_;
    
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
@property (nonatomic, readwrite, assign) CGFloat visibleReflectioHeight;

/**
 * Provides read-write access to padding to top image variable.
 */
@property (nonatomic, readwrite, assign) CGFloat paddingToTopImage;

@end
