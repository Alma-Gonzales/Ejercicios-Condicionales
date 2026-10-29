//Ejercicio 21
//Alma Leticia Douglas Gonzales Guilbert


#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int minutos, seg, corredor = 1;
	double tiempo, velocidad;

	while (true) {
		cout << "Corredor: " << corredor << endl;
		cout << "Minutos: ";
		cin >> minutos;
		cout << "Segundos: ";
		cin >> seg;

		if (minutos == 0 && seg == 0)
			break;
		tiempo = minutos * 60 + seg;

		if (tiempo <= 0 || seg < 0 || seg >= 60) {
			cout << "Tiempo invalido" << endl;
			continue;
		}

		velocidad = 1500 / tiempo; 

		cout << "Tiempo: " << minutos << " min "
			<< seg << "seg" << endl;
		cout << fixed << setprecision(2);
		cout << "Velocidad: " << velocidad << "m/s" << endl;

		corredor++;
	}

	return 0;
}