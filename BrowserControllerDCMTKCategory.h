/*=========================================================================
  Program:   OsiriX

  Copyright (c) OsiriX Team
  All rights reserved.
  Distributed under GNU - GPL
  
  See http://www.osirix-viewer.com/copyright.html for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.
=========================================================================*/

#import <Cocoa/Cocoa.h>
#import "browserController.h"

/** \brief  Category for DCMTK calls from BrowserController */

@interface BrowserController (BrowserControllerDCMTKCategory)
+ (NSString*) compressionString: (NSString*) string;
- (BOOL)compressDICOMWithJPEG:(NSArray *) paths;
- (BOOL)compressDICOMWithJPEG:(NSArray *) paths to:(NSString*) dest;
- (BOOL)decompressDICOMList:(NSArray *) files to:(NSString*) dest;
- (BOOL) needToCompressFile: (NSString*) path;
@end
