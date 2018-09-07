#include <stdio.h>
#include <ctype.h>
int comp(char s[], char c){
    int i=0, j, flag=0;
    while(s[i] != '\0'){
        i++;
    }
    for(j=0; j<i; j++){
        if(toupper(s[j]) == toupper(c)){
            flag=1;
        }
    }
    return flag;
}
int main(){
    char names[10][10], carac;
    int i, aux;
    for(i=0; i<10; i++){
        scanf(" %s", names[i]);
    }
    scanf(" %c", &carac);
    for(i=0; i<10; i++){
        aux=comp(names[i], carac);
        if(aux==1){
            printf("%s\n", names[i]);
        }
    }
    return 0;
}
