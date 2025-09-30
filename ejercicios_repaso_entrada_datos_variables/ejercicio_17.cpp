/*Crea un programa donde el usuario ingresa una cantidad económica, unastasas de interés y unos meses.El programa debe de mostrar los intereses y
el total con los intereses.*/

#include <iostream> //Para leer y escribir por consola.

void main()
{
	float money;
	float taxOfInterest;
	short months;
	float interest;
	float totalMoney;

	std::cout << "Ingrese una cantidad economica. Los puntos se omiten y las comas son puntos." << std::endl;
	std::cin >> money;

	std::cout << "Establezca el interes:" << std::endl;
	std::cin >> taxOfInterest;

	std::cout << "Diga la cantidad de meses que durara este interes: " << std::endl;
	std::cin >> months;

	taxOfInterest /= 100.0f; //Para que sea un porcentaje.
	interest = money * taxOfInterest * months;
	totalMoney = money + interest;

	std::cout << "Intereses: " << interest << " euros" << std::endl;
	std::cout << "Total de dinero con intereses: " << totalMoney << " euros" << std::endl;
}
