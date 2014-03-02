// Faye Williams
// 27 September 2005
// strings2.cpp

//*********************************************************
//string functions 
//.size() .empty() .append() .compare() .assign()
//*********************************************************

#include<iostream>
#include<string>

using namespace std;

int main()
{
	string var1 = "Faye Williams";
	string var2;

	//size() function
	cout << "\nString is: " << var1 << endl;
	cout << "Size of string is: " << var1.size() << endl;
	
	var1 = "";
	
	cout << "Now size is: " << var1.size() << endl;
	
	//empty() function
	if ( var1.empty() )
	{
		cout << "String tested true for empty\n" << endl;
	}
	
	//append() function (and +=)
	var1 = "hydrogen";
	var1 += " helium";		//can append with assignment
	cout << "Var 1 is: " << var1 << endl;
	var1.append(" lithium");	//or with append function
	cout << "Var 1 is: " << var1 << endl;
	
	//compare() function (and ==)
	string one("orange");
	if ( 0 == one.compare("orange"))
	{
		cout << "Match\n";
	}
	//NOTE that compare returns zero WHEN THEY MATCH, so :
	//if (one.compare("orange")) would return false. It needs to be compared to zero
	//compare() returns -1 when the first differing char in the second string is of a lower ascii value
	//compare() returns +1 when the first differing char in the second string is of a higher ascii value
	
	if (one == "orange") //can also use "=="
	{
		cout << "Match\n";
	}
	
	//assign() function (and =)
	string two;
	string three;
	two.assign(one);
	three = one;
	cout << two << endl;
	cout << three << endl;
	
	//assign can also assign a substring (<stringsource>, <starting point>, <num chars>):
	three.assign(var1, 16, 7);
	cout << three << endl << endl;
	
	system("pause");	

	return 0;
}
