#include "AudioPlayer.h"
#include "../config.h"

void AudioPlayer::begin() {
    serial.begin(9600, SERIAL_8N1, DFPLAYER_RX, DFPLAYER_TX);
    player.begin(serial);
    player.volume(AUDIO_VOLUME);
}

void AudioPlayer::playAlert() {
    player.play(1);  // MP3 file 0001.mp3
}
