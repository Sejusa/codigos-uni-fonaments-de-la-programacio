//Crea un programa que dada una temperatura en Fahrenheit la convierta en Celsius.

#include <iostream>

void main() {
	float celsius;
	float fahrenheit;

	std::cout << "Introduzca la temperatura en fahrenheit para pasarla a otras celsius." << std::endl;
	std::cin >> fahrenheit;

	//Fórmulas para pasa de celsius a fahrenheit y kelvin.
	celsius = (fahrenheit - 32) * 5 / 9;

	std::cout << "La tempreatura en celsius es: " << celsius << "C" << std::endl;
}
