// Faye Williams
// 11 October 2005
// const.cpp

//*********************************************************
//notes on classes
//*********************************************************

#include<iostream>
#include<string>

using namespace std;

//methods that never change a class member value should be declared as constant
//using the const keyword in both declaration and definition
//const goes just after the closing argument parenthesis

//methods that involve a single line of code, such as an age or 
//name assignment, might be better inline.
//a method automatically becomes inline if you include its body in the
//declaration
class Dog
{
public:				//required so the internals are accessible to main
	//automatically inline and const method:
	void bark() const {cout << "WOOF!\n";}
	string getName() const;
	void setName(string name);
	int getAge() const;
	void setAge(int age);
private:	//these items are not accessible from outside the class:
	string name;
	int age;
};

string Dog::getName() const
{
	return name;
}

int Dog::getAge() const 
{
	return age;
}

inline void Dog::setName(string name)
{
	this -> name = name;
}

inline void Dog::setAge(int yrs) {age = yrs;}

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

