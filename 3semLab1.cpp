#include <iostream>

using namespace std;

class Object
{
	int serialNumber;
	static int quantity;

	Object()
	{
		serialNumber = quantity;
	}

public:
	void printSerialNumber();
};

int checkInputInt();

int main()
{
	int choise;
	Object* obj;

	do
	{
		cout << "\tMENU\n 1. Add object.\n 2. Delete object.\n 3. Print serial numbers.\n 4. Exit\n Your choise is: ";

		choise = checkInputInt();

		switch (choise)
		{
		case 1:
			break;

		case 2:
			break;

		case 3:
			break;

		default:
			cout << " Incorrect! Please, try again\n";

			break;
		}
		
	} while (choise != 4);


	return 0;
}

void Object::printSerialNumber()
{
	cout << serialNumber << endl;
}

int checkInputInt()
{
	int input;

	while (1)
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