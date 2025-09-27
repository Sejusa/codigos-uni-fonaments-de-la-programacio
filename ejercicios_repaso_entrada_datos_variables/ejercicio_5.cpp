#include <iostream>
#include <string> //Para poder usar la variable std::string para el std::cin.

void main()
{
	std::string name;
	std::string age;
	std::string street;
	std::string numstreet;

	//Evitar mezclar std::cin con std::getline(), ya que se saltará alguna línea de código.

	std::cout << "Dime tu nombre" << std::endl;
	std::getline(std::cin, name); //Para leer todo lo que se escribe hasta presionar enter y así evitar que deje de leer si hay espacios.

	std::cout << "\nDime tu edad" << std::endl;
	std::getline(std::cin, age);

	std::cout << "\nDime tu calle" << std::endl;
	std::getline(std::cin, street);

	std::cout << "\nDime el numero de tu calle" << std::endl;
	std::getline(std::cin, numstreet);

	std::cout << "\n===============" << std::endl;
	std::cout << "   Sus datos" << std::endl;
	std::cout << "===============" << std::endl;

	std::cout << "Su nombre es: " << name << std::endl;
	std::cout << "Su edad es: " << age << std::endl;
	std::cout << "Usted vive en: " << street << " " << numstreet << std::endl;
}
