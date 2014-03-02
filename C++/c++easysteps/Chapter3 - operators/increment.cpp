// Faye Williams
// 23 September 2005
// increment.cpp

//*********************************************************
//shows post and prefix operators
//*********************************************************

#include<iostream>

using namespace std;

int main()
{
	int a = 1;
	int b = 1;
	
	cout << "Value of a: " << a++ << endl;
	cout << "Value of a: " << a << endl;

	cout << "Value of b: " << ++b << endl;
	cout << "Value of b: " << b << endl;

	system("pause");	

	return 0;
}
