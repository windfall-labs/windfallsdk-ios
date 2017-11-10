//
//  BRScanOptions+Legacy.h
//  BlinkReceipt
//
//  Created by Danny Panzer on 8/7/17.
//  Copyright © 2017 Windfall. All rights reserved.
//

#import "BRScanOptions.h"

typedef NS_ENUM(NSUInteger, WFOcrModel) {
    WFOcrModelLegacy,
    WFOcrModelDeepOcr
};

@interface BRScanOptions ()

/**
 Whether the SDK should use the legacy OCR model or the new Deep OCR model. Note the following device-specific behaviors with regard to Deep OCR:
 - iPhone 4S and below cannot run Deep OCR, so this setting will be ignored for those devices
 - iPhone 5 can run Deep OCR, but in that case the frames scanned will be limited to frames the user has explicitly snapped
 */
@property (nonatomic) WFOcrModel ocrModel;

/**
 Whether to enable logo detection
 */
@property (nonatomic) BOOL detectLogo;

@end
