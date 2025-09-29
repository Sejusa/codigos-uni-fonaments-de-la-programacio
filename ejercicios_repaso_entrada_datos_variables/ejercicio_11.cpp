//Crea un programa que haga la conversación de € a ¥, $ y £ usando valores actuales.

#include <iostream> //Para leer y escribir por consola.

void main()
{
	float euro;
	float eurToYen = 174.26; //Equivalencia de euros en yenes.
	float eurToDollar = 1.17; //Equivalencia de euros en dólares.
	float eurToPound = 0.87; //Equivalencia de euros en libras.

	std::cout << "Introduzca la cantidad de dinero que quiere pasar de Euros a Yen, Dolares y Libras." << std::endl;
	std::cout << "Por favor, introduzca las comas como puntos y emita los puntos a la hora de poner numeros mayores a mil." << std::endl;
	std::cin >> euro;

	eurToYen *= euro; //El *= sirve para multiplicar por lo de la derecha y asignar el resultado a la variable de la izquierda.
	eurToDollar *= euro;
	eurToPound *= euro;

	std::cout << "La equivalencia de " << euro << " euros en otras divisas es:" << std::endl;
	std::cout << "Yen: " << eurToYen << std::endl;
	std::cout << "Dólar: " << eurToDollar << std::endl;
	std::cout << "Libra: " << eurToPound << std::endl;
}
