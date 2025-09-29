//Este ejericio ha sido generado con ChatGPT debido a que no lo entendía.

#include <iostream>   // Librería estándar para entrada y salida
using namespace std;  // Para no tener que escribir std:: delante de cout y cin

int main() {
    int num;  
    cout << "Introduce un numero de 6 cifras: ";  
    cin >> num;  
    // Pedimos al usuario un número entero de 6 cifras y lo guardamos en "num"

    // Ahora vamos sacando cada cifra con divisiones y el operador módulo (%)
    int unidades       = num % 10;           // Última cifra (resto de dividir entre 10)
    int decenas        = (num / 10) % 10;    // Penúltima cifra
    int centenas       = (num / 100) % 10;   // Tercera cifra desde la derecha
    int millar         = (num / 1000) % 10;  // Cuarta cifra
    int decenasMillar  = (num / 10000) % 10; // Quinta cifra
    int centenasMillar = (num / 100000) % 10;// Primera cifra (izquierda)

    // Mostramos los resultados en orden desde la cifra más grande hasta la menor
    cout << "Centenas de millar: " << centenasMillar << endl;
    cout << "Decenas de millar: " << decenasMillar << endl;
    cout << "Unidades de millar: " << millar << endl;
    cout << "Centenas: " << centenas << endl;
    cout << "Decenas: " << decenas << endl;
    cout << "Unidades: " << unidades << endl;

    return 0;  // Fin del programa
}
