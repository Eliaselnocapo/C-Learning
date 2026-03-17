#include<iostream>

using namespace std;
void suma(long suma){
    int sumA=0;
    int sumS=1;
    for ( int i = 0; i <20; i++)
    {
        cout<<suma<<endl;
        suma=sumA+sumS;
        sumS=sumA;
        sumA=suma;
    }
    

}
int main(){
    suma(0);
}