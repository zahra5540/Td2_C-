#include<iostream>

using namespace std;

int fonc1(int x){
    float y ;
    y = x%2;
    return y;
};

int fonc2(int x){
    float y;
    y = x%3;
    return y;
};



int main(){
    int x;


cout<<"donnez un entier :"<<endl;
cin>>x;

if(fonc1(x)==0){
    cout<<"il est pair"<<endl;
}

if(fonc2(x)==0){
    cout<<"il est multiple de 3"<<endl;
}

if(fonc1(x)==0 && fonc2(x)==0){
    cout<<"il est divisible par 6";
}









    return 0;
}