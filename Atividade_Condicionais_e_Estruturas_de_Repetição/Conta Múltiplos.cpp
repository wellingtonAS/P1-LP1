#include<iostream>
using namespace std;
int main(){
    int a, b, mmc=0, i, cont=0;
    cin>>a;
    cin>>b;
    mmc=a*b;
    for(i=2; i<50; i++){
        if(mmc>i){
            if(mmc%i==0){
                cont++;
                if(i==a || i==b){
                    if(b%a!=0){
                        cont--;
                    }
                }
            }
        }
        else{
            if(i%mmc==0){
                cont++;
                if(i==a || i==b){
                    if(b%a!=0){
                        cont--;
                    }
                }
            }
        }
    }
    cout<<cont;
    return 0;
}
