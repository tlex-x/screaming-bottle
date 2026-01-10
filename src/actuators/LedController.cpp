#include "LedController.h"
#include <Arduino.h>

LedController::LedController(int pin) : pin(pin) {}

void LedController::begin() {
    pinMode(pin, OUTPUT);
    off();
}

void LedController::on() {
    digitalWrite(pin, HIGH);
}

void LedController::off() {
    digitalWrite(pin, LOW);
}
