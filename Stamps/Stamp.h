//
//  Stamp.h
//  Stamps
//
//  Created by Daniel Byon on 7/21/12.
//  Copyright (c) 2012 Quilt. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface Stamp : NSObject <NSCoding, NSCopying>

- (id)initWithType:(NSString *)type imageFilename:(NSString *)imageFilename isCustom:(BOOL)isCustom;

@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *type;
@property (nonatomic, retain) NSString *imageFilename;
@property (nonatomic, retain) NSNumber *isCustom;
@property (nonatomic, strong) NSNumber *hasImage;

extern NSString * const QTStampTypeSmile;
extern NSString * const QTStampTypeFrown;
extern NSString * const QTStampTypeMeh;
extern NSString * const QTStampTypeShocked;
extern NSString * const QTStampTypeFlirt;
extern NSString * const QTStampTypeCustom;

@end
