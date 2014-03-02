// Faye Williams
// 25 September 2005
// forloops.cpp

//*********************************************************
//shows for loop syntax, and notes on pre and post incrementation
//*********************************************************

#include<iostream>

using namespace std;

int main()
{
	//alternative for loops:
	int i = 0;
	int j = 0;
		
	//NOTE: runs forever
	//for (;;)
	//{
	//	cout << i << endl;
	//}
	
	//pre-incrementing is faster and more efficient as it increments and then returns the variable
	//post-incrementing has to make a copy of i, increment i, and then return the copy
	//with primitive types your compiler should optimise to the point where there is little
	//difference, but with user defined types, pre-incrementing is usually a better choice
	//especially if you have no need to use the old value
	
	for (; i < 4 ; ++i ) //note still runs 4 times with pre-increment
	{
		cout << i << endl;
	}
	
	for (j = 0 ; j < 4 ;) //
	{
		cout << j << endl;
		++j;
	}
	
	cout << "i is now:" << i << endl;
	cout << "j is now:" << j << endl;
		
	system("pause");	

	return 0;
}
