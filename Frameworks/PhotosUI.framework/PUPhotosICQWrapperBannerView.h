/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotosICQWrapperBannerView : UIView {
    ICQBannerView * _bannerView;
    NSArray * _constraints;
    <ICQBannerViewDelegate> * _delegate;
    ICQOffer * _offer;
}

@property (nonatomic) <ICQBannerViewDelegate> *delegate;
@property (nonatomic, retain) ICQOffer *offer;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithOffer:(id)arg1;
- (id)offer;
- (void)setDelegate:(id)arg1;
- (void)setOffer:(id)arg1;
- (void)updateConstraints;

@end
