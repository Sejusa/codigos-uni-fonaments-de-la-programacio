//Crea un programa que pida el radio de un círculo al usuario y con ello calcule su área y perímetro.

#include <iostream> //Para leer y escribir por consola.

void main()
{
	float radio; //Es variable float por si el usuario introduce un decimal.
	const float pi = 3.14159265f; // Definimos pi manualmente. Es una variable const para que no se pueda cambiar.

	std::cout << "Introduce el radio de tu circulo para calcular el area y perimetro." << std::endl;
	std::cin >> radio;

	float area = pi * radio * radio;
	float perimeter = 2 * pi * radio;

	std::cout << "El area es " << area << " y el perimetro es " << perimeter << std::endl;
}

//¡¡¡ATENCIÓN!!! Si se utiliza el número 2 como radio, el área y perímetro daran lo mismo, es cosa de las matemáticas no del que el programa este mal :)
