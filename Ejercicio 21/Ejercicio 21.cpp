//Ejercicio 21
//Alma Leticia Douglas Gonzales Guilbert

#include<iostream>
using namespace std;

int main() {
	int num, mayor;
	
	cout << "Numero 1: ";
	cin >> mayor;

	for (int i = 2; i <= 4; i++) {
		cout << "Numero " << i << ": ";
		cin >> num;

		if (num > mayor)
			mayor = num;
	}
	cout << "El mayor es: " << mayor;

	return 0;
}