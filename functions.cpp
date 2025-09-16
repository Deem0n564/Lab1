#include "Header.h"

void Object::printSerialNumber() const
{
	std::cout << " My serial number is: " << serialNumber << std::endl;
}

int Object::getSerialNumber() const
{
	return serialNumber;
}

int checkInputInt()
{
	int input;

	while (true)
	{
		if (std::cin >> input)
		{
			std::cin.ignore(100, '\n');

			return input;
		}

		else
		{
			std::cin.clear();
			std::cin.ignore(100, '\n');

			std::cout << " Incorrect! Please enter a valid integer: ";
		}
	}
}