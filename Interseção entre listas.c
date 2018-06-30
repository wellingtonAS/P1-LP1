#include <stdio.h>
void bubbleSort(int v[], int size){
    int i, j, aux;
    for(i=size-1; i>=0; i--){
        for(j=0; j<i; j++){
            if(v[i]<v[j]){
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
    }

}
void equal(int v[], int size){
    int i;
    for(i=0; i<size; i++){
        if(v[i]!=v[i+1]){
            printf("%d\n", v[i]);
        }
    }
}
int main(){
    int i, j, vec1[20], vec2[20], vecAux[200], cont=0;
    for(i=0; i<20; i++){
        scanf("%d", &vec1[i]);
    }
    for(j=0; j<20; j++){
        scanf("%d", &vec2[j]);
    }
    for(i=0; i<20; i++){
        for(j=0; j<20; j++){
            if(vec1[i]==vec2[j]){
                vecAux[cont]=vec1[i];
                cont++;
            }
        }
    }
    if(cont==0){
        printf("VAZIO");
    }
    else{
        bubbleSort(vecAux, cont);
        equal(vecAux, cont);
    }
    return 0;
}
