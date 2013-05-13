//
//  AttriubtedStringCoderHelper.h
//  Ingress
//
//  Created by Alex Studnička on 12.05.13.
//  Copyright (c) 2013 A&A Code. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AttributedStringCoderHelper : NSObject

+ (void)encodeAttributedStringAttributes:(NSDictionary*)attributes withKeyedArchiver:(NSKeyedArchiver*)archiver;
+ (NSDictionary*)decodeAttributedStringAttriubtes:(NSKeyedUnarchiver*)decoder;
+ (NSData*)encodeAttributedString:(NSAttributedString*)attributedString;
+ (NSAttributedString*)decodeAttributedStringFromData:(NSData*)data;

@end