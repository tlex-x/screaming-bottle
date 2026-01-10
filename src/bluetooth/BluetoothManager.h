#pragma once
#include <BluetoothSerial.h>

class BluetoothManager {
public:
    void begin();
    bool isConnected() const;

    bool available();
    char read();

    int getRSSI() const;
    void sendStatus(float distance, int rssi);

private:
    static void gapCallback(
        esp_bt_gap_cb_event_t event,
        esp_bt_gap_cb_param_t* param
    );

    static int lastRSSI;
    BluetoothSerial bt;
};
