/*  Programa que simula un cajero automatico con saldo inicial de $1000 */
#include <iostream>
using namespace std;


//Function declaration
    void consula_saldo(int);
    int retirar_dinero(int, bool, int);
    void cerrar_menu();


int main(){

    //Inicializando las variables.
    int saldo = 1000;
    int menu = 0, retirar_dinero_menu = 0;
    bool flag = false, retirar_dinero_flag = false;


    //Pantalla de inicio
    cout << "Cooperativa San Ultranza Ltda." << endl;
    cout << "Cajero Automatico." << endl;
    cout << "Bienvenido! Usuario: Juan Carlos Cristobal" << endl;


    //Ingresamos al menu
    while(flag == false){
        //Menu para el usuario
        cout << "¿Que desea hacer?";
        cout << "\n1. Consultar Saldos.";
        cout << "\n2. Retirar Dinero.";
        cout << "\n3. Cerrar menu." << endl;
        cin >> menu;


        switch(menu){
        case 1:
            consula_saldo(saldo);
        break;
        case 2:
            saldo = retirar_dinero(saldo, retirar_dinero_flag, retirar_dinero_menu);
        break;
        case 3:
            cerrar_menu();
            flag = true; //Salimos del while, y cerramos el programa.
        break;
        }
    }

    return 0;
};


//Function definition
    void consula_saldo(int saldo){
        cout << "Su saldo actual es: $" << saldo << " dolares." << endl;
    }

    int retirar_dinero(int saldo, bool retirar_dinero_flag, int retirar_dinero_menu){


        //Nos quedamos en este bloque hasta que el usuario haga una interaccion exitosa
        while(retirar_dinero_flag == false){

            cout << "Seleccione la cantidad a retirar: " << endl;
            cout << "1. $50 - 2. $100 - 3. $500 - 4. $1000" << endl;
            cin >> retirar_dinero_menu;

            //Menu
            switch(retirar_dinero_menu){
                case 1:

                    if(saldo >= 50){
                        cout << "Retiro de dinero exitoso." << endl;
                        saldo = saldo - 50;
                        return saldo;

                    } else {
                        cout << "Saldos insuficientes." << endl;
                        retirar_dinero_flag = true;
                    }
                break;
                case 2:

                    if(saldo >= 100){
                        cout << "Retiro de dinero exitoso." << endl;
                        saldo = saldo - 100;
                        return saldo;

                    } else {
                        cout << "Saldos insuficientes." << endl;
                        retirar_dinero_flag = true;
                    }
                break;
                case 3:

                    if(saldo >= 500){
                        cout << "Retiro de dinero exitoso." << endl;
                        saldo = saldo - 500;
                        return saldo;

                    } else {
                        cout << "Saldos insuficientes." << endl;
                        retirar_dinero_flag = true;
                    }
                break;
                case 4:

                    if(saldo >= 1000){
                        cout << "Retiro de dinero exitoso." << endl;
                        saldo = saldo - 1000;
                        return saldo;

                    } else {
                        cout << "Saldos insuficientes." << endl;
                        retirar_dinero_flag = true;
                    }
                break;
                default:
                    cout << "Valor incorrecto!" << endl;
                break;
            }
        }
        //Retornamos el saldo por defecto, si es que el usuario no pudo realizar una transaccion exitosa.
        return saldo;
    }

    void cerrar_menu(){
        cout << "Programa finalizado";
    }






