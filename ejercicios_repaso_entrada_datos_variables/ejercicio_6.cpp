/*Crea un programa que reciba dos números y ejecute las operaciones
matemáticas(suma, resta, multiplicación, división, módulo) mostrando su
resultado por pantalla*/

#include <iostream>
#include <string> //Para poder usar la variable std::string para el std::cin.
#include <math.h> //Para poder hacer el módulo con variables float.

void main()
{
	float num1;
	float num2;
	
	std::cout << "Escriba el primer numero." << std::endl;
	std::cin >> num1;
	std::cout << "Escriba el segundo nmero." << std::endl;
	std::cin >> num2;

	std::cout << "Suma: " << num1 + num2 << std::endl;
	std::cout << "Resta: " << num1 - num2 << std::endl;
	std::cout << "Multiplicacion: " << num1 * num2 << std::endl;
	std::cout << "Division: " << num1 / num2 << std::endl;
	std::cout << "Modulo: " << fmod(num1, num2) << std::endl; //Usamos fmod() para poder hacer el módulo de variables float.
}
