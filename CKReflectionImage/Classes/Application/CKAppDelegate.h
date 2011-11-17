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

@class CKViewController;

/**
 * The CKAppDelegate extends that UIResponder class defines an interface for objects that respond to and handle events. 
 * It is the superclass of UIApplication, UIView and its subclasses (which include UIWindow). 
 * Instances of these classes are sometimes referred to as responder objects or, simply, responders.
 *
 * @author <a href="mailto:ivan.palmergarcia@gmail.com">Ivan Palmer</a>
 */
@interface CKAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) CKViewController *viewController;

@end
