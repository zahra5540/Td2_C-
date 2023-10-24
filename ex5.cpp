#include<iostream>
using namespace std;






int main(){

int a = 7;
int &ref_a = a;
int *P_a = &a;


cout<<"la valeurs de a :"<<a<<endl;
cout<<"l'adresse de a :"<<&a<<endl;
cout<<"la refernce vers a :"<<ref_a<<endl;
cout<<"l'adresse de reference de a :"<<&ref_a<<endl;
cout<<"la valeur pointee :"<<*P_a<<endl;
cout<<"l'adresse de la valeur pointee :"<<P_a<<endl;













    return 0;
}