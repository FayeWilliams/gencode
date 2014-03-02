// Faye Williams
// 17 September 2005
// char_array.cpp

//******************************************************************************
//character arrays - are special because cout knows to print out their contents
//other arrays just give you a memory address
//******************************************************************************
#include <iostream>

using namespace std;

int main()
{
	//char arrays are C strings. C++ uses string class

	//the '\0' allows the array to be referenced by just the array name	
	char str[5] = {'f','a','y','e','\0'};
	cout << "print out str: " << str << endl;

	//prints out whatever comes after it in memory, as no null to say stop
	char str2[4] = {'m','a','r','k'};
	cout << "print out without null terminator at end: " << str2 << endl;	

	//this prints out its address in memory
	int num[3] = { 2,4,6 };
	cout << "num is: " << num << endl;

	system("pause");

	return 0;
}
