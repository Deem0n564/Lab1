#include "Header.h"

int Object::quantity = 0;

int main()
{
	int choise;
	int size;
	int i;
	Object *objects = nullptr;
	Object* temp;

	size = 0;

	do
	{
		std::cout << "\tMENU\n 1. Add object.\n 2. Print serial numbers.\n 3. Exit\n Your choise is: ";

		choise = checkInputInt();

		switch (choise)
		{
		case 1:
			Object::quantity++;
			temp = new Object[size + 1];

			for (i = 0; i < size; i++)
			{
				temp[i] = objects[i];
			}

			delete[] objects;
			objects = temp;
			size++;

			std::cout << " Added object with serial number = " << objects[size - 1].getSerialNumber() << "\n";

			break;

		case 2:
			for (i = 0; i < size; i++)
			{
				std::cout << " My serial number is " << objects[i].getSerialNumber() << "\n";
			}

			break;

		case 3:
			delete []objects;

			break;

		default:
			std::cout << " Incorrect! Please, try again\n";

			break;
		}
		
	} while (choise != 3);


	return 0;
}