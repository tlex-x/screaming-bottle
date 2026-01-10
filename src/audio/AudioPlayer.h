#pragma once
#include <DFRobotDFPlayerMini.h>
#include <HardwareSerial.h>

class AudioPlayer {
public:
    void begin();
    void playAlert();

private:
    HardwareSerial serial{2};
    DFRobotDFPlayerMini player;
};
