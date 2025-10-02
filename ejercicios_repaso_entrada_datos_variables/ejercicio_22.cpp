//Crea un programa que pida al usuario una temperatura en grados Celsius y la pase a Fahrenheit y Kelvin

#include <iostream>

void main() {
	float celsius;
	float fahrenheit;
	float kelvin;

	std::cout << "Introduzca la temperatura en celsius para pasarla a otras medidas." << std::endl;
	std::cin >> celsius;

	//Fórmulas para pasa de celsius a fahrenheit y kelvin.
	fahrenheit = (celsius - 32) * 5 / 9;
	kelvin = celsius + 273.15;

	std::cout << "La tempreatura en fahrenheit es: " << fahrenheit << "F\nLa temperatura en kelvin es: " << kelvin << "K" << std::endl;
}
