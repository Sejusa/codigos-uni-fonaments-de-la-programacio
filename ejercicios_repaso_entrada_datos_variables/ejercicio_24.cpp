//Crea un programa que dado una temperatura en Fahrenheit la convierte en Kelvin.

#include <iostream>

void main() {
	float kelvin;
	float fahrenheit;

	std::cout << "Introduzca la temperatura en fahrenheit para pasarla a otras celsius." << std::endl;
	std::cin >> fahrenheit;

	//Fórmulas para pasa de celsius a fahrenheit y kelvin.
	kelvin = (fahrenheit - 32) * 5 / 9 + 273.15;

	std::cout << "La tempreatura en celsius es: " << kelvin << "K" << std::endl;
}
