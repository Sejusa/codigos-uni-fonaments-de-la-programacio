/*Crea un programa en el que se introducen 3 cifras que representan lo que aportan 3 personas al pagar una cuenta y haz que el programa muestre que
% han aportado cada uno sobre el total*/

#include <iostream> //Para leer y escribir por consola.

void main()
{
	float user1;
	float user2;
	float user3;
	float total;

	std::cout << "Cuanto ha contribuido el usuario 1?" << std::endl;
	std::cin >> user1;

	std::cout << "Cuanto ha contribuido el usuario 2?" << std::endl;
	std::cin >> user2;

	std::cout << "Cuanto ha contribuido el usuario 3?" << std::endl;
	std::cin >> user3;

	total = user1 + user2 + user3;

	//Porcentajes.
	user1 /= total;
	user2 /= total;
	user3 /= total;

	std::cout << "El usuario 1 ha aportado un " << user1 << "% , el usuario 2 un " << user2 << "% y el usuario 3 un " << user3 << "%" << std::endl;
}
