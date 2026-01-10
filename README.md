# screaming-bottle

Features: Connect via Bluetooth. When you are 5 meters away, the speaker will sound and turn on to signal and indicate your location. You can move closer to retrieve the item and then turn it off. If you move more than 15 meters (outside the connection range), the sound and light will automatically turn off.

**Structure:**

src/

├── main.ino                  ← entry point (very thin)

├── config.h                  ← pins, constants, thresholds

│

├── bluetooth/

│   ├── BluetoothManager.h

│   ├── BluetoothManager.cpp

│

├── distance/

│   ├── DistanceEstimator.h

│   ├── DistanceEstimator.cpp

│

├── audio/

│   ├── AudioPlayer.h

│   ├── AudioPlayer.cpp

│

├── actuators/

│   ├── LedController.h

│   ├── LedController.cpp

