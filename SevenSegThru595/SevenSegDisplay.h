#define SevenSegDisplay_h

class SevenSegDisplay
{
	SevenSegDisplay& operator++()
	{
		value++;

		return *this;
	}
	SevenSegDisplay operator++(int)
	{
		value++;

		return *this;
	}


	public:
		static const int DECIMAL = 0;
		static const int LEFT_TOP = 1;
		static const int MIDDLE = 2;
		static const int LEFT_BOTTOM = 3;
		static const int BOTTOM = 4;
		static const int TOP = 5;
		static const int RIGHT_TOP = 6;
		static const int RIGHT_BOTTOM = 7;

		SevenSegDisplay();
		SevenSegDisplay(int dataPin, int latchPin, int clockPin);

		void set(int number);

		void zero();
		void one();
		void two();
		void three();
		void four();
		void five();
		void six();
		void seven();
		void eight();
		void nine();
		
		void a();
		void b();
		void c();
		void d();
		void e();
		void f();

		int getValue();
	private:
		int value;

		int dataPin;
		int latchPin;
		int clockPin;

		void error();
		void setup();
		void clear();
};