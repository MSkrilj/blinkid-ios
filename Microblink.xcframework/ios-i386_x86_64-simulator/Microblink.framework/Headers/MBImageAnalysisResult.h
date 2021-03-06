//
//  MBImageAnalysisResult.h
//  MicroblinkDev
//
//  Created by Jura Skrlec on 06/07/2020.
//

#import <Foundation/Foundation.h>
#import "MBMicroblinkDefines.h"
#import "MBDocumentImageColorStatus.h"
#import "MBDocumentImageMoireStatus.h"

NS_ASSUME_NONNULL_BEGIN

MB_CLASS_AVAILABLE_IOS(8.0) MB_FINAL
@interface MBImageAnalysisResult : NSObject

MB_INIT_UNAVAILABLE

/**
 * Whether the image is blurred.
 */
@property (nonatomic, readonly, assign) BOOL blurred;

/**
 * The color status determined from scanned image.
 */
@property (nonatomic, readonly, assign) MBDocumentImageColorStatus documentImageColorStatus;

/**
 * The Moire pattern detection status determined from the scanned image.
 */
@property (nonatomic, readonly, assign) MBDocumentImageMoireStatus documentImageMoireStatus;

@end

NS_ASSUME_NONNULL_END
