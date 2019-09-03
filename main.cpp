#include <iostream>
using namespace std;

bool frasePalindrome(string cad, int derecha, int izquierda){
    if(derecha==cad.length()-1 && izquierda==0 || derecha==izquierda){
        return true;
    }else{
        if(cad[derecha]==cad[izquierda]){
            frasePalindrome(cad,derecha+1, izquierda-1);
        }else{
            return false;
        }
    }
}

int main() {
    string cadena;
    cout<<"Ingrese la frase: ";
    getline(cin,cadena);

    cout<<"frase: "<<cadena<<endl;

    if(frasePalindrome(cadena, 0, cadena.length()-1)){
        cout<<"frase palindrome";
    }else{
        cout<<"frase no palindrome";
    }

    return 0;
}