#include "SevenSegDisplay.h"
#include <Arduino.h>

SevenSegDisplay::SevenSegDisplay()
{

}

SevenSegDisplay::SevenSegDisplay(int dataPin, int latchPin, int clockPin)
{
	this->clockPin = clockPin;
	this->dataPin = dataPin;
	this->latchPin = latchPin;

	this->value = 0;

	setup();

	clear();
}

int SevenSegDisplay::getValue()
{
	return this->value;
}

void SevenSegDisplay::setup()
{
	pinMode(clockPin, OUTPUT);
	pinMode(latchPin, OUTPUT);
	pinMode(dataPin, OUTPUT);
}

void SevenSegDisplay::set(int number)
{
	switch (number)
	{
		case 0: zero();		break;
		case 1: one();		break;
		case 2: two();		break;
		case 3: three();	break;
		case 4: four();		break;
		case 5: five();		break;
		case 6: six();		break;
		case 7: seven();	break;
		case 8: eight();	break;
		case 9: nine();		break;
		case 10: a();		break;
		case 11: b();		break;
		case 12: c();		break;
		case 13: d();		break;
		case 14: e();		break;
		case 15: f();		break;
		default: error();	break;
	}
}

void SevenSegDisplay::error()
{
	e();
}

void SevenSegDisplay::clear()
{
	byte bitsToSend;

	digitalWrite(latchPin, LOW);

	bitWrite(bitsToSend, DECIMAL, LOW); 
	bitWrite(bitsToSend, TOP, LOW); 
	bitWrite(bitsToSend, MIDDLE, LOW); 
	bitWrite(bitsToSend, BOTTOM, LOW); 
	bitWrite(bitsToSend, LEFT_TOP, LOW); 
	bitWrite(bitsToSend, LEFT_BOTTOM, LOW); 
	bitWrite(bitsToSend, RIGHT_TOP, LOW); 
	bitWrite(bitsToSend, RIGHT_BOTTOM, LOW); 
	
	shiftOut(dataPin, clockPin, MSBFIRST, bitsToSend);

	digitalWrite(latchPin, HIGH);
}

void SevenSegDisplay::zero()
{
	byte bitsToSend;

	digitalWrite(latchPin, LOW);

	bitWrite(bitsToSend, DECIMAL, LOW); 
	bitWrite(bitsToSend, TOP, HIGH); 
	bitWrite(bitsToSend, MIDDLE, LOW); 
	bitWrite(bitsToSend, BOTTOM, HIGH); 
	bitWrite(bitsToSend, LEFT_TOP, HIGH); 
	bitWrite(bitsToSend, LEFT_BOTTOM, HIGH); 
	bitWrite(bitsToSend, RIGHT_TOP, HIGH); 
	bitWrite(bitsToSend, RIGHT_BOTTOM, HIGH); 
	
	shiftOut(dataPin, clockPin, MSBFIRST, bitsToSend);

	digitalWrite(latchPin, HIGH);
}

void SevenSegDisplay::one()
{
	byte bitsToSend;

	digitalWrite(latchPin, LOW);

	bitWrite(bitsToSend, DECIMAL, LOW); 
	bitWrite(bitsToSend, TOP, LOW); 
	bitWrite(bitsToSend, MIDDLE, LOW); 
	bitWrite(bitsToSend, BOTTOM, LOW); 
	bitWrite(bitsToSend, LEFT_TOP, LOW); 
	bitWrite(bitsToSend, LEFT_BOTTOM, LOW); 
	bitWrite(bitsToSend, RIGHT_TOP, HIGH); 
	bitWrite(bitsToSend, RIGHT_BOTTOM, HIGH); 
	
	shiftOut(dataPin, clockPin, MSBFIRST, bitsToSend);

	digitalWrite(latchPin, HIGH);
}

void SevenSegDisplay::two()
{
	byte bitsToSend;

	digitalWrite(latchPin, LOW);

	bitWrite(bitsToSend, DECIMAL, LOW); 
	bitWrite(bitsToSend, TOP, HIGH); 
	bitWrite(bitsToSend, MIDDLE, HIGH); 
	bitWrite(bitsToSend, BOTTOM, HIGH); 
	bitWrite(bitsToSend, LEFT_TOP, LOW); 
	bitWrite(bitsToSend, LEFT_BOTTOM, HIGH); 
	bitWrite(bitsToSend, RIGHT_TOP, HIGH); 
	bitWrite(bitsToSend, RIGHT_BOTTOM, LOW); 
	
	shiftOut(dataPin, clockPin, MSBFIRST, bitsToSend);

	digitalWrite(latchPin, HIGH);
}

void SevenSegDisplay::three()
{
	byte bitsToSend;

	digitalWrite(latchPin, LOW);

	bitWrite(bitsToSend, DECIMAL, LOW); 
	bitWrite(bitsToSend, TOP, HIGH); 
	bitWrite(bitsToSend, MIDDLE, HIGH); 
	bitWrite(bitsToSend, BOTTOM, HIGH); 
	bitWrite(bitsToSend, LEFT_TOP, LOW); 
	bitWrite(bitsToSend, LEFT_BOTTOM, LOW); 
	bitWrite(bitsToSend, RIGHT_TOP, HIGH); 
	bitWrite(bitsToSend, RIGHT_BOTTOM, HIGH); 
	
	shiftOut(dataPin, clockPin, MSBFIRST, bitsToSend);

	digitalWrite(latchPin, HIGH);
}

void SevenSegDisplay::four()
{
	byte bitsToSend;

	digitalWrite(latchPin, LOW);

	bitWrite(bitsToSend, DECIMAL, LOW); 
	bitWrite(bitsToSend, TOP, LOW); 
	bitWrite(bitsToSend, MIDDLE, HIGH); 
	bitWrite(bitsToSend, BOTTOM, LOW); 
	bitWrite(bitsToSend, LEFT_TOP, HIGH); 
	bitWrite(bitsToSend, LEFT_BOTTOM, LOW); 
	bitWrite(bitsToSend, RIGHT_TOP, HIGH); 
	bitWrite(bitsToSend, RIGHT_BOTTOM, HIGH); 
	
	shiftOut(dataPin, clockPin, MSBFIRST, bitsToSend);

	digitalWrite(latchPin, HIGH);
}

void SevenSegDisplay::five()
{
	byte bitsToSend;

	digitalWrite(latchPin, LOW);

	bitWrite(bitsToSend, DECIMAL, LOW); 
	bitWrite(bitsToSend, TOP, HIGH); 
	bitWrite(bitsToSend, MIDDLE, HIGH); 
	bitWrite(bitsToSend, BOTTOM, HIGH); 
	bitWrite(bitsToSend, LEFT_TOP, HIGH); 
	bitWrite(bitsToSend, LEFT_BOTTOM, LOW); 
	bitWrite(bitsToSend, RIGHT_TOP, LOW); 
	bitWrite(bitsToSend, RIGHT_BOTTOM, HIGH); 
	
	shiftOut(dataPin, clockPin, MSBFIRST, bitsToSend);

	digitalWrite(latchPin, HIGH);
}

void SevenSegDisplay::six()
{
	byte bitsToSend;

	digitalWrite(latchPin, LOW);

	bitWrite(bitsToSend, DECIMAL, LOW); 
	bitWrite(bitsToSend, TOP, HIGH); 
	bitWrite(bitsToSend, MIDDLE, HIGH); 
	bitWrite(bitsToSend, BOTTOM, HIGH); 
	bitWrite(bitsToSend, LEFT_TOP, HIGH); 
	bitWrite(bitsToSend, LEFT_BOTTOM, HIGH); 
	bitWrite(bitsToSend, RIGHT_TOP, LOW); 
	bitWrite(bitsToSend, RIGHT_BOTTOM, HIGH); 
	
	shiftOut(dataPin, clockPin, MSBFIRST, bitsToSend);

	digitalWrite(latchPin, HIGH);
}

void SevenSegDisplay::seven()
{
	byte bitsToSend;

	digitalWrite(latchPin, LOW);

	bitWrite(bitsToSend, DECIMAL, LOW); 
	bitWrite(bitsToSend, TOP, HIGH); 
	bitWrite(bitsToSend, MIDDLE, LOW); 
	bitWrite(bitsToSend, BOTTOM, LOW); 
	bitWrite(bitsToSend, LEFT_TOP, LOW); 
	bitWrite(bitsToSend, LEFT_BOTTOM, LOW); 
	bitWrite(bitsToSend, RIGHT_TOP, HIGH); 
	bitWrite(bitsToSend, RIGHT_BOTTOM, HIGH); 
	
	shiftOut(dataPin, clockPin, MSBFIRST, bitsToSend);

	digitalWrite(latchPin, HIGH);
}

void SevenSegDisplay::eight()
{
	byte bitsToSend;

	digitalWrite(latchPin, LOW);

	bitWrite(bitsToSend, DECIMAL, LOW); 
	bitWrite(bitsToSend, TOP, HIGH); 
	bitWrite(bitsToSend, MIDDLE, HIGH); 
	bitWrite(bitsToSend, BOTTOM, HIGH); 
	bitWrite(bitsToSend, LEFT_TOP, HIGH); 
	bitWrite(bitsToSend, LEFT_BOTTOM, HIGH); 
	bitWrite(bitsToSend, RIGHT_TOP, HIGH); 
	bitWrite(bitsToSend, RIGHT_BOTTOM, HIGH); 
	
	shiftOut(dataPin, clockPin, MSBFIRST, bitsToSend);

	digitalWrite(latchPin, HIGH);
}

void SevenSegDisplay::nine()
{
	byte bitsToSend;

	digitalWrite(latchPin, LOW);

	bitWrite(bitsToSend, DECIMAL, LOW); 
	bitWrite(bitsToSend, TOP, HIGH); 
	bitWrite(bitsToSend, MIDDLE, HIGH); 
	bitWrite(bitsToSend, BOTTOM, HIGH); 
	bitWrite(bitsToSend, LEFT_TOP, HIGH); 
	bitWrite(bitsToSend, LEFT_BOTTOM, LOW); 
	bitWrite(bitsToSend, RIGHT_TOP, HIGH); 
	bitWrite(bitsToSend, RIGHT_BOTTOM, HIGH); 
	
	shiftOut(dataPin, clockPin, MSBFIRST, bitsToSend);

	digitalWrite(latchPin, HIGH);
}

void SevenSegDisplay::a()
{
	byte bitsToSend;

	digitalWrite(latchPin, LOW);

	bitWrite(bitsToSend, DECIMAL, LOW); 
	bitWrite(bitsToSend, TOP, HIGH); 
	bitWrite(bitsToSend, MIDDLE, HIGH); 
	bitWrite(bitsToSend, BOTTOM, LOW); 
	bitWrite(bitsToSend, LEFT_TOP, HIGH); 
	bitWrite(bitsToSend, LEFT_BOTTOM, HIGH); 
	bitWrite(bitsToSend, RIGHT_TOP, HIGH); 
	bitWrite(bitsToSend, RIGHT_BOTTOM, HIGH); 
	
	shiftOut(dataPin, clockPin, MSBFIRST, bitsToSend);

	digitalWrite(latchPin, HIGH);
}

void SevenSegDisplay::b()
{
	byte bitsToSend;

	digitalWrite(latchPin, LOW);

	bitWrite(bitsToSend, DECIMAL, LOW); 
	bitWrite(bitsToSend, TOP, LOW); 
	bitWrite(bitsToSend, MIDDLE, HIGH); 
	bitWrite(bitsToSend, BOTTOM, HIGH); 
	bitWrite(bitsToSend, LEFT_TOP, HIGH); 
	bitWrite(bitsToSend, LEFT_BOTTOM, HIGH); 
	bitWrite(bitsToSend, RIGHT_TOP, LOW); 
	bitWrite(bitsToSend, RIGHT_BOTTOM, HIGH); 
	
	shiftOut(dataPin, clockPin, MSBFIRST, bitsToSend);

	digitalWrite(latchPin, HIGH);
}

void SevenSegDisplay::c()
{
	byte bitsToSend;

	digitalWrite(latchPin, LOW);

	bitWrite(bitsToSend, DECIMAL, LOW); 
	bitWrite(bitsToSend, TOP, HIGH); 
	bitWrite(bitsToSend, MIDDLE, LOW); 
	bitWrite(bitsToSend, BOTTOM, HIGH); 
	bitWrite(bitsToSend, LEFT_TOP, HIGH); 
	bitWrite(bitsToSend, LEFT_BOTTOM, HIGH); 
	bitWrite(bitsToSend, RIGHT_TOP, LOW); 
	bitWrite(bitsToSend, RIGHT_BOTTOM, LOW); 
	
	shiftOut(dataPin, clockPin, MSBFIRST, bitsToSend);

	digitalWrite(latchPin, HIGH);
}

void SevenSegDisplay::d()
{
	byte bitsToSend;

	digitalWrite(latchPin, LOW);

	bitWrite(bitsToSend, DECIMAL, LOW); 
	bitWrite(bitsToSend, TOP, LOW); 
	bitWrite(bitsToSend, MIDDLE, HIGH); 
	bitWrite(bitsToSend, BOTTOM, HIGH); 
	bitWrite(bitsToSend, LEFT_TOP, LOW); 
	bitWrite(bitsToSend, LEFT_BOTTOM, HIGH); 
	bitWrite(bitsToSend, RIGHT_TOP, HIGH); 
	bitWrite(bitsToSend, RIGHT_BOTTOM, HIGH); 
	
	shiftOut(dataPin, clockPin, MSBFIRST, bitsToSend);

	digitalWrite(latchPin, HIGH);
}

void SevenSegDisplay::e()
{
	byte bitsToSend;

	digitalWrite(latchPin, LOW);

	bitWrite(bitsToSend, DECIMAL, LOW); 
	bitWrite(bitsToSend, TOP, HIGH); 
	bitWrite(bitsToSend, MIDDLE, HIGH); 
	bitWrite(bitsToSend, BOTTOM, HIGH); 
	bitWrite(bitsToSend, LEFT_TOP, HIGH); 
	bitWrite(bitsToSend, LEFT_BOTTOM, HIGH); 
	bitWrite(bitsToSend, RIGHT_TOP, LOW); 
	bitWrite(bitsToSend, RIGHT_BOTTOM, LOW); 
	
	shiftOut(dataPin, clockPin, MSBFIRST, bitsToSend);

	digitalWrite(latchPin, HIGH);
}


void SevenSegDisplay::f()
{
	byte bitsToSend;

	digitalWrite(latchPin, LOW);

	bitWrite(bitsToSend, DECIMAL, LOW); 
	bitWrite(bitsToSend, TOP, HIGH); 
	bitWrite(bitsToSend, MIDDLE, HIGH); 
	bitWrite(bitsToSend, BOTTOM, LOW); 
	bitWrite(bitsToSend, LEFT_TOP, HIGH); 
	bitWrite(bitsToSend, LEFT_BOTTOM, HIGH); 
	bitWrite(bitsToSend, RIGHT_TOP, LOW); 
	bitWrite(bitsToSend, RIGHT_BOTTOM, LOW); 
	
	shiftOut(dataPin, clockPin, MSBFIRST, bitsToSend);

	digitalWrite(latchPin, HIGH);
}