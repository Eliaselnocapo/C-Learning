#include <iostream>
#include <ctime>
using namespace std;

void multi(int& var){
    var=var*var;

}

void radomize(int& num){
    int semilla = num;
    int multi = 17;
    int incremento=45;
    int modulo=100;

    num =(multi*semilla+incremento)%modulo;

}

void inter(int& a, int& b){//ejercicio 1
    int temp=a;
    a=b;
    b=temp;

}
void signo(int& u){//ejercicoo2 
    if(u<0){
        u=u*-1;
    }else 
    {
        u;
    }
}

int multi(int& a, int& c){
    int resultado =0;
    resultado = a*c;
    return resultado;
}

int main(){

    int x=0;
    int& uwu=x;

    cout << uwu <<endl;


    int a=time(0);
    int b=2;
    int d=1;
    int c=-10;

    inter(d,b);
    cout<<d<<" "<<b<<endl;
    signo(c);
    cout<<c<<endl;
    radomize(a);
    cout <<a<<endl;
    multi(b);
    cout <<b << endl;
    

}