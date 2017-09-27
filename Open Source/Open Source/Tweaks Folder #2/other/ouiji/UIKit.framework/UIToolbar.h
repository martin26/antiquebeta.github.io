/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIToolbar : UIView <UIBarPositioning, _UIBarPositioningInternal, _UIShadowedView> {
    bool  __wantsLetterpressContent;
    id  _appearanceStorage;
    _UIBarBackground * _barBackgroundView;
    long long  _barPosition;
    UIColor * _barTintColor;
    bool  _centerTextButtons;
    UIView * _customBackgroundView;
    <UIToolbarDelegate> * _delegate;
    double  _extraEdgeInsets;
    NSArray * _items;
    UIView * _shadowView;
    struct { 
        unsigned int barStyle : 3; 
        unsigned int barTranslucence : 3; 
        unsigned int isLocked : 1; 
        unsigned int linkedBeforeWhitetailAndInitializedFromCoder : 1; 
    }  _toolbarFlags;
}

@property (getter=_backdropViewLayerGroupName, setter=_setBackdropViewLayerGroupName:, nonatomic, retain) NSString *_backdropViewLayerGroupName;
@property (setter=_setBackgroundView:, nonatomic, retain) UIView *_backgroundView;
@property (setter=_setHidesShadow:, nonatomic) bool _hidesShadow;
@property (getter=_isLocked, setter=_setLocked:, nonatomic) bool _locked;
@property (setter=_setShadowView:, nonatomic, retain) UIView *_shadowView;
@property (setter=_setWantsLetterpressContent:, nonatomic) bool _wantsLetterpressContent;
@property (nonatomic, readonly) long long barPosition;
@property (nonatomic) long long barStyle;
@property (nonatomic, retain) UIColor *barTintColor;
@property (nonatomic) bool centerTextButtons;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIToolbarDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *items;
@property (getter=isMinibar, nonatomic, readonly) bool minibar;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *tintColor;
@property (getter=isTranslucent, nonatomic) bool translucent;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (Class)defaultButtonClass;
+ (id)defaultButtonFont;
+ (double)defaultHeight;
+ (double)defaultHeightForBarSize:(int)arg1;
+ (double)defaultSelectionModeHeight;
+ (Class)defaultTextButtonClass;

- (void).cxx_destruct;
- (double)_autolayoutSpacingAtEdge:(int)arg1 inContainer:(id)arg2;
- (double)_autolayoutSpacingAtEdge:(int)arg1 nextToNeighbor:(id)arg2;
- (id)_backdropViewLayerGroupName;
- (id)_backgroundView;
- (long long)_barPosition;
- (void)_buttonBarFinishedAnimating;
- (bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (id)_currentCustomBackground;
- (id)_currentCustomBackgroundRespectOversize_legacy:(bool*)arg1;
- (void)_customViewChangedForButtonItem:(id)arg1;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (double)_edgeMarginForBorderedItem:(bool)arg1 isText:(bool)arg2;
- (id)_effectiveBarTintColor;
- (void)_effectiveBarTintColorDidChangeWithPreviousColor:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameOfBarButtonItem:(id)arg1;
- (void)_frameOrBoundsChangedWithVisibleSizeChange:(bool)arg1 wasMinibar:(bool)arg2;
- (void)_frameOrCenterChanged;
- (bool)_hasCustomAutolayoutNeighborSpacing;
- (bool)_hidesShadow;
- (bool)_isAdaptiveToolbarDisabled;
- (bool)_isInNavigationBar;
- (bool)_isLocked;
- (bool)_isTopBar_legacy;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_positionToolbarButtons:(id)arg1 ignoringItem:(id)arg2 resetFontScaleAdjustment:(bool)arg3;
- (id)_positionToolbarButtons:(id)arg1 ignoringItem:(id)arg2 resetFontScaleAdjustment:(bool)arg3 actuallyRepositionButtons:(bool)arg4;
- (id)_repositionedItemsFromItems:(id)arg1 withBarButtonFrames:(id*)arg2 withHitRects:(id*)arg3 buttonIndexes:(id*)arg4 textButtonIndexes:(id*)arg5;
- (void)_sendAction:(id)arg1 withEvent:(id)arg2;
- (void)_setAdaptiveToolbarDisabled:(bool)arg1;
- (void)_setBackdropViewLayerGroupName:(id)arg1;
- (void)_setBackgroundImage:(id)arg1 mini:(id)arg2;
- (void)_setBackgroundView:(id)arg1;
- (void)_setBarPosition:(long long)arg1;
- (void)_setButtonBackgroundImage:(id)arg1 mini:(id)arg2 forStates:(unsigned long long)arg3;
- (void)_setForceTopBarAppearance:(bool)arg1;
- (void)_setHidesShadow:(bool)arg1;
- (void)_setLocked:(bool)arg1;
- (void)_setNeedsBackgroundViewUpdate;
- (void)_setShadowView:(id)arg1;
- (void)_setVisualAltitude:(double)arg1;
- (void)_setVisualAltitudeBias:(struct CGSize { double x1; double x2; })arg1;
- (void)_setWantsLetterpressContent:(bool)arg1;
- (id)_shadowView;
- (bool)_subclassImplementsDrawRect;
- (void)_updateBackgroundView;
- (void)_updateBarForStyle;
- (void)_updateItemsForNewFrame:(id)arg1;
- (void)_updateOpacity;
- (bool)_wantsLetterpressContent;
- (void)addConstraint:(id)arg1;
- (void)animateToolbarItemIndex:(unsigned long long)arg1 duration:(double)arg2 target:(id)arg3 didFinishSelector:(SEL)arg4;
- (void)animateWithDuration:(float)arg1 forButton:(int)arg2;
- (void)backdropView:(id)arg1 didChangeToGraphicsQuality:(long long)arg2;
- (id)backgroundImageForToolbarPosition:(long long)arg1 barMetrics:(long long)arg2;
- (long long)barPosition;
- (long long)barStyle;
- (id)barTintColor;
- (id)buttonItems;
- (bool)centerTextButtons;
- (id)createButtonWithDescription:(id)arg1;
- (int)currentButtonGroup;
- (struct CGSize { double x1; double x2; })defaultSizeForOrientation:(long long)arg1;
- (id)delegate;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)extraEdgeInsets;
- (void)getVisibleButtonTags:(int*)arg1 count:(unsigned int*)arg2 maxItems:(unsigned int)arg3;
- (id)initInView:(id)arg1 withFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withItemList:(id)arg3;
- (id)initInView:(id)arg1 withItemList:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;
- (bool)isMinibar;
- (bool)isTranslucent;
- (id)items;
- (void)layoutSubviews;
- (int)mode;
- (bool)onStateForButton:(int)arg1;
- (void)positionButtons:(id)arg1 tags:(int*)arg2 count:(int)arg3 group:(int)arg4;
- (void)registerButtonGroup:(int)arg1 withButtons:(int*)arg2 withCount:(int)arg3;
- (void)removeConstraint:(id)arg1;
- (void)setBackgroundImage:(id)arg1 forToolbarPosition:(long long)arg2 barMetrics:(long long)arg3;
- (void)setBadgeAnimated:(bool)arg1 forButton:(int)arg2;
- (void)setBadgeGlyph:(id)arg1 forButton:(int)arg2;
- (void)setBadgeValue:(id)arg1 forButton:(int)arg2;
- (void)setBarStyle:(long long)arg1;
- (void)setBarTintColor:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setButtonBarTrackingMode:(int)arg1;
- (void)setButtonItems:(id)arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCenterTextButtons:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExtraEdgeInsets:(double)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setItems:(id)arg1;
- (void)setItems:(id)arg1 animated:(bool)arg2;
- (void)setMode:(int)arg1;
- (void)setOnStateForButton:(bool)arg1 forButton:(int)arg2;
- (void)setShadowImage:(id)arg1 forToolbarPosition:(long long)arg2;
- (void)setTintColor:(id)arg1;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(bool)arg1;
- (void)setTranslucent:(bool)arg1;
- (id)shadowImageForToolbarPosition:(long long)arg1;
- (void)showButtonGroup:(int)arg1 withDuration:(double)arg2;
- (void)showButtons:(int*)arg1 withCount:(int)arg2 withDuration:(double)arg3;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

// Image: /System/Library/Frameworks/QuickLook.framework/QuickLook

- (id)configuration;
- (void)configureTransparent;
- (void)configureWithConfiguration:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (id)hk_doneButtonToolbarWithWidth:(double)arg1 target:(id)arg2 action:(SEL)arg3;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;

@end