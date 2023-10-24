#include <iostream>
using namespace std;

class complexe{
    public:
    float rel , img;

    public:
    complexe(float x , float y) : rel(x) , img(y){}

    complexe() : rel(0) , img(0){}

    complexe(const complexe& C) : rel(C.rel) , img(C.img){}

    bool egalite(const complexe& C){
        if(rel == C.rel && img == C.img){
            return 1;
        }else{
            return 0;
        }
    }

    complexe addition(const complexe& C){
        return complexe (rel + C.rel , img + C.img);
    }

    complexe soustraction(const complexe& C){
        return complexe (rel - C.rel , img - C.img);
    }

    complexe multiplication(const complexe& C){
        float re , im;
        re = (rel * C.rel ) - (im * C.img);
        im = (rel * C.rel ) + (im * C.img);
        return complexe (re,im);
    }

};

int choix(){
    int choix;
    cout<<"Menu des operation :"<<endl;
    cout<<"1. Egalite"<<endl;
    cout<<"2. Soustraction" << std::endl;
    cout<<"3. Multiplication" << std::endl;
    cout<<"Choisissez une operation : ";
    cin>>choix;
    return choix;
}





int main(){

complexe cmp1(2 , 5) , cmp2(3 , 6);
complexe resultat;

switch(choix()){
    case 1 :
        if (cmp1.egalite(cmp2)) {
                cout<<"Les nombres complexes sont égaux."<<endl;
            } else {
                cout<<"Les nombres complexes ne sont pas egaux."<<endl;
            }
            break;
    case 2 :
        resultat = cmp1.addition(cmp2);
        cout<<"Resultat de l'addition : ("<<resultat.rel<<" , "<<resultat.img<<"i)"<<endl;
            break;

    case 3 :
        resultat = cmp1.soustraction(cmp2);
        cout<<"Resultat de la soustraction : ("<<resultat.rel<<" , "<<resultat.img <<"i)"<<endl;
            break;
    case 4 :
        resultat = cmp1.multiplication(cmp2);
        cout<<"Resultat de la multiplication : ("<<resultat.rel<< ", " << resultat.img <<"i)"<<endl;
            break;
    
    default : 
        cout<<"choix invalide"<<endl;

}










    return 0;
}