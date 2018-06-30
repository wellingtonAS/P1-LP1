#include<stdio.h>
void isTriangular(int num){
    int i=1, j=2, k=3, result;
    do{
        result=i*j*k;
        if (result==num){
            printf("%d * %d * %d = %d\nVerdadeiro\n", i, j, k, result);
        }
        if (result>num){
            printf("Falso");
        }
        i++;
        j++;
        k++;
    }while(result<num);
}
int main(){
    int n;
    scanf("%d", &n);
    if (n<6){
        printf("Falso");
    }
    else{
        isTriangular(n);
    }
return 0;
}
