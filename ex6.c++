#include <iostream>
using namespace std;

void incrementer(int &x){
    x++;
}

void permuter(int &x , int &y){
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
}



int main(){

int x , y;

cout<<"entrer une valeur pour x :"<<endl;
cin>>x;
cout<<"entrer une valeur pour y :"<<endl;
cin>>y;

incrementer(x);
cout<<"Apres l'incrementation x = : "<<x<<endl;
permuter(x,y);
cout<<"Apres la permutation x = "<<x<<" et y = "<<y<<endl;




return 0;
}





