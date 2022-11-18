#include <iostream>
using namespace std;
int main() {

int i,a = 0,b = 1,c,n;

cout << "N: ";
cin >> n;

for (i = 1; i <= n; i++) {

cout << a << " "; 
c = a + b;
a = b;
b = c;

}

cout << endl;
 return 0;
}
