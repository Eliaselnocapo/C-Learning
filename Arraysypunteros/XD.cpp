#include <iostream>
#include <utility>
using namespace std;

int Verificaciones(){
    int n;
    do{
        cout << "Ingrese un numero mayor a 0"<<endl;
        cin >> n;
            if(n<=0){
                cout << "Error es menor a 0"<<endl;
            }
    }while(n<=0);
    return n;
}

void Recibir(int* arr, int tam){
    for(int i=0; i <tam;i++){
        cout << "Dame el elemento " << i << endl; 
        cin >> arr[i];
    }

cout << "El arreglo es "<< endl;

        for(int i=0; i <tam;i++){
            cout << arr[i]<<" ";
        }
cout<< endl;

}


int Posicion(int*arr, int tam,int &inicio,int &final){

}



int main(){
int Tamano;
int inicio=0;
Tamano=Verificaciones();
int final=Tamano-1;


int* Lista=new int[Tamano];
Recibir (Lista,Tamano);

delete[] Lista;
return 0;
}