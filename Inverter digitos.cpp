#include <iostream>
using namespace std;
int digit(int n){
    int r, dg=1;
    while(n>=10){
        r=n/10;
        n=r;
        dg=dg*10;
    }
   return dg;
}
int reverse(int number){
    int aux, t, cont=0, vec[1000];
    aux=digit(number);
    do{
        t=number/aux;
        vec[cont]=t;
        number=number%aux;
        aux=aux/10;
        cont++;
    }while(aux>=10);
    vec[cont]=number;
    for(cont=cont; cont>=0; cont--){
        cout<<"["<<vec[cont]<<"]";
    }
    cout<<endl;
}
int main(){
    int num;
    do{
        cin>>num;
        if(num!=0){
            if(num>=10){
                reverse(num);
            }
            else{
                cout<<"["<<num<<"]"<<endl;
            }
        }
    }while(num!=0);
    return 0;
}
