#include "config.h"
#include "bluetooth/BluetoothManager.h"
#include "distance/DistanceEstimator.h"
#include "audio/AudioPlayer.h"
#include "actuators/LedController.h"

BluetoothManager bluetooth;
DistanceEstimator distanceEstimator;
AudioPlayer audio;
LedController led(LED_PIN);

void setup() {
    Serial.begin(115200);

    bluetooth.begin();
    audio.begin();
    led.begin();
}

void loop() {
    if (!bluetooth.isConnected()) return;

    int rssi = bluetooth.getRSSI();
    float distance = distanceEstimator.estimateMeters(rssi);

    if (distance > DISTANCE_THRESHOLD_M) {
        led.on();
        audio.playAlert();
    } else {
        led.off();
    }

    bluetooth.sendStatus(distance, rssi);

    if (bluetooth.available()) {
        char cmd = bluetooth.read();
        if (cmd == 'a') led.on();
        if (cmd == 'b') led.off();
    }

    delay(500);
}
