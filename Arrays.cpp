#include <iostream>
using namespace std;
void bubblesort(int vetor[], int tam){
    int i, j, aux;
    for(i=0; i<tam; i++){
        for(j=0; j<tam; j++){
            if(vetor[i] < vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
}
int main(){
    int size1, size2, k, m, i, j;
    cin>>size1;
    cin>>size2;
    int array1[size1], array2[size2];
    cin>>k;
    cin>>m;
    for(i=0; i<size1; i++){
        cin>>array1[i];
    }
    bubblesort(array1, size1);
    for(i=0; i<size2; i++){
        cin>>array2[i];
    }
    bubblesort(array2, size2);
    bool isBigger = true;
    for(j=size2-1; j>(size2-1-m); j--){
        for(i=0; i<k; i++){
            if(array2[j]<=array1[i]){
                isBigger = false;
            }
        }
    }
    if (isBigger==false){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
return 0;
}
