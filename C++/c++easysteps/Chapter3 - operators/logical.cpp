// Faye Williams
// 23 September 2005
// logical.cpp

//*********************************************************
//shows logical operators
//*********************************************************

#include<iostream>

using namespace std;

int main()
{
	cout << "\n&&\t logical AND\n";
	cout << "||\t logical OR\n";
	cout << "!\t logical NOT\n\n";
	
	//note that the ! can be used to toggle a value on and off:
	int num = 1;
	
	for ( int a = 0 ; a < 4 ; a++ )
	{
		num = !num; //toggle
		cout << "Num is: " << num << endl;
	}
		
	system("pause");	

	return 0;
}
