//
//  VidaSilentLivenessView.h
//  VidaSilentLiveness
//
//  Created by Maheep on 05/02/20.
//  Copyright © 2020 VIDA. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface VidaSilentLivenessMaskView: UIView
@property (nonatomic, assign) CGRect windowRect;
@property (nonatomic, strong) UIColor * lineColor;
@property (nonatomic, strong) UIColor * maskColor;
@property (nonatomic, assign) CGFloat maskAlpha;
@end

@interface VidaSilentLivenessView: UIView

@property (nonatomic) VidaSilentLivenessMaskView * maskCoverView;
@property (nonatomic, assign) CGRect windowFrame; // scan frame position
@property (nonatomic, strong) UILabel * hintLabel;
@property (nonatomic, strong) UIImageView * poweredByImageView;

- (instancetype) initWithFrame: (CGRect) frame windowFrame: (CGRect) window poweredByImage: (UIImage *) image;
- (void)updateHintFont:(NSString *)fontName;
@end
