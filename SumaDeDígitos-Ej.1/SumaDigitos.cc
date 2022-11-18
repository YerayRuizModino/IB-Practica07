/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Yeray Ruiz Modino alu0101477657@ull.edu.es
  * @date 16 de noviembre de 2022.
  * @brief El programa calcula la suma de todos los dígitos de aquel numero que se introduzca.
  * @bug There are no known bugs
  */

#include <iostream>
using namespace std;
int main() {

int n;
int s = 0;

cin >> n;

while (n > 0) {
s = s + n %10;
n = n / 10;
}

cout << "Los dígitos suman: " << s << endl;

return 0;
}
