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
