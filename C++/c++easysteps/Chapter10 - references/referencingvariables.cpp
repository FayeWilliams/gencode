// Faye Williams
// 22 October 2005
// referencingvariables.cpp

//*********************************************************
//& reference operator
//referencing variables
//*********************************************************

#include<iostream>
#include<string>

using namespace std;

int main()
{
	//don't confuse the & reference operator with the & addressof operator
	//the compiler recognises each according to the context in which it appears
	
	//a reference is an alias for a variable or object
	//ie just another label for it
	//whatever is done to the label is also done to the 
	//original object
	
	//common practice to preceed the referece name with an r
	//references are so good, that the addressof operator will
	//return the address of the target - there is no way to find the
	//address of the reference!
	
	//once created it cannot be assigned to any other target
	//attempting to do so simply assignd the original target the new
	//targets value
	
	int number;
	int &rNumber = number;
	
	number = 10;
	
	cout << "number is: " << number << endl;
	cout << "rNumber is: " << rNumber << endl;
	
	
	
	
	system("pause");	
	
	return 0;
}

