#include <iostream>

using namespace std;

int main(){
    string user;
    //saquen al abuelo
    cout<<"Ingrese su nombre "<<endl;

    cin>>user;

    if (user != "" || user != " "){
        cout<<"Hola "<<user<<endl;
    }else{
        cout <<"HOLA MUNDO"<<endl;
    }

}
