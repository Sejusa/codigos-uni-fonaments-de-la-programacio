//Crea un programa que pida al usuario una distancia en metros y muestre su equivalente en millas, yardas, pies y pulgadas(Sistema Imperial).

#include <iostream> //Para leer y escribir por consola.

void main()
{
	//Cantidad de cada unidad respecto a metros.
	float metres;
	float miles = 0.000621371;
	float yards = 1.09361;
	float feet = 3.28084;
	float inches = 39.3701;

	std::cout << "Escriba la cantidad de metros que quiere pasar a otras unidades." << std::endl;
	std::cin >> metres;

	miles *= metres;
	yards *= metres;
	feet *=metres;
	inches *= metres;

	std::cout << "Millas: " << miles << std::endl;
	std::cout << "Yardas: " << yards << std::endl;
	std::cout << "Pies: " << feet << std::endl;
	std::cout << "Pulgadas: " << inches << std::endl;
}
