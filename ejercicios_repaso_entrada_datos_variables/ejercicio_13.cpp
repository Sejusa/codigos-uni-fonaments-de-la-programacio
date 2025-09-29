//Crea un programa que al pedir un número muestre su tabla de multiplicar entera del 1 al 10.

#include <iostream> //Para leer y escribir por consola.

void main()
{
	float gramos;

	std::cout << "Introduzca su cantidad en gramos para pasarlo a kg y mg." << std::endl;
	std::cin >> gramos;
	std::cout << "Kg = " << gramos / 1000 << "kg" << std::endl;
	std::cout << "mg = " << gramos * 1000 << "mg" << std::endl;
}
