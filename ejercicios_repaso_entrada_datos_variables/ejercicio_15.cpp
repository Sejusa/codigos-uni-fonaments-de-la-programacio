//Crea un programa que al introducir una velocidad en km/h y un tiempo en horas nos indique que distancia habremos recorrido en m.

#include <iostream> //Para leer y escribir por consola.

void main()
{
	float velocity;
	float time;

	std::cout << "Introduzca una velocidad en km/h y un tiempo en horas." << std::endl;

	std::cout << "Introduzca la velocidad en km/h." << std::endl;
	std::cin >> velocity;

	std::cout << "Introduce el tiempo en horas." << std::endl;
	std::cin >> time;
	
	//Factor de conversión de km/h a m:
	velocity *= 1000;

	std::cout << "Has recorrido " << velocity * time << "m." << std::endl;
}
