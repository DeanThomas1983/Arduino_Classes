#define SevenSegThru595_h

class SevenSegThru595
{
	public:
		SevenSegThru595();
		SevenSegThru595(int dataPin, int clockPin, int latchPin);
		clear();
		
	private:
		int dataPin;
		int latchPin;
		int clockPin;
		
		void setup();
}
