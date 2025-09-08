#include <iostream>

using namespace std;

class Object
{
	int serialNumber;
	static int quantity;

public:
	Object()
	{
		serialNumber = ++quantity;
	}
	void printSerialNumber() const;
};

int checkInputInt();

int Object::quantity = 0;

int main()
{
	int choise, numberToDelete;
	Object* obj = NULL;

	obj = new Object;

	delete obj;

	do
	{
		cout << "\tMENU\n 1. Add object.\n 2. Delete object.\n 3. Print serial numbers.\n 4. Exit\n Your choise is: ";

		choise = checkInputInt();

		switch (choise)
		{
		case 1:
			break;

		case 2:
			cout << " Enter serial number to delete: ";

			numberToDelete = checkInputInt();

			break;

		case 3:
			break;

		case 4:
			break;

		default:
			cout << " Incorrect! Please, try again\n";

			break;
		}
		
	} while (choise != 4);


	return 0;
}

void Object::printSerialNumber() const
{
	cout << serialNumber << endl;
}

int checkInputInt()
{
	int input;

	while (true)
	{
		if (cin >> input)
		{
			cin.ignore(100, '\n');

			return input;
		}

		else
		{
			cin.clear();
			cin.ignore(100, '\n');

			cout << " Incorrect! Please enter a valid integer: ";
		}
	}
}