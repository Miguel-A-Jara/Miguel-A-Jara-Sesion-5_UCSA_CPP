/*Escriba un programa que solicite una edad (un entero) e indique en la salida estándar
si la edad introducida es mayor de edad. Solicitar ingresar la
edad hasta que se ingrese un valor menor a 18.*/

#include <iostream>
using namespace std;

int main(){
    //Definimos la edad para entrar al ciclo "while".
    int edad = 18;
    cout << "Programa para ingresar una edad hasta que la misma sea menor a 18." << endl;

    while(edad >= 18){
        cout << "Ingrese su edad: "; cin >> edad;

        edad >= 18
        ? cout << "Mayor de edad. Ingrese su edad de nuevo." << endl
        : cout << "Menor de edad. Programa finalizado." << endl;
    }

    return 0;
};
