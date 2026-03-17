#include <iostream>
#include <vector>

using namespace std;

void Lectura(int &A,int &B){
    cout<<"ingrese numero de Columnas"<<endl;
    cin >> A;
    cout<<"ingrese numero de Filas"<<endl;
    cin >> B;

}

void Escritura(int &A, int &B, vector<vector<int>> &matriz ){
    for(int i=0; i< B;i++){
        for(int j=0; j<A;j++){
            cout<<"Dame el dato: "<<i<<j<<endl;
            cin >> matriz[i][j];
        }
    }
}

void print(int &A, int &B, vector<vector<int>> &matriz ){
    cout<<"Matriz"<<endl;
    for(int i=0; i< B;i++){
        for(int j=0; j<A;j++){
            cout <<" "<< matriz[i][j]<<" ";
        }
        cout<<endl;
    }
}

void Suma(int &A, int &B,int &suma, vector<vector<int>> &matriz){
    cout<<"Suma"<<endl;
    for(int i=0; i< B;i++){
        for(int j=0; j<A;j++){
            suma=matriz[i][j]+suma;
        }
    }
    cout<<suma<<endl;
}
void Diagonal(int &A, int &B, vector<vector<int>> &matriz){
    cout<<"Diagonal"<<endl;
    for(int i=0; i< B;i++){
        for(int j=0; j<A;j++){
            if(i==j){
            cout <<" "<< matriz[i][j]<<" ";
            }
            else{
            cout <<" "<< " "<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    int A=0,B=0;
    int suma=0;
    Lectura(A,B);
    vector<vector<int>> matriz(B, vector<int>(A,0));
    Escritura(A,B,matriz);
    print(A,B,matriz);
    Suma(A,B,suma,matriz);
    Diagonal(A,B,matriz);
}
