#include "DistanceEstimator.h"
#include <math.h>

DistanceEstimator::DistanceEstimator()
    : filter(0.125, 32, 1023, 0) {}

float DistanceEstimator::estimateMeters(int rssi) {
    // Path-loss model (approximate)
    float rawDistance = pow(10.0f, (-rssi - 59) / (10.0f * 2.0f));
    float filtered = filter.getFilteredValue(rawDistance);
    return filtered;
}
