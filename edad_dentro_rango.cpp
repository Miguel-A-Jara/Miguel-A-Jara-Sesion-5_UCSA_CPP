/*7. Escriba un programa que solicite una edad (un entero)
e indique si la edad introducida esta en el rango 17-25*/

#include <iostream>
using namespace std;

int main(){

    int edad;

    cout << "Programa para verificar si la edad introducida esta dentro del rango 18-25." << endl;
    cout << "Ingrese su edad: "; cin >> edad;

    edad >= 18 && edad <= 25
        ? cout << "La edad introducida esta en el rango 18-25"
        : cout << "La edad introducida no esta en el rango 18-25";

    return 0;
};
