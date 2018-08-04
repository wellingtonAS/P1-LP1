#include <stdio.h>
int main(){
	int cont=0, cont_aux=0;
	float weight=1, sum=0, sum_aux=0;
	while(cont<=7 && sum_aux<=560 && weight!=0){
			scanf("%f", &weight);
			sum_aux+=weight;
			if(cont<7 && sum_aux<=560 && weight!=0){
			sum+=weight;
			cont_aux++;
		}
		cont++;
	}
	printf("%d\n%.1f", cont_aux, sum);
	return 0;
}
