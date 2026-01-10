#include "BluetoothManager.h"
#include "../config.h"
#include "esp_gap_bt_api.h"

int BluetoothManager::lastRSSI = -100;

void BluetoothManager::begin() {
    bt.begin(BT_DEVICE_NAME);
    bt.setPin(BT_PIN);

    esp_bt_gap_register_callback(gapCallback);
}

bool BluetoothManager::isConnected() const {
    return bt.hasClient();
}

bool BluetoothManager::available() {
    return bt.available();
}

char BluetoothManager::read() {
    return bt.read();
}

int BluetoothManager::getRSSI() const {
    return lastRSSI;
}

void BluetoothManager::sendStatus(float distance, int rssi) {
    bt.printf("RSSI: %d | Distance: %.2f m\n", rssi, distance);
}

void BluetoothManager::gapCallback(
    esp_bt_gap_cb_event_t event,
    esp_bt_gap_cb_param_t* param
) {
    if (event == ESP_BT_GAP_READ_RSSI_DELTA_EVT) {
        lastRSSI = param->read_rssi_delta.rssi_delta;
    }
}
