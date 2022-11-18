/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Yeray Ruiz Modino alu0101477657@ull.edu.es
  * @date 16 de noviembre de 2022
  * @brief Este programa convierte cualquier número binario que introduzcamos en decimal. 
  * @bug There are no known bugs
  */

#include <iostream>
using namespace std;

int main () {

int binario, resultado, resto = 0;
int digito[8];

cout << "Binario: " << endl;
cin >> binario;

for (int i = 0; i < 8; i++) {
digito[i] = binario % 10;
binario /= 10;
}

for (int i = 7; i >= 0; i--) {
resultado = (resto * 2) + digito[i];
resto = resultado;
}

cout << endl << "Decimal: " << resultado << endl;

}
