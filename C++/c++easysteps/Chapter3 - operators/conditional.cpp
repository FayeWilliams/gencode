// Faye Williams
// 23 September 2005
// conditional.cpp

//*********************************************************
//shows conditional operator
//*********************************************************

#include<iostream>

using namespace std;

int main()
{
	int a = 20;
	int b = 10;
	
	( a %= b ) == 0 ? cout << "\nTrue\n" : cout << "\nFalse\n";
		
	system("pause");	

	return 0;
}
