/*Programa que lee 3 numeros y luego uno cuarto, y verifica si el ultimo ingresado
coincide con los demas*/

#include <iostream>
#include <string>
using namespace std;


//Function declaration
string compara_numero(int, int, int, int);


int main(){

    int num1, num2, num3, num4;

    cout << "Programa que lee 4 numeros y compara el ultimo con los demas" << endl;
    cout << "Ingrese el primer numero: ";  cin >> num1;
    cout << "Ingrese el segundo numero: "; cin >> num2;
    cout << "Ingrese el tercer numero: ";  cin >> num3;
    cout << "Ingrese el cuarto numero: ";  cin >> num4;

    cout << "\nEl numuero " << std::to_string(num4) <<  compara_numero(num1, num2, num3, num4);
    return 0;
};




//Function definition
string compara_numero(int num1, int num2, int num3, int num4){

    if(num4 == num1){
        return " coincide con el primer numero.";
    }

    if(num4 == num2){
        return " coincide con el segundo numero.";
    }

    if(num4 == num3){
        return " coincide con el tercer numero.";
    }

    return " no coincide con ningun numero";
}
