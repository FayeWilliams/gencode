// Faye Williams
// 11 October 2005
// classinclass.cpp

//*********************************************************
//here a house class uses a room class to store data
//so all the room methods are now available to the house class
//*********************************************************

#include<iostream>
#include<string>

using namespace std;

//if these were in separate files you would need to #include the
//room header file in the house header file

class Room
{
public:
	void setName(string name) { this->name = name;}
	string getName() const { return name; } //auto inline and const
private:
	string name;
};

class House
{
public:
	House::House(int houseNum, string rname)
	{
		number = houseNum;
		one.setName(rname);
	}
	string getRoomName() const { return one.getName();}
private:
	int number;
	Room one;
};
	
int main()
{
	House newHouse(39, "living room");
	
	cout << newHouse.getRoomName() << endl;
	
	system("pause");	
	
	return 0;
}

