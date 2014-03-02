// Faye Williams
// 26 September 2005
// strings1.cpp

//*********************************************************
//basic strings
//*********************************************************

#include<iostream>
#include<string>

using namespace std;

int main()
{
	string var1;
	string var2 = "Faye Williams";
	string var3("Steve Parfitt");
	string var4("orange");
	string var5;
	string var6;
	
	var4 = "pea"; //strings are auto-resized to contain what you want
	
	cout << "var1: " << var1 << endl;
	cout << "var2: " << var2 << endl;
	cout << "var3: " << var3 << endl;
	cout << "var4: " << var4 << endl << endl;
	
	cout << "Please enter your full name" << endl;
	cin >> var5;
	cout << "Your name is: " << var5 << endl << endl;
	
	//cin loses everything after a space
	//clear the buffer here to clear the rest
	cin.ignore('\n');
	
	cout << "Try again, please enter your full name" << endl;
	getline(cin, var6);		//getline reads up until the newline character is found
	//alternatively you can use getline with a third param of an alternative delimiter 
	//eg getline(cin, var6, '\t') //will read until a tab is encountered
	cout << "Your name is: " << var6 << endl;
	
	//getline will also read into a char array:
	//cin.getline(<arrayname>, <size of array>); size of array includes the null terminator,
	//so it reads <size of array> - 1 into the array
	
	system("pause");	

	return 0;
}
