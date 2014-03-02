// Faye Williams
// 25 September 2005
// usinggoto.cpp

//*********************************************************
//shows use of goto
//*********************************************************

#include<iostream>

using namespace std;

int main()
{
	//goto jumps to a label specified by the user.
	//never recommended for use in programs, it is handy
	//for breaking out of nested loops
	//as break only moves you out of the current loop
	
	for ( int i = 1 ; i < 10 ; ++i )
	{
		cout << i << endl;
		
		for ( int j = 1 ; j < 10 ; ++j )
		{
			cout << j << endl;
			
			goto escapePoint;
		}
	}
	escapePoint:
	
	system("pause");	

	return 0;
}
