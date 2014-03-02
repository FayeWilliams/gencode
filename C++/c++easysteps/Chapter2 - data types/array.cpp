// Faye Williams
// 17 September 2005
// array.cpp

//*********************************************************
//shows use of arrays, numeric, char and multi-dimensional
//plus initialisation of arrays
//*********************************************************

#include<iostream>

using namespace std;

int main()
{
	int arr[3] = { 100, 200, 300 };
	
	cout << "single dimention int array:" << endl;

	cout << "arr[0] is: " << arr[0] << endl;
	cout << "arr[1] is: " << arr[1] << endl;
	cout << "arr[2] is: " << arr[2] << endl << endl;

	int multi[2][2] = { {6,6}, {2,2} };

	cout << "multi-dimension array:" << endl;
	cout << "int multi[2][2] = { {6,6} {2,2} };" << endl;
	cout << "multi[0][0] is: " << multi[0][0] << endl;
	cout << "multi[0][1] is: " << multi[0][1] << endl;
	cout << "multi[1][0] is: " << multi[1][0] << endl;
	cout << "multi[1][1] is: " << multi[1][1] << endl << endl;


	char str[3] = {0};
	cout << "char array initialised with {0}:" << endl;
	cout << "str[0] is: " << str[0] << endl;
	cout << "str[1] is: " << str[1] << endl;
	cout << "str[2] is: " << str[2] << endl << endl;

	char str2[3];
	cout << "char array that isn't initialised:" << endl;
	cout << "str2[0] is: " << str2[0] << endl;
	cout << "str2[1] is: " << str2[1] << endl;
	cout << "str2[2] is: " << str2[2] << endl << endl;

	char str3[3] = {'n'};
	cout << "char array initialised with {'n'}:" << endl;	
	cout << "str3[0] is: " << str3[0] << endl;
	cout << "str3[1] is: " << str3[1] << endl;
	cout << "str3[2] is: " << str3[2] << endl << endl;

	//on windows should get dialog box saying needs to close,
	//but could come back empty, or even with a random value in.
	cout << "If you reference an index off the end of the array:" << endl;
	cout << str3[0xef5231] << endl;

	return 0;
}
