#include <iostream>
using namespace std;

int main(){

    int dia, mes, dia_nro, dia_anho, i= 0;
    bool flag = false;

    cout <<  "Programa para evaluar el dia del año que se introduzca" << endl;

    while(flag == false){

        cout << "Introduzca el mes en numeros: "; cin >> mes;
        switch(mes){
            case 1:
                dia_nro = 31;
                i = 31;
            break;
            case 2:
                dia_nro = 28;
                i = i + 59;
            break;
            case 3:
                dia_nro = 31;
                i = i + 90;
            break;
            case 4:
                dia_nro = 30;
                i = i + 120;
            break;
            case 5:
                dia_nro = 31;
                i = i + 151;
            break;
            case 6:
                dia_nro = 30;
                i = i + 181;
            break;
            case 7:
                dia_nro = 31;
                i = i + 212;
            break;
            case 8:
                dia_nro = 31;
                i = i + 243;
            break;
            case 9:
                dia_nro = 30;
                i = i + 273;
            break;
            case 10:
                dia_nro = 31;
                i = i + 304;
            break;
            case 11:
                dia_nro = 30;
                i = i + 334;
            break;
            case 12:
                dia_nro = 31;
                i = i + 365;
            break;
        }

        cout << "Introduzca el dia en numero(s): "; cin >> dia;
        if(dia >= 1 && dia <= dia_nro){

			dia_anho = (i - (dia_nro - dia));
			flag = true;
        } else {

            cout << "Ingrese valores correctos." << endl;
        }
    };

    cout << "\n\t\tEl dia dentro del año introducido es: " << dia_anho;

    return 0;
};
