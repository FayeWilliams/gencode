// Faye Williams
// 11 October 2005
// privatedata.cpp


//*********************************************************
//notes on classes
//*********************************************************

#include<iostream>
#include<string>

using namespace std;

//a simple class, with public interface and private data:
class Dog
{
public:				//required so the internals are accessible to main
	void bark();
	string getName();
	void setName(string name);
	int getAge();
	void setAge(int age);
private:	//these items are not accessible from outside the class:
	string name;
	int age;
};

void Dog::bark()
{
	cout << "WOOF!" << endl;
}

string Dog::getName()
{
	return name;
}

int Dog::getAge()
{
	return age;
}

//each objecgt has a special pointer named "this", which
//refers to the object itself
void Dog::setName(string name)
{
	//note - the this pointer is only required because the member's name
	//and the argument name are the same
	this -> name = name;
}

void Dog::setAge(int age)
{
	this -> age = age;
}

int main()
{
	Dog newDog;
	
	newDog.setName("Henry");
	newDog.setAge(2);
	
	cout << "Dog's name: " << newDog.getName() << endl;
	cout << "Dog's age: " << newDog.getAge() << endl;
	newDog.bark();
	
	system("pause");	
	
	return 0;
}

