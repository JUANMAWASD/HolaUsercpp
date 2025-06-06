#include <iostream>

using namespace std;

int main(){
    string user;
    int edad;
    
    cout<<"Ingrese su nombre "<<endl;

    cin>>user;

    cout<<"Ingrese su edad "<<endl;

    cin>>edad;
    
    if (user != "" || user != " "){
        cout<<"Hola "<<user<<endl;
    }else{
        cout <<"HOLA MUNDO"<<endl;
        cout<<"Tu tienes "<<edad<<" años"<<endl;
    }

}
