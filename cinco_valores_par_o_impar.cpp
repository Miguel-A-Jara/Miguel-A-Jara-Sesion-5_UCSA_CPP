#include <iostream>
#include <vector>
using namespace std;


int main(){
    //Definimos nuestros vectores
    std::vector< int > numeros;
    std::vector< int > pares;
    std::vector< int > impar;
    int x; //Variable de carga temporal

    cout << "Programa que lee 5 valores enteros y determina si son pares o impares" << endl;

    //Cargamos los numeros en nuestro vector de numeros
    for(int i = 0; i < 5; i++){
        cout << "\nIngrese un valor: ";
        cin >> x;
        numeros.push_back(x);
    }


    //Iteramos el vector para cargar sus valores en los vectores correspondientes
    for(int i = 0; i < 5; i++){
        if(numeros[i] % 2 == 0){

            pares.push_back(numeros[i]);
        } else {

            impar.push_back(numeros[i]);
        }
    }


    //Imprimimos los pares
    cout << "\nLos valores pares son: ";
    for(int i = 0; i < pares.size(); i++){
        cout << pares[i] << " ";
    }


    //Imprimimos los impares
    cout << "\nLos valores impares son: ";
    for(int i = 0; i < impar.size(); i++){
        cout << impar[i] << " ";
    }
}







