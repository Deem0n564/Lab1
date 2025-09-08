#include <iostream>

using namespace std;

class Object
{
	int serialNumber;
	int quantity;

	Object()
	{
		serialNumber = quantity;
	}

public:
	void printSerialNumber();
};

int main()
{
	int choise;
	Object* obj;

	do
	{
		cout << "\tMENU\n 1. Add object.\n 2. Delete object.\n 3. Exit\nYour choise is: ";
			choise = cin.get();
			if (cin.fail())
			{
				cin.clear();
				cin.ignore(100, '\n');

				cout << " Incorrect! Please, try again\n";
			}
		
	} while (choise != 3);

	return 0;
}

void Object::printSerialNumber()
{
	cout << serialNumber << endl;
}