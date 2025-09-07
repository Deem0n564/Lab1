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
	Object* obj;

	return 0;
}

void Object::printSerialNumber()
{
	cout << serialNumber << endl;
}