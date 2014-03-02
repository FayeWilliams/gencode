// Faye Williams
// 22 October 2005
// pointerarithmetic.cpp

//*********************************************************
//pointer arithmetic, moving through arrays and
//changing values using pointers
//*********************************************************

#include<iostream>
#include<string>

using namespace std;

//to summarise:
//* used in declaration means the variable is a pointer
//* used before a variable means we are referencing its data or contents
//a pointer with no * means we are talking about its address or location
//dereferencing a pointer will give you the data at its address

int main()
{
	//once a pointer has an address, it can be reassigned another address,
	//or moved using arithmetic
	
	//you can use -- and ++
	//you can use -= and +=
	//you cannot use /= or *= - Will not compile
	
	int num[3] = {1, 2, 3};
	
	int *pnum = num;	//an array name is a pointer to the first element of the array
						//so no need for the &addressof operator
						// int *pnum = num[0] would also be ok (in fact for any index number)
	
	cout << "ptr address: " << pnum << " value: " << *pnum << endl;
	++pnum;
	
	cout << "ptr address: " << pnum << " value: " << *pnum << endl;
	++pnum;
	
	cout << "ptr address: " << pnum << " value: " << *pnum << endl;
	pnum -= 2;
	
	cout << "ptr address: " << pnum << " value: " << *pnum << endl;
	
	//moving through an array:
	char name[] = {'f','a','y','e','\0'};
	char *pname = name;
	
	for  ( int i = 0 ; i < strlen(name); ++i )
	{
		cout << *pname;
		++pname;
	}
	cout << endl;
	
	//change a variable value with a pointer:
	string order[4] = {"One","Two","Three","Four"};
	
	string *ptrOrder = order;
	
	for (int i = 0 ; i < 4 ; ++i)
	{
		cout << order[i];
	}
	cout << endl;
	
	
	*ptrOrder = "First";
	ptrOrder += 3;
	*ptrOrder = "Last";
	
	for (int i = 0 ; i < 4 ; ++i)
	{
		cout << order[i];
	}
	cout << endl;
	
	system("pause");	
	
	return 0;
}

