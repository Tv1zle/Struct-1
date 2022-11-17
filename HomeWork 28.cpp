#include <iostream>
#include <string>


int main()
{
	struct Computer
	{
		std::string CPU;
		std::string Motherboard;
		std::string VideoCard;
		int RAM;
		int StorageDevice;
    };


	struct Pizza
	{
		float Cheese;
		float Sausage;
		float Tomato;
		float Ketchup;
		float Butter;
	};


	struct House
	{
		int Floors;
		int Doors;
		int Rooms;
		int Stairs;
		int Windows;
	};


	struct Carpet
	{
		std::string Figure;
		std::string Picture;
		double Size;
		double Thickness;
		std::string Manufacturer;
	};


	struct CppTeacher
	{
		std::string Name;
		int Age;
		int Growth;
		std::string Country;
		int Experience;
	};
}