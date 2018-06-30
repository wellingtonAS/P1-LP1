#include <iostream>
using namespace std;
int conjectura(int num){
    int half, cont=2, sun=0;
    half = num/2;
    while(cont<=half){
        if(num%cont==0){
            sun+=cont;
            num=num/cont;
        }
        else{
            cont+=1;
        }
    }
    if(sun==0){
        return num;
    }
    else{
        return sun;
    }
}
int main(){
    int x;
    do{
        cin>>x;
        if (x!=0){
            cout<<conjectura(x)<<endl;
        }
    }while(x!=0);
return 0;
}
