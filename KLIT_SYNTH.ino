/*
 * Developped by Caroline Buttet (carolinebuttet@gmail.com) for Klitosiris
 * A series of sex toys that are used as MIDI controllers
 * With the Control Surface library: https://github.com/tttapa/Control-Surface
 */

// Include the Control Surface library
#include <Control_Surface.h> 

// Instantiate a MIDI over USB interface.
USBMIDI_Interface midi;

//Instantiate all the instruments: 
//
///////////// Plug 1
NoteButton plug1 {
  10,                             // Push button on pin 10
  {MIDI_Notes::C(1), CHANNEL_1},  // Note C1 on MIDI channel 1
};

///////////// Plug 2
NoteButton plug2 {
  9,                              // Push button on pin 9
  {MIDI_Notes::C(2), CHANNEL_1},  // Note C2 on MIDI channel 1
};

///////////// Plug 3
NoteButton plug3 {
  8,                              // Push button on pin 8
  {MIDI_Notes::C(5), CHANNEL_1},  // Note C5 on MIDI channel 1
};

///////////// Boompad 1
NoteButton boompad1 {
  13,                             // Push button on pin 13
  {MIDI_Notes::C(3), CHANNEL_1},  // Note C3 on MIDI channel 1
};

///////////// Boompad 2
NoteButton boompad2 {
  16,                             // Push button on pin 16
  {MIDI_Notes::D(3), CHANNEL_1},  // Note D3 on MIDI channel 1
};

///////////// Boompad 3
NoteButton boompad3 {
  12,                             // Push button on pin 12
  {MIDI_Notes::E(3), CHANNEL_1},  // Note E3 on MIDI channel 1
};

CCPotentiometer potentiometers[] {
  {A4,        // Sonde on pin analog 4
   0x10},     // Send control event 0x10
};

void setup() {
  Control_Surface.begin(); // Initialize Control Surface
}

void loop() {
  // Everything is done automatically!
  Control_Surface.loop(); // Update the Control Surface  
}
