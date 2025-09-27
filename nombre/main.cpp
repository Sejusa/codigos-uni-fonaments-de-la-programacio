#include <iostream>
#include <string>

void main()
{
	std::string nombre;
	short edad;

	std::cout << "Dime tu nombre." << std::endl;
	std::cin >> nombre;

	std::cout << "Dime tu edad." << std::endl;
	std::cin >> edad;

	std::cout << "Tu nombre es " << nombre << " y tienes " << edad << std::endl;
}
