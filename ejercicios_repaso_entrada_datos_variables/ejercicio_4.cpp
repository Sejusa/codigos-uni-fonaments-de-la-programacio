//Pregúntale al usuario por su nombre, su edad y su comida favorita. A continuación muestra por pantalla los 3 datos en orden.

#include <iostream>
#include <string> //Para poder usar la variable std::string para el std::cin.

void main()
{
	std::string name; //Variable std::string utilizada más adelante a la hora de preguntar el nombre al usuario.
	std::string age;
	std::string favfood;

	std::cout << "Como te llamas?" << std::endl;
	std::getline(std::cin, name); //Esta línea sirve para leer todo lo que se escirbe hasta presionar enter, y no hasta el espacio con std::cin.
	
	std::cout << "Cual es tu edad?" << std::endl;
	std::getline(std::cin, age);

	std::cout << "Cual es tu comida favorita?" << std::endl;
	std::getline(std::cin, favfood);

	std::cout << "Tu nombre es " << name << " ,tu edad es " << age << " y tu comida favorita es " << favfood << std::endl;
}
