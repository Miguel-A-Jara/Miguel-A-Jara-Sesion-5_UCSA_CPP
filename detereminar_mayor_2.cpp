/*1. Escriba un programa que lea dos números y determine
cual de ellos es el mayor*/

#include <iostream>
using namespace std;

int main(){

    float num1, num2, mayor;

    cout << "Programa para leer dos numeros y determinar cual de ellos es el mayor" << endl;

    cout << "Ingrese el primer numero: "; cin >> num1;
    mayor = num1;
    cout << "Ingrese el segundo numero: "; cin >> num2;

    num2 >= mayor ? mayor = num2 : mayor; //Preguntamos si num2 es mayor o igual a num1, si lo es asignamos su valor como el mayor

    cout << "El mayor numero es: " << mayor;



    return 0;
};
