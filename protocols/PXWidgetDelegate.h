/* Generated by RuntimeBrowser.
 */

@protocol PXWidgetDelegate <NSObject>

@required

- (void)widget:(void *)arg1 animateChanges:(void *)arg2 withAnimationOptions:(void *)arg3; // needs 3 arg types, found 7: <PXWidget> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, PXBasicTileAnimationOptions *
- (BOOL)widget:(id <PXWidget>)arg1 requestViewControllerDismissalAnimated:(BOOL)arg2;
- (BOOL)widget:(id <PXWidget>)arg1 transitionToViewController:(struct NSObject { Class x1; }*)arg2 withTransitionType:(int)arg3;
- (int)widgetDefaultContentViewAnchoringTypeForDisclosureHeightChange:(id <PXWidget>)arg1;
- (PXExtendedTraitCollection *)widgetExtendedTraitCollection:(id <PXWidget>)arg1;
- (void)widgetHasLoadedContentDataDidChange:(id <PXWidget>)arg1;
- (void)widgetInvalidateContentLayoutStyle:(id <PXWidget>)arg1;
- (void)widgetInvalidateContentViewAnchoringType:(id <PXWidget>)arg1;
- (void)widgetLocalizedCaptionDidChange:(id <PXWidget>)arg1;
- (void)widgetLocalizedDisclosureTitleDidChange:(id <PXWidget>)arg1;
- (void)widgetLocalizedSubtitleDidChange:(id <PXWidget>)arg1;
- (void)widgetLocalizedTitleDidChange:(id <PXWidget>)arg1;
- (void)widgetPreferredContentHeightForWidthDidChange:(id <PXWidget>)arg1;
- (void)widgetRequestFocus:(id <PXWidget>)arg1;
- (PXScrollViewController *)widgetScrollViewControllerHostingWidget:(id <PXWidget>)arg1;
- (struct NSObject { Class x1; }*)widgetViewControllerHostingWidget:(id <PXWidget>)arg1;
- (struct NSObject { Class x1; }*)widgetViewHostingGestureRecognizers:(id <PXWidget>)arg1;

@end
