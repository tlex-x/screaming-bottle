#pragma once

class LedController {
public:
    explicit LedController(int pin);
    void begin();
    void on();
    void off();

private:
    int pin;
};
