#include "DistanceEstimator.h"
#include <math.h>

DistanceEstimator::DistanceEstimator()
    : filter(0.125, 32, 1023, 0) {}

float DistanceEstimator::estimateMeters(int rssi) {
    // Path-loss model (approximate)
    float rawDistance = pow(32.8f, (-rssi - 59) / (32.8f * 6.6f));
    float filtered = filter.getFilteredValue(rawDistance);
    return filtered;
}
