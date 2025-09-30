*#include  <iostream>

void main() { 
short juez1Nota; 
bool juez2 = true; 
bool juez3 = false; 
bool juez4 = true; 

std::cout << "Escriba su nota del 1 al 10, juez 1." << std::endl; 
std::cin >> juez1Nota; 
 
std::cout << "Los jueces estan debatiendo..." << std::endl; 
std::cout << "Los jueces han llegado a la conclusion de que su nota es: " << juez1Nota * (juez2 + juez3 + juez4) << std::endl; //Recuerda que el bool es 1 y 0 y se puede operar. 
  
} 
