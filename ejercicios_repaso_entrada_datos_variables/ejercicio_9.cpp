//Crea un programa que pida al usuario el lado de un cuadrado y con ello calcule su área.

#include <iostream>

void main()
{
	float num;
	
	std::cout << "Introduce el lado del cuadrado." << std::endl;
	std::cin >> num; //Input del usuario.

	std::cout << "El area del cuadrado es: " << num * num << std::endl;
}
