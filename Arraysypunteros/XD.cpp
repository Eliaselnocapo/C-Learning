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


int Posicion(int*arr, int tam){
    int inicio=0;
    int fin = tam-1;
    int pivote = arr[fin];
    int i=inicio-1;
    for (int j= inicio; j<fin; j++){
        if (arr[j]<= pivote){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i],arr[pivote]);
    return(i);
}



int main(){
int Tamano;

Tamano=Verificaciones();

int* Lista=new int[Tamano];
Recibir (Lista,Tamano);

delete[] Lista;
return 0;
}