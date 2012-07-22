#include <SevenSegThru595.h>

SevenSegThru595::SevenSegThru595()
{
    
}

SevenSegThru595::SevenSegThru595(int dataPin, int clockPin, int latchPin)
{
/*
	this->dataPin = dataPin;
	this->clockPin = clockPin;
	this->latchPin = latchPin;
	
	//	Setup pin outputs
	setup();
	//	Clear the display
	clear();
*/
}

SevenSegThru595::setup()
{
/*
	//  set pins to output because they are addressed in the main loop
	pinMode(latchPin, OUTPUT);
	pinMode(clockPin, OUTPUT);
	pinMode(dataPin, OUTPUT);
*/
}

SevenSegThru595::clear()
{
/*
	byte bitsToSend = 0;
	
	digitalWrite(latchPin, LOW);
	
	bitWrite(bitsToSend, 0, LOW);
	bitWrite(bitsToSend, 1, LOW);
	bitWrite(bitsToSend, 2, LOW);
	bitWrite(bitsToSend, 3, LOW);
	bitWrite(bitsToSend, 4, LOW);
	bitWrite(bitsToSend, 5, LOW);
	bitWrite(bitsToSend, 6, LOW);
	bitWrite(bitsToSend, 7, LOW);
   
	shiftOut(dataPin, clockPin, MSBFIRST, bitsToSend);
	digitalWrite(latchPin, HIGH);
	*/
}
