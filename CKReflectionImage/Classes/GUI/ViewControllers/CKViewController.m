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

#import "CKViewController.h"

/**
 * Defines a NIB file name.
 */
#define NIB_FILE_NAME                                               @"CKViewController"

@implementation CKViewController

#pragma mark - Memory management

/**
 * Deallocates the memory occupied by the receiver.
 */
- (void)dealloc {
    
    
    [super dealloc];
    
}

#pragma mark - View lifecycle

/**
 * Called after the controller’s view is loaded into memory.
 */
- (void)viewDidLoad {
    
    [super viewDidLoad];
    
}

/**
 * Called when the controller’s view is released from memory.
 */
- (void)viewDidUnload {
    
    [super viewDidUnload];
    
}

#pragma mark - Instances initialization

/*
 * Create and return an autoreleased CKViewController contructed from NIB file.
 */
+ (CKViewController *)ckViewController {
  
    return [[[CKViewController alloc] initWithNibName:NIB_FILE_NAME bundle:nil] autorelease];
    
}

@end
