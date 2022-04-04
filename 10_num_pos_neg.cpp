#include <iostream>
#include <vector>
using namespace std;


int main(){
    //Definimos nuestros vectores
    std::vector< int > numeros;
    std::vector< int > positivos;
    std::vector< int > negativos;
    int x; //Variable de carga temporal

    cout << "Programa que lee 10 numeros y determina si son positivos o negativos." << endl;

    for(int i = 0; i < 10; i++){
        cout << "\nIngrese un valor: ";
        cin >> x;
        numeros.push_back(x);
    }


    for(int i:numeros){
        if(i > 0){

            positivos.push_back(i);
        } else {

            negativos.push_back(i);
        }
    }


    //Imprimimos los positivos
    cout << "\nLos valores positivos son: ";

    for(int i:positivos){
        cout << i << " ";
    }


    //Imprimimos los negativos
    cout << "\nLos valores negativos son: ";
    for(int i:negativos){
        cout << i << " ";
    }

    return 0;
}
