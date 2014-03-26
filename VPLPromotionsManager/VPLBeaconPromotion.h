#import "VPLPromotion.h"
#import <CoreLocation/CoreLocation.h>

@interface VPLBeaconPromotion : VPLPromotion

@property (nonatomic, strong) CLBeaconRegion *beaconRegion;

@property (nonatomic, assign) CLProximity maximumProximity;

@property (nonatomic, assign) NSInteger repeatInterval;

- (instancetype)initWithBeaconRegion:(CLBeaconRegion *)beaconRegion
                withMaximiumProximity:(CLProximity)proximity
                      repeatInterval:(NSInteger)repeatInterval
                            startDate:(NSDate *)startDate
                              endDate:(NSDate *)endDate
              showOnceUserDefaultsKey:(NSString *)userDefaultsKey
                               action:(VPLPromotionAction)action;

@end