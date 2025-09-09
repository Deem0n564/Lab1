#include <iostream>
#include <vector>

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
	int choise;
	int numberToDelete;
	vector<Object*> objects;

	do
	{
		cout << "\tMENU\n 1. Add object.\n 2. Delete object.\n 3. Print serial numbers.\n 4. Exit\n Your choise is: ";

		choise = checkInputInt();

		switch (choise)
		{
		case 1:
			objects.push_back(new Object);

			break;

		case 2:
			if (objects.empty())
			{
				cout << "No objects to delete\n";

				break;
			}

			cout << " Enter serial number to delete: ";

			numberToDelete = checkInputInt();

			break;

		case 3:
			if (objects.empty())
			{
				cout << " Zero objects created.\n";
			}

			else
			{
				for (const Object* obj : objects)
				{
					obj->printSerialNumber();
				}
			}

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
	cout << " My serial number is: " << serialNumber << endl;
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