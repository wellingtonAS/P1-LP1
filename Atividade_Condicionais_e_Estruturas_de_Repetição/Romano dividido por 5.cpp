#include <iostream>
using namespace std;
int main(){
    string romanos;
    int i=0, j=0, soma=0;
    cin>>romanos;
    while(romanos[i] != '\0'){
            //cout<<romanos[i]<<" | ";
        i++;
    }
    //cout<<"["<<i<<"]--";
    int vetor[i];
    while(j<i){
        if(romanos[j] == 'I'){
            vetor[j] = 1;
        }
        else if(romanos[j] == 'V'){
            vetor[j] = 5;
        }
        else if(romanos[j] == 'X'){
            vetor[j] = 10;
        }
        else if(romanos[j] == 'L'){
            vetor[j] = 50;
        }
        else if(romanos[j] == 'C'){
            vetor[j] = 100;
        }
        else if(romanos[j] == 'D'){
            vetor[j] = 500;
        }
        else if(romanos[j] == 'M'){
            vetor[j] = 1000;
        }
        j++;
    }
    /*for(j=0; j<i; j++){
        cout<<"["<<vetor[j]<<"] ";
    }*/
    j=0;
    while(j<i){
        if(vetor[j]<vetor[j+1]){
            soma+=vetor[j+1]-vetor[j];
        //cout<<"menor";
            j++;
        }
        else{
            if(j+2==i){
                soma+=vetor[j]+vetor[j+1];
                //cout<<soma;
                //cout<<"["<<j<<"]";
                j=i;
            }
            else{
                soma+=vetor[j];
            }
        }
        j++;
    }
    //cout<<soma;
    if(soma%5==0){
        cout<<"O numero e multiplo de 5!\n";
    }
    else{
        cout<<"O resto pela divisao por 5 do numero dado e igual a "<<(soma%5)<<"!";
    }
    //cout<<soma;
    return 0;
}
