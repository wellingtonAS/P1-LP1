#include <stdio.h>
#include <ctype.h>
int main(){
    int age, sun=0, rest=0;
    char option[10];
    do{
        scanf("%d %s", &age, option);
        if(age<=2){
            sun+=270;
        }
        else{
            sun+=180;
        }
    }while(toupper(option[0]) != 'N');
    if(sun % 100 == 0){
        printf("%d\n%d", (sun/100), rest);
    }
    else{
        int total;
        total=(sun/100)+1;
        rest=(total*100)-sun;
        printf("%d\n%d", total, rest);
    }
    return 0;
}
