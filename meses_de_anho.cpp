#include <iostream>
#include <string>
using namespace std;


//Function declaration
string verif_mes(int);


int main(){

    int mes = 0;

    cout << "Programa para el mes al que corresponde un input del usuario." << endl;
    cout << "Ingrese un numero correspondiente a uno de los 12 meses: "; cin >> mes;

    cout << verif_mes(mes);
    return 0;
};




//Function definition
string verif_mes(int mes){

    /* Definimos los keys & hases dentro de la funcion
    para saltarnos problemas del primer indice siendo un pointer en C++ */

    //Hashes del mes
    int meses_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    //Keys del mes
    string nombres_meses_array[] =
    {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio",
     "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};


    for(int i = 0; i < sizeof(meses_array); i++){
        if(mes == meses_array[i]){
            return "El mes " + std::to_string(mes) + " es: " + nombres_meses_array[i];
        }

        if(i == sizeof(meses_array) - 1){
            return "Numero fuera de rango";
        }
    }
};


