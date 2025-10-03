/*Crea un programa que nos sirva para saber los ingredientes que pide un
cliente para su bocadillo. El programa preguntará por 6 ingredientes distintos
y luego debe de repetir sólo aquellos ingredientes que haya pedido el
cliente.
*/

#include <iostream>
#include <string> //Para poder usar la variable tipo std::string.

void main() {
	bool quieresIngrediente;
	std::string ingredientes[6] = {"queso", "bacon", "lechuga", "tomate", "atun", "aceite"};

	for (short i = 0; i < 6; i++) {
		switch (i) {
			case 0:
				std::cout << "Quieres " << ingredientes[i] << " ? 0 = No   1 = Si" << std::endl;
				std::cin >> quieresIngrediente;
		}
	}
}
