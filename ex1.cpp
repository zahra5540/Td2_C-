#include<iostream>

using namespace std;

void fonc(){
    static int nombe_Appels = 0;
    nombe_Appels++;
    
        cout<<"appel numero "<<nombe_Appels<<endl;
    };

    void fonc1(){
    int nombe_Appels = 0;
    nombe_Appels++;
    
        cout<<"appel numero "<<nombe_Appels<<endl;
    };


int main(){

    fonc();
    fonc();
    fonc();
    fonc();

    cout<<endl;

    fonc1();
    fonc1();
    fonc1();
    fonc1();










    return 0;
}



