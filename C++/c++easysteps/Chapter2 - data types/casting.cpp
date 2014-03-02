// Faye Williams
// 19 September 2005
// casting.cpp

//*********************************************************
//notes on casting
//*********************************************************

#include <iostream>

using namespace std;

int main()
{	
	//IMPORTANT - this only initialises the LAST number in the list:
	int num1, num2, num3 = 0;
	
	cout << "\nnum1: " << num1 << endl;
	cout << "num2: " << num2 << endl;
	cout << "num3: " << num3 << endl;
	
	//need to explicitly initialise all of them
	int num4 = 0, num5 = 0, num6 = 0;
	
	cout << "num4: " << num4 << endl;
	cout << "num5: " << num5 << endl;
	cout << "num6: " << num6 << endl;
	
	double precise = 123.987654;
	char letter = 'a';
	bool tf = true;
	
	num4 = (int)precise;
	num5 = (int)letter;
	num6 = (int)tf;
	
	cout << "precise: " << num4 << endl; //note that floating points are TRUNCATED, not ROUNDED in any way
	cout << "letter: " << num5 << endl;	//outputs ascii char
	cout << "tf: " << num6 << endl << endl; //true is any non-zero value (usually 1)
	
	system("pause");

	return 0;
}
