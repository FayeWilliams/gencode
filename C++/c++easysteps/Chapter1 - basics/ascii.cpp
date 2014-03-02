// Faye Williams
// 18 September 2005
// ascii.cpp


//************************************************************
//this program displays the escape sequences available in C++
//and their corresponding ascii numbers
//remember that numbers start at 48, A starts at 65 and a starts at 97
//the null terminator was adopted as the string terminator by the C language
//and made it possible to define strings of infinite length
//************************************************************

#include<iostream>

using namespace std;

int main()
{
	cout << "\nEscape Sequences:\n\n";
	
	cout << "\\0\tnull terminator\tascii 0" << endl;
	cout << "\\a\taudible alert\tascii 7" << endl;
	cout << "\\b\tbackspace\tascii 8" << endl;
	cout << "\\t\thorizontal tab\tascii 9" << endl;
	cout << "\\n\tnewline\t\tascii 10" << endl;
	cout << "\\v\tvertical tab\tascii 11" << endl;
	cout << "\\f\tform feed\tascii 12" << endl;
	cout << "\\r\tcarriage return\tascii 13" << endl;
	cout << "\\\"\tdouble quote\tascii 34" << endl;
	cout << "\\'\tsingle quote\tascii 39" << endl;
	cout << "\\?\tquestion mark\tascii 63" << endl;
	cout << "\\\\\tbackslash\tascii 92\n" << endl;
	
	cout << "\\000\toctal number" << endl;
	cout << "\\xhh\thex number\n" << endl;
	
	cout << "\tNumber 0 ascii 48" << endl;
	cout << "\tLetter A ascii 65" << endl;
	cout << "\tLetter a ascii 97\n" << endl;
	
	cout << "\\\tPreprocessor line continuation, must be followed by a newline\n" << endl;

	cout << "An example of using ascii in a char array:\n" << endl;
	
	//this string will display the ascii chars for each number
	//in this case 0Aa
	char cstring1[4] = {48, 65, 97, 0};
	
	//this string will display faye correctly as the backspace 
	//moves the cursor back one before the next output
	//overwriting the b with the y
	char cstring2[7] = {'f', 'a', 'b', 8, 'y', 'e', 0};
	
	//normal string
	char cstring3[4] = {'b', 'o', 'o', 0};
	
	//this shows the formfeed. On windows this just outputs a symbol, and does nothing useful
	char formfeed[2] = {12, 0};
	
	//this shows the carriage return. On windows this returns the cursor to the start
	//of the line, thus overwriting anything that was there originally 
	//(below shows two boo's and no "cr:")
	char cr[2] = {13, 0};
	
	cout << "cstring1:\t" << cstring1 << endl;
	cout << "cstring2:\t" << cstring2 << endl;
	cout << "ff:\t\t" << cstring3 << formfeed << cstring3 << endl;
	cout << "cr:\t\t" << cstring3 << cr << cstring3 << endl << endl;
	
	system("pause");

	return 0;
}
