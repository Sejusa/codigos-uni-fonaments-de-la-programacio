// Crea un programa que pida la hora, minutos y segundos actuales al usuario y muestre el resultado en milisegundos

#include <iostream> //Para leer y escribir por consola.

void main()
{
	/*Se utiliza valores long porque miliseconds puede dar un número muy grande, y las otras variables también para que se pueda operar bien, ya que si
	se usa operaciones con tipos de variables diferentes sale una advertencia.*/
	long hour;
	long minutes;
	long seconds;
	long miliseconds;

	std::cout << "Introduzca la hora: " << std::endl;
	std::cin >> hour;

	std::cout << "Introduzca los minutos: " << std::endl;
	std::cin >> minutes;

	std::cout << "Introduzca los segundos: " << std::endl;
	std::cin >> seconds;

	//Factores de conversión:
	hour = hour * 3600 * 1000;
	minutes = minutes * 60 * 1000;
	seconds = seconds * 1000;

	miliseconds = hour + minutes + seconds;

	std::cout << "Su hora actual es: " << miliseconds << " en milisegundos." << std::endl;
}
