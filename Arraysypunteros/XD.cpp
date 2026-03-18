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
        cout << "Dame el elemento " << i+1 << endl; 
        cin >> arr[i];
    }

cout << "El arreglo es "<< endl;

        for(int i=0; i <tam;i++){
            cout << arr[i]<<" ";
        }
cout<< endl;

}


int Posicion(int*arr,int inicio,int final){
int pivote = arr[final];
int i = inicio - 1;
for (int j = inicio; j< final; j++){
    if(arr[j]<= pivote){
        i++;
        swap(arr[i],arr[j]);
    }
}
swap(arr[i+1],arr[final]);
return(i+1);
}

void Quicksort(int*arr, int inicio,int final){
    if(inicio< final){
        int pi = Posicion(arr,inicio,final);
        Quicksort(arr,inicio,pi-1);
        Quicksort(arr,pi+1,final);
    }
}

void P_Final(int* arr, int tam){

    cout << "El arreglo ordenado es "<< endl;

            for(int i=0; i <tam;i++){
                cout << arr[i]<<" ";
            }
    cout<< endl;

}

int main(){
    int Tamano;
    int inicio=0;
        Tamano=Verificaciones();
    int final=Tamano-1;


    int* Lista=new int[Tamano];
        Recibir (Lista,Tamano);
        Quicksort(Lista,inicio,final);
        P_Final(Lista,Tamano);
    delete[] Lista;
return 0;
}