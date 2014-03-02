// Faye Williams
// 28 September 2005
// strings3.cpp

//*********************************************************
//string functions 
//.swap() .find() .find_first_of() .find_first_not_of()
//.find_last_of() .find_last_not_of()
//.insert() .earase() .replace()
//.at()
//*********************************************************

#include<iostream>
#include<string>

using namespace std;

int main()
{
	string var1 = "Faye Williams";
	string var2 = "Steve Parfitt";

	cout << "\nvar1: " << var1 << endl;
	cout << "var2: " << var2 << endl;

	//swap() function - swaps BOTH strings over
	var1.swap(var2);
	
	cout << "var1: " << var1 << endl;
	cout << "var2: " << var2 << endl << endl;
	
	//searching for substrings - find()
	string elements("hydrogen helium lithium");
	string subElement("helium");
	
	//find take the subtring and the starting position as args
	//it returns the position of the substring, or string::npos
	int pos = elements.find(subElement, 0); //ie start at beginning
	if (pos != string::npos)
	{
		cout << subElement << " found at: " << pos << endl;
	}
	else
	{
		cout << subElement << " not found" << endl;
	}
	
	//find_first_of() finds the first occurance of ANY of the characters in a specified string
	//find_first_not_of() finds the first occurance of ANY characters NOT in the string
	
	string data1("00000CC000023000");
	string data2("aaaaraaaaaa1aaaa");
	
	pos = data1.find_first_of("C23");
	
	cout << "First: " << pos << endl;
	
	pos = data2.find_first_not_of("a");
	
	cout << "First: " << pos << endl;
	
	//find_last_of() and find_last_not_of() work exactly the same, but run from the end of the string forwards
	
	//insert() takes the position to insert and the string to insert in
	string phrase1("I live in England");
	string phrase2("am really happy that I ");
	
	phrase1.insert(2, phrase2);
	
	cout << phrase1 << endl;
	
	//opposite of insert is erase(), which takes starting point and number to be removed
	phrase1.erase(18, 12);
	
	cout << phrase1 << endl;
	
	//replace combines erase and insert. It removes a section and adds in new data:
	phrase1.replace(2, 19, "love ");
	
	cout << phrase1 << endl;
	
	//individual charaters can be retrieved using at()
	cout << phrase1.at(0) << endl;
	cout << phrase1.at(10) << endl;
	cout << phrase1.at(phrase1.size() - 1) << endl << endl; //indexing of string starts at zero
	
	system("pause");	

	return 0;
}
