#pragma once
#include <Kalman.h>

class DistanceEstimator {
public:
    DistanceEstimator();

    float estimateMeters(int rssi);

private:
    Kalman filter;
};
