#include <iostream>
#include <cmath>
#include <string>
using namespace std;


//Function declaration
string cubo_de_numero(int);
string numero_par_impar(int);

int main(){

    int menu_opcion, nbr;
    bool flag = true;



    while(flag){

        cout << "\n\n\t\tMenu prinicpal, seleccione una de las siguientes opciones:" << endl;
        cout << "\n\t1. Cubo de un numero.";
        cout << "\n\t2. Numero par o impar.";
        cout << "\n\t3. Salir." << endl;

        cin >> menu_opcion;

        switch(menu_opcion){
            case 1:

                cout << cubo_de_numero(nbr);
            break;
            case 2:

                cout << numero_par_impar(nbr);
            break;
            case 3:

                cout << "\n\t\t\tPrograma finalizado.";
                flag = false;
            break;
            default:
                system("cls");
            break;
        }
    }
    return 0;
};




//Function definition
string cubo_de_numero(int nbr){
    cout << "\nIngrese el numero a ser elevado al cubo: "; cin >> nbr;
    system("CLS"); //Limpiamos pantalla
    return "\n\t\t\tEl cubo del numero ingresado es: " + std::to_string(pow(nbr, 3));
};


string numero_par_impar(int nbr){

    cout << "Ingrese un numero: "; cin >> nbr;
    if(nbr % 2 == 0){

        system("CLS"); //Limpiamos pantalla
        return "\n\t\t\tEl numero ingresado es: positivo.";
    } else {

        system("CLS"); //Limpiamos pantalla
        return "\n\t\t\tEl numero ingresado es: negativo.";
    }
};

