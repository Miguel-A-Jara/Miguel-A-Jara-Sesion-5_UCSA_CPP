#include <iostream>
#include <string>
using namespace std;


//Function declaration
string verif_vocal(char letra, char minusculas[], char mayusculas[]);


int main(){

    char letra;
    string letra_str;

    char minusculas[] = {'a', 'e', 'i', 'o', 'u'};
    char mayusculas[] = {'A', 'E', 'I', 'O', 'U'};


    cout << "Programa para determinar si un caracter es una vocal Mayuscula, minuscula o no es vocal." << endl;
    cout << "Digite un caracter: "; cin >> letra;
    letra_str += letra; //"Convertimos" nuestro char a string para imprimirlo luego.

    cout << "El caracter " <<  letra_str << verif_vocal(letra, minusculas, mayusculas);

    return 0;
};




//Function definition
string verif_vocal(char letra, char minusculas[], char mayusculas[]){

    //Verificamos si el char es minuscula
    for(int i = 0; i < sizeof(minusculas); i++){
        if(letra == minusculas[i]){

            return " es una vocal minuscula.";
        }
    }

    //Como segunda opcion, verificamos si es mayuscula
    for(int i = 0; i < sizeof(mayusculas); i++){
        if(letra == mayusculas[i]){

            return " es una vocal mayuscula.";
        }
    }

    //Si no es ninguna de las anteriores, no es una vocal.
    return " no es una vocal.";
}
