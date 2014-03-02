// Faye Williams
// 29 September 2005
// IOmanipulators.cpp

//*********************************************************
//IO manipulators
//*********************************************************

#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main()
{
	cout << "\nIO manipulators that modify the ostream object (ie affect all ops with object)\n" << endl;
	cout << "boolalpha\toutput \"true\" or \"false\"" << endl;
	cout << "dec\t\tint base 10 (default)" << endl;
	cout << "hex\t\tint base 16" << endl;
	cout << "oct\t\tint base 8" << endl;
	cout << "left\t\ttext left justified" << endl;
	cout << "right\t\ttext right justified" << endl;
	cout << "internal\tnumeric sign on left, value on right" << endl;
	cout << "noshowbase\thide base prefix (default)" << endl;
	cout << "showbase\tdisplay base prefix" << endl;
	cout << "noshowpoint\tdisplay decimal when required (default)" << endl;
	cout << "showpoint\talways display decimal" << endl;
	cout << "noshowpos\thide +num prefix " << endl;
	cout << "showpos\t\tdisplay +num prefix" << endl;
	cout << "skipws\t\tskip whitespace" << endl;
	cout << "noskipws\tdon't skip white space" << endl;
	cout << "fixed\t\tfloating point numbers in fixed notation (default)" << endl;
	cout << "scientific\tfloating point numbers in scientific notation" << endl;
	cout << "nouppercase\t0x and e (default)" << endl;
	cout << "uppercase\t0X and E" << endl << endl;
	
	cout << "IO manipulators that format a single instance of the output\n" << endl;
	cout << "setw(w)\t\tset output width, requires <iomanip>" << endl;
	cout << "width(w)\tset output width using <iostream>" << endl;
	cout << "setfill(ch)\tfill whitespace with ch, requires <iomanip>" << endl;
	cout << "fill(ch)\tfill whitespace with ch using <iostream>" << endl;
	cout << "setprecision(n)\tset floating point display precision, requires <iomanip>" << endl << endl;
	
	//examples of use:
	string str("IO manipulators");
	double smallnum = 1.123456789;
	int num = 15;
	bool flag = true;
	
	//iomanip
	cout << setw(40) << setfill('-') << str << endl; //iomanip
	
	//iostream
	cout.width(40); 
	cout.fill('-');
	cout << str << endl << endl;
	
	cout << num << endl;
	cout << smallnum << endl;
	cout << setprecision(10) << smallnum << endl;
	cout << hex << showbase << num << endl;
	cout << oct << num << endl;
	cout << showpos << num << endl;
	cout << boolalpha << flag << endl << endl;
	
	system("pause");	
	
	return 0;
}
