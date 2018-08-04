#include <stdio.h>
int search(int vector[], int amount){
    int i;
    if(amount==0){
        printf("-1\n");
    }
    else{
        for(i=0; i<amount; i++){
            printf("%d\n", vector[i]);
        }
    }
    return;
}
int bissextile(int initialYear, int finalYear){
    int search(int v[], int cont);
    int i, v[100], cont=0;
    for(i=initialYear; i<=finalYear; i++){
        if(i%4==0 && i%100!=0){
            v[cont]=i;
            cont++;
        }
        else if(i%400==0){
            v[cont]=i;
            cont++;
        }
    }
    return search(v,cont);
}
int main(){
    int initial, limited;
    scanf("%d%d", &initial, &limited);

    bissextile(initial, limited);
    return 0;
}
