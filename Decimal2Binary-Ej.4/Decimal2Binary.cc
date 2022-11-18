/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Yeray Ruiz Modino alu0101477657@ull.edu.es
  * @date 16 de noviembre de 2022 
  * @brief Este programa convierte un número decimal que introduzcamos en binario.
  * @bug There are no known bugs
  */

#include <iostream>
using namespace std;

int main() {

int decimal;
short binario[8];

cout << "Decimal: " << endl;
cin >> decimal;

for (int i = 0; i < 8; i++) {
binario[i] = decimal % 2;
decimal /= 2;
}

cout << "Binario: " << endl;

for (int i = 7; i >= 0; i--) {
cout << binario[i];
}

cout << endl;

}
