/*Cread un programa que ejecuta en orden una suma, una resta, una
multiplicación, una división y un módulo. Para la suma el programa nos
pedirá dos números, pero para el resto sólo nos pedirá un número y
usará el resultado del cálculo anterior como segundo valor. Sólo
mostrará el resultado final pero debe avisar al usuario que está
esperando un nuevo valor.
Aplicar durante este ejercicio (y el resto de vuestra vida) las buenas
prácticas de programación enseñadas y buscado una forma eficiente de
desarrollar el programa.*/

#include <iostream>
#include <cmath>  //Necesario para poder hacer el modulo con variables float en la línea 47.

void main()
{
	float num1;
	float num2;
	float resultado;
	float newnum; //Variable para el nuevo número que se utilizará para las operaciones restantes.

	//Suma
	std::cout << "Los numeros decimales deben ser escritos con \".\" en vez de con \",\"" << std::endl; //Comentario añadido al inicio del programa para evitar que pete.
	std::cout << "Esciba el primer numero." << std::endl;
	std::cin >> num1;
	std::cout << "Escriba su segundo numero." << std::endl;
	std::cin >> num2;
	resultado = num1 + num2;
	std::cout << "La suma de esos dos numero es: " << resultado << std::endl;

	//Resta
	std::cout << "Cuanto le quieres restar al resultado anterior?";
	std::cin >> newnum;
	resultado -= newnum;
	std::cout << "La resta de esos dos numero es: " << resultado << std::endl;

	//Multiplicación
	std::cout << "Por cuanto lo quieres multiplicar?" << std::endl;
	std::cin >> newnum;
	resultado *= newnum;
	std::cout << "La multiplicación de esos dos numero es: " << resultado << std::endl;

	//División
	std::cout << "Por cuanto lo quieres dividir?" << std::endl;
	std::cin >> newnum;
	resultado /= newnum;
	std::cout << "La división de esos dos numero es: " << resultado << std::endl;

	//Módulo
	std::cout << "Di un numero para calcular el modulo" << std::endl;
	std::cin >> newnum;
	resultado = fmod(resultado, newnum); //Para hacer el módulo con variables float, donde la coma separa cada parametro.
	std::cout << "El modulo de esos dos numero es: " << resultado << std::endl;
}
