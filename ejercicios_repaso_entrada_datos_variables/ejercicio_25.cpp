/*Crea un programa que al introducir una cantidad económica en euros nos
muestre la combinación de billetes y monedas más eficiente para obtener
esa cantidad.Por ejemplo, si introduzco 1, 124€ me debe de mostrar como
resultado 2 billetes de 500€, 1 de 100€, 1 de 20€, y dos monedas de 2€.*/

#include <iostream>

void main() {
	int money;
	short billeteQuinientos = 0;
	short billeteDoscientos = 0;
	short billeteCien = 0;
	short billeteCincuenta = 0;
	short billeteVeinte = 0;
	short billeteDiez = 0;
	short billeteCinco = 0;
	short monedaDos = 0;
	short monedaUno = 0;

	std::cout << "Introduce la cantidad de dinero que quieras." << std::endl;
	std::cin >> money;

	while (money != 0) { //Se ejecutará el bucle hasta siempre que sea diferente a 0.
		if (money >= 500.0f) { //Si es igual o mayor al número, no usar el módulo porque entonces la lógica del programa está mal.
			billeteQuinientos++; //Le sumamos un billete de este valor.
			money -= 500.0f; //Le quitamos el dinero correspondiente
		} //Este código de aquí se repite todo el código pero con números diferentes.

		else if (money >= 200.0f) {
			billeteDoscientos++;
			money -= 200.0f;
		}

		else if (money >= 100.0f) {
			billeteCien++;
			money -= 100.0f;
		}

		else if (money >= 50.0f) {
			billeteCincuenta++;
			money -= 50.0f;
		}

		else if (money >= 20.0f) {
			billeteVeinte++;
			money -= 20.0f;
		}

		else if (money >= 10.0f) {
			billeteDiez++;
			money -= 10.0f;
		}

		else if (money >= 5.0f) {
			billeteCinco++;
			money -= 5.0f;
		}

		else if (money >= 2.0f) {
			monedaDos++;
			money -= 2.0f;
		}

		else {
			monedaUno++;
			money -= 1.0f;
		}
	}

	//Todo esto es para mostrar los billetes.
	std::cout << "Necesitas: " << std::endl;
	std::cout << billeteQuinientos << " billetes de 500" << std::endl;
	std::cout << billeteDoscientos << " billetes de 200" << std::endl;
	std::cout << billeteCien << " billetes de 100" << std::endl;
	std::cout << billeteCincuenta << " billetes de 50" << std::endl;
	std::cout << billeteVeinte << " billetes de 20" << std::endl;
	std::cout << billeteDiez << " billetes de 10" << std::endl;
	std::cout << billeteCinco << " billetes de 5" << std::endl;
	std::cout << monedaDos << " monedas de 2" << std::endl;
	std::cout << monedaUno << " monedas de 1" << std::endl;
}
