//Crea un programa que al pedir un número muestre su tabla de multiplicar entera del 1 al 10.

#include <iostream> //Para leer y escribir por consola.

void main()
{
	short num;

	std::cout << "Introduce un numero entero para ver su tabla de multiplicar del 1 al 10." << std::endl;
	std::cin >> num;
	std::cout << "La tabla de multiplicar de " << num << " es:" << std::endl;

	for (short multiplier = 1; multiplier <= 10; multiplier++) //Bucle for que se ejecuta hasta que la tabla de multiplicar sea menor o igual a 10.
	{
		std::cout << "*" << multiplier << ":" << num * multiplier << std::endl; //Escribo el resultado en pantalla.
	}
}
