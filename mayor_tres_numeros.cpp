/*  1.1 Determinar el mayor de tres números*/

#include <iostream>
using namespace std;


//Function declaration
float mayor_tres_numeros(float num1, float num2, float num3);


int main(){

    float num1, num2, num3;
    cout << "Programa para determinar el mayor de tres numeros" << endl;

    cout << "Ingrese el primer numero: ";  cin >> num1;
    cout << "Ingrese el segundo numero: "; cin >> num2;
    cout << "Ingrese el tercer numero: ";  cin >> num3;


    if(num1 == num2 && num2 == num3){
        cout << "Todos los numeros son iguales.";
    } else {
        cout << "El mayor numero es: " << mayor_tres_numeros(num1, num2, num3);
    }


    return 0;
};




//Function definition
float mayor_tres_numeros(float num1, float num2, float num3){

    //En caso de que dos numeros sean iguales
    if(num1 == num2){
        if(num1 > num3){

            return num1;

        } else {

            return num3;
        }
    }

    if(num2 == num3){
        if(num2 > num1){

            return num2;

        } else {

            return num1;
        }
    }


    //En caso de que dos numeros no sean iguales
    if(num1 > num2){
        if(num1 > num3){

            return num1;

        } else {

            return num3;
        }
    }

    if(num2 > num3){
        if(num2 > num1){

            return num2;

        } else {

            return num1;
        }
    }
}
