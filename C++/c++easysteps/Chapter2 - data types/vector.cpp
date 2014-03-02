// Faye Williams
// 19 September 2005
// vector.cpp

//*********************************************************
//a vector is an alternative to a regular array, with the advantage
//that it's size can be changed as the program requires
//vectors can be created for any data type and their elements are numbered
//starting at zero
//*********************************************************

#include <iostream>

//required for use of vectors
//this is one of the 13 headers that make up the STL (standard template library)
#include <vector>

using namespace std;

int main()
{
	cout << "\nAn example of vectors\n\n";
	
	cout << "The following methods are used to work with vectors:\n";
	cout << "at(n)\t\tgets value at n\n";
	cout << "back()\t\tgets value in final element\n";
	cout << "clear()\t\tempties vector\n";
	cout << "empty()\t\treturns true if vector is empty\n";
	cout << "front()\t\tgets value in first element\n";
	cout << "pop-back()\tremoves last element\n";
	cout << "push_back(n)\tadds n element to end\n";
	cout << "size()\t\treturns number of elements\n\n";
	
	int count = 0;
	int size = 4;
	
	//create vector (size) or (size, value), where value is applied to every element
	vector <int> myVec( size );
	//initialise with 1,2,3,4
	while ( count < size )
	{
		myVec[count] = count + 1;
		count++;
	}
	
	cout << "Vector size is: " << myVec.size() << endl;
	
	//add two elements to the end
	myVec.push_back(5);
	myVec.push_back(6);
	
	cout << "Added two elements. Size is now: " << myVec.size() << endl;
	cout << "Fourth element is: " << myVec.at(3) << endl; 
	cout << "First element is: " << myVec.front() << endl;
	cout << "Last element is: " << myVec.back() << endl;
	
	//delete last element
	myVec.pop_back();
	
	cout << "Last element now: " << myVec.back() << endl;
	cout << "Size is now: " << myVec.size() << endl;
	cout << "Is vector empty? " << myVec.empty() << " (0 for false)" << endl;
	
	//empty vector
	myVec.clear();
	
	cout << "Is vector empty? " << myVec.empty() << " (0 for false)" << endl;
	cout << "Size is now: " << myVec.size() << endl << endl;
	
	system("pause");

	return 0;
}
