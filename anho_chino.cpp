/*13. Crear el pseudoc�digo para un programa que pida al usuario un n�mero de d�a y un n�mero de mes,
eval�e si la entrada es correcta y en caso de que as� sea calcule el d�a del a�o que es,
considerando un a�o no bisiesto.*/

#include <iostream>
using namespace std;

int main(){

    int a_nacim, a_mod;

    cout << "Programa para calcular el a�o Chino del nacimiento de una persona." << endl;
    cout << "Ingrese su a�o de nacimiento: "; cin >> a_nacim;

    a_mod = (a_nacim % 12);

    switch(a_mod){
		case 4:
			cout << "Nacio en el a�o de la rata";
        break;

		case 5:
			cout << "Nacio en el a�o del b�falo";
        break;

		case 6:
			cout << "Nacio en el a�o del tigre";
        break;

		case 7:
			cout << "Nacio en el a�o del conejo";
        break;

		case 8:
			cout << "Nacio en el a�o del drag�n";
        break;

		case 9:
			cout << "Nacio en el a�o de la serpiente";
        break;

		case 10:
			cout << "Nacio en el a�o del caballo";
        break;

		case 11:
			cout << "Nacio en el a�o de la cabra";
        break;

		case 0:
			cout << "Nacio en el a�o del mono";
        break;

		case 1:
			cout << "Nacio en el a�o del gallo";
        break;

		case 2:
			cout << "Nacio en el a�o del perro";
        break;

		case 3:
			cout << "Nacio en el a�o del cerdo";
        break;
    };
    return 0;
};

