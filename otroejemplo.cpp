#include "iostream"

using namespace std;

int ejercicio(int x);

int main(){
    int x;
    cout<<"Bienvenido al programa que permite calcualr si tu numero es par o no"<<endl;
    cout<<"Ingreasa el numero que de desees"<<endl;
    cin>> x;
    if(ejercicio(x)==0){
        cout<<"El numero que ingreso es par"<<endl;
    }

    else{
        cout<<"El numero que ingreso es impar"<<endl;
    }


}

int ejercicio(int x){
    int numero;
    numero=x%2;

    return numero;
}