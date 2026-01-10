# screaming-bottle

**Features:** Connect via Bluetooth. When you are 5 meters away, the speaker will sound and turn on to signal and indicate your location. You can move closer to retrieve the item and then turn it off. If you move more than 15 meters (outside the connection range), the sound and light will automatically turn off.

**Structure:**

src/

├── main.ino              

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


**Lesson:**
- Hands-on, start-to-finish process of research components to satisfy target features, assembling hardware (lots of soldering), accepting "if it miraculously work, don't touch it."
- File formats for embedded coding projects: A .h file declares interfaces (functions, classes, constants), while .cpp files implement the actual logic.
- Start from high-level logic (what is the logic order for features), then modify codes. 
- Repo structure for embedded coding projs (src, docs, etc.)
