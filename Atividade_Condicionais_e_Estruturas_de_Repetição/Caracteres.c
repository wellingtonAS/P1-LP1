#include <stdio.h>

int main(){
    int qtd, i, stoped=1;
    char carac[100];
    while(stoped!=0){
        scanf("%d", &qtd);
        stoped=qtd;
        if(stoped!=0){
            for(i=0; i<=stoped; i++){
                scanf("%c", &carac[i]);
            }
            for(i=stoped; i>=0; i--){
                printf("%c", carac[i]);
            }
        }
    }
    return 0;
}
