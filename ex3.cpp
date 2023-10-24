#include<iostream>

using namespace std;


int main(){

/*-----------Methode1------------*/
/*int T[10],i,min,max;

cout <<"entrer 10 nombres entiers :";
for(i=0 ; i<10 ; i++){
    cin>>T[i];
}

min = T[0];
for(i=0 ; i<10 ; i++){
    if(T[i]<min){
        min = T[i];
    }
}
cout<<"Le plus petit nombre :"<<min<<endl;

max = T[0];
for(i=0 ; i<10 ; i++){
    if(T[i]>max){
        max = T[i];
    }
}
cout<<"Le plus grand nombre :"<<max<<endl;*/

/*------------Methode2-------------*/
    int T[10];
    int *P;
    P=T;

cout <<"entrer 10 nombres entiers :";
for(P=T ; P<T+10 ; P++){
    cin>>*P;
}

min = T;
for(P=T ; P<10+T ; P++){
    if(*P<min){
        min = *P;
    }
}
cout<<"Le plus petit nombre :"<<min<<endl;

max = T;
for(P=T ; P<10+T ; P++){
    if(*P>max){
        max = *P;
    }
}
cout<<"Le plus grand nombre :"<<max<<endl;


    return 0;
}
