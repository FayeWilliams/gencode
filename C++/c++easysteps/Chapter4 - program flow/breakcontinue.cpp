// Faye Williams
// 25 September 2005
// breakcontinue.cpp

//*********************************************************
//shows use of break and continue
//*********************************************************

#include<iostream>

using namespace std;

int main()
{
	//break STOPS the execution of the entire loop
	for ( int i = 0 ; i < 10 ; ++i )
	{
		if ( i == 7 )
		{
			break;
		}
		cout << " " << i;
	}
	
	cout << "\n";
	
	//continue SKIPS the current iteration
	for ( int i = 0 ; i < 10 ; ++i )
	{
		if ( i == 7 )
		{
			continue;
		}
		cout << " " << i;
	}
		
	cout << "\n";
		
	system("pause");	

	return 0;
}
