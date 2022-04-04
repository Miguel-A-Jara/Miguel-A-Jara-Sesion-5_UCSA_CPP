/*13. Crear el pseudocódigo para un programa que pida al usuario un número de día y un número de mes,
evalúe si la entrada es correcta y en caso de que así sea calcule el día del año que es,
considerando un año no bisiesto.*/

#include <iostream>
using namespace std;

int main(){

    int a_nacim, a_mod;

    cout << "Programa para calcular el año Chino del nacimiento de una persona." << endl;
    cout << "Ingrese su año de nacimiento: "; cin >> a_nacim;

    a_mod = (a_nacim % 12);

    switch(a_mod){
		case 4:
			cout << "Nacio en el año de la rata";
        break;

		case 5:
			cout << "Nacio en el año del búfalo";
        break;

		case 6:
			cout << "Nacio en el año del tigre";
        break;

		case 7:
			cout << "Nacio en el año del conejo";
        break;

		case 8:
			cout << "Nacio en el año del dragón";
        break;

		case 9:
			cout << "Nacio en el año de la serpiente";
        break;

		case 10:
			cout << "Nacio en el año del caballo";
        break;

		case 11:
			cout << "Nacio en el año de la cabra";
        break;

		case 0:
			cout << "Nacio en el año del mono";
        break;

		case 1:
			cout << "Nacio en el año del gallo";
        break;

		case 2:
			cout << "Nacio en el año del perro";
        break;

		case 3:
			cout << "Nacio en el año del cerdo";
        break;
    };
    return 0;
};

