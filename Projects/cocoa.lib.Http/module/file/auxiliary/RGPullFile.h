//
//  PullFile.h
//  remote_gateway
//
//  Created by Richard Long on 08/07/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "FileTransactionDelegate.h"
#import "RGFile.h"

@interface RGPullFile : NSObject <FileTransactionDelegate> {

    // target
    RGFile* _target;
    //@property (nonatomic, retain) RGFile* target;
    //@synthesize target = _target;

}


-(long long)getFileLength;


#pragma mark instance lifecycle

-(id)initWithTarget:(RGFile*)target;

@end