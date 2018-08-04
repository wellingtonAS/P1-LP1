#include <stdio.h>
void inverse(int v[], int size){

    int i;

    for(i=size-1; i>=0; i--){

        if(i>0){
            printf("%d ", v[i]);
        }
        else{
            printf("%d\n", v[i]);
        }
    }
    return;
}
void displacement(int vAux[], int size){
    int i;
    for(i=1; i<size; i++){

        printf("%d ", vAux[i]);

        if(i==size-1){
            printf("%d\n", vAux[0]);
        }
    }
    return;
}
void sort(int V[], int size){

    int i, j, temporary;
        for(i=0; i<size; i++){
            for(j=0; j<size; j++){
                if(V[i]>V[j]){
                    temporary=V[i];
                    V[i]=V[j];
                    V[j]=temporary;
                }
            }
        }
        for(i=0; i<size; i++){
            if(i<size-1){
                printf("%d ", V[i]);
            }
            else{
                printf("%d\n", V[i]);
            }
        }
    return;
}
int main(){
    int h, amount, num1;
    scanf("%d", &amount);
    int vector[amount];
    if(amount==1){
        scanf("%d", &num1);
        printf("%d\n%d\n%d\n", num1, num1, num1);
    }
    else{
        for(h=0; h<amount; h++){
        scanf("%d", &vector[h]);
    }
    inverse(vector, amount);
    displacement(vector, amount);
    sort(vector, amount);
    }
    return 0;
}
