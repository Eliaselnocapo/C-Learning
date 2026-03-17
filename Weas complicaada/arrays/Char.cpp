#include <iostream>
#include <string>
using namespace std;


int vocales(string &frase,int vocale){
    for (int i=0; i<frase.length();i++){
        if (frase[i]== 'a'||frase[i]=='o'||frase[i]=='i'||frase[i]=='e'||frase[i]=='u'){
            vocale++;
        }
    }
    return vocale;
}

void Guion(string &frase){
    for (int i=0; i<frase.length();i++){
        if (frase[i]== ' '){
            frase[i]='-';
        }
    }
    cout<<frase<<endl;
}
int main(){
    string frase;
    cout << "Denos la frase";
    getline(cin,frase);

    int Num_vocales=vocales(frase,0);
    cout<< Num_vocales<<endl;
    Guion(frase);

    

}

/*int main(){
char C[5]={'o','p','t','o','\0'};
char CH[]="ola";
cout<<CH<<endl;

for(int i=0; i<5; i++){
    cout<<C[i]<<endl;
    
}

string name = "Elias";

name += " Ramirez";

cout << name<<endl;
cout<< name.length()<<endl;
cout<< name[0]<<endl;

}*/

