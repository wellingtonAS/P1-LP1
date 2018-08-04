#include <stdio.h>
int main()
{
    int pII[45], pIII[30], iguais[30];
    int i, y, cont=0;
    for(i=0;i<45;i++)
    {
        scanf(" %d", &pII[i]);
    }
    for(y=0;y<30;y++)
    {
        scanf(" %d", &pIII[y]);
    }
    for(i=0;i<45;i++)
    {
        for (y=0;y<30;y++)
        {
            if(pII[i]==pIII[y])
            {
               iguais[cont]=pIII[y];
               cont++;
               break;
            }
        }
    }
    for(i=0; i<cont; i++)
    {
        printf("%d ", iguais[i]);
    }

    return 0;
}
