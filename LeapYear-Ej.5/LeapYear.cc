/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Yeray Ruiz Modino alu0101477657@ull.edu.es
  * @date 16 de noviembre de 2022
  * @brief Este programa indica si un año que introduzcamos es bisiesto o no.
	* @bug There are no known bugs
  */

#include <iostream>
using namespace std;
int main() {

int anio;

cout << "Año: ";
cin >> anio;

if ((anio %4 == 0 and anio %100 != 0) or anio %400 == 0)                                              
cout << "Bisiesto" << endl;
else
cout << "No bisiesto" << endl;

}
