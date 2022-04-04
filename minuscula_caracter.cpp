#include <iostream>
using namespace std;

int main(){

    char letra;
    char letra_arreglo[] = {'a', 'e', 'i', 'o', 'u'};


    cout << "Programa para determinar si una vocal es minuscula" << endl;
    cout << "Digite un caracter: "; cin >> letra;


    for(int i = 0; i < sizeof(letra_arreglo); i++){
        if(letra == letra_arreglo[i]){

            cout << "La letra " << letra << " es minuscula.";
            break;
        }

        if(i == sizeof(letra_arreglo) - 1){

            cout << "La letra " << letra << " no es minuscula";
        }
    }

    return 0;
};
