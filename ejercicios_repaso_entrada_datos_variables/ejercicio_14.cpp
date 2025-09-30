//Crea un programa que pida 3 números al usuario y muestre el valor promedio de ellos.

#include <iostream> //Para leer y escribir por consola.

void main()
{
	float num;
	float resultado = 0;
	
	for (short i = 0; i < 3; i++) {
		std::cout << "Escriba un numero por favor." << std::endl;
		std::cin >> num;

		while (!std::cin) {
			std::cout << "Error, no has introduzido un numero, prueba de nuevo." << std::endl;
			std::cin.clear(); //Limpiar el estado de error.
			std::cin.ignore(1000, '\n'); //Descartar la entrada incorrecta hasta n caracteres o hasta encontrar un salto de línea.
			std::cin >> num;
		}

		resultado += num;
	}

	std::cout << "El promedio de esos tres numero es: " << resultado / 3 << std::endl;
}
