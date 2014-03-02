// Faye Williams
// 30 September 2005
// simpleclass.cpp

//*********************************************************
//notes on classes
//*********************************************************

#include<iostream>
#include<string>

using namespace std;

//a simple class:
class Dog
{
public:				//required so the internals are accessible to main
	string name;
	int age;
	void bark();
};

void Dog::bark()
{
	cout << "WOOF!" << endl;
}

int main()
{
	//classes represent real world objects.
	//a function in a class is a METHOD /ACTION
	//a variable in a class is a MEMBER / ATTRIBUTE
	
	//A class creates the *definition* of the data type (eg a dog)
	//The class is just the data type (like an int or a char)
	//You have to create an object of that type to interact with one
	//in the same way you declare variables.
	
	//classes are defined just like structs:
	
	//class <Name>
	//{
	//};
	
	//note the semi colon at the end. Class names usually begin with uppercase.
	//just like structs, you can create objects at the end:
	//class <Name>
	//{
	//} obj1, obj2, obj3;
	
	Dog newDog;
	
	newDog.name = "Henry";
	newDog.age = 2;
	
	cout << "Dog's name: " << newDog.name << endl;
	cout << "Dog's age: " << newDog.age << endl;
	newDog.bark();
	
	system("pause");	
	
	return 0;
}

