#include <iostream>

int main()
{
	int val1 = 10;
	int val2 = 15;

	int *pi = &val1; //Point to the address of val1;
	std::cout << "Old address: " << pi << " value: " << *pi << std::endl;

	pi = &val2; //Point to the address of val2;
	std::cout << "New address: " << pi << " value: " << *pi << std::endl;

	int val3 = 20;
	int val4 = 25;
	
	int *pi2 = &val3;
	std::cout << "Old Value of val3: " << val3 << std::endl;

	*pi2 = val4;
	std::cout << "New Value of val3: " << val3 << std::endl;

	return 0;
}