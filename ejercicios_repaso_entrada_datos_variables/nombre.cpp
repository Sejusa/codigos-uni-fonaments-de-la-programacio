//Pregunta por pantalla el nombre del usuario y luego le saludas mencionandosu nombre.

#include <iostream>
#include <string>

void main()
{
	std::string name; //Variable std::string utilizada más adelante a la hora de preguntar el nombre al usuario.

	std::cout << "Como te llamas?" << std::endl;
	std::cin >> name;
	std::cout << "Hola " << name << "!" << std::endl;
}
