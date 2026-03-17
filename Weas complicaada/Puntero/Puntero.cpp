#include<iostream>
using namespace std;
//Declarar 2 variibales y aputarles 
// cambiar su valor solo con puteros
//imprimir valores antes y despues
int main(){
    int A=10;
    int B=5;
    int* p1=&A;
    int*p2=&B;
    cout<<*p1<<endl;
    cout<<*p2<<endl;
    *p1=6;
    *p2=2;   
    cout<<A<<endl;
    cout<<B<<endl;

    string name;
    cout<<"dame algo"<<endl;
    getline(cin>>ws,name);

    string *p3= &name;

    cout<<*p3<<endl;

    int C[3]={1,2,3};
    int *p4 =  C;
    cout<<*(p4+1)<<endl;
}



