#include<iostream>

using namespace std;





/*-------Tri à bulle---------*/

int main(){
    int T[10] , i , tmp , j;


    cout<<"veuillez remplir le tableau suivant :"<<endl;
    for(i=0 ; i<10 ; i++){
        cout<<"T["<<i+1<<"] = ";
        cin>>T[i];
        cout<<endl;
    }

    
    for(i=0 ; i<10 ; i++){
        for(j=0 ; j<10-i ; j++){
        if(T[j]>T[j+1]){
            tmp=T[j];
            T[j]=T[j+1];
            T[j+1]=tmp;
        }
        }
    }
    

    for(i=0 ; i<10 ; i++){
        cout<<"T["<<i+1<<"] = "<<T[i];
        cout<<endl;
    }














    return 0;
}