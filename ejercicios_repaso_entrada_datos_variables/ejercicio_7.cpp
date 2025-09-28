//Crea un programa que pida un número al usuario y muestra su valor negado (Si introduce 1 debe mostrar -1 y si introduce -1 debe mostrar 1).

#include <iostream>
#include <string> //Para poder usar la variable std::string para el std::cin.

void main()
{
	float num;

	std::cout << "Escriba un numero." << std::endl;
	std::cin >> num;

	num = -num; //Con esto se invierte el signo del número introducido.
	std::cout << "El numero invertido es: " << num << std::endl;
}
