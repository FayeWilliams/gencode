// Faye Williams
// 22 October 2005
// passingpointerstofunctions.cpp


//*********************************************************
//passing pointers to functions
//single pointer and array of pointers
//*********************************************************

#include<iostream>
#include<string>

using namespace std;

//to summarise:
//* used in declaration means the variable is a pointer
//* used before a variable means we are referencing its data or contents
//a pointer with no * means we are talking about its address or location
//dereferencing a pointer will give you the data at its address

void square(int *number);
void display(char *ptrChar[], int size);

int main()
{
	int smallnum = 3;
	int *ptr = &smallnum;
	
	char *pArray[] = {"I","love","the","weekend"};
	
	square(ptr);	//pass variable LOCATION to the function
	display(pArray, 4);	//pass LOCATION of pointer array to the function
	
	cout << "smallnum is: " << smallnum << endl;
	
	system("pause");	
	
	return 0;
}
//passing a single pointer
void square(int *number)
{
	int multiplier = *number;
	*number *= multiplier *= multiplier;
}
//passing an array of pointers
void display(char *ptrChar[], int size)
{
	for (int i = 0 ; i < size ; ++i)
	{
		cout << "element " << i << " : " << ptrChar[i] << endl;		//NOTE if you use *ptrChar[i] here it only prints out the first char
	}
}


