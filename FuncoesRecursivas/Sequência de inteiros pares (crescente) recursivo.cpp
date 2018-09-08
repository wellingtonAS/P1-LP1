#include <iostream>
using namespace std;
void pairs(int N, int cont){
    cout<<cont<<endl;
    if(N-1>cont){
        pairs(N, cont+2);
    }
}
int main(){
    int n;
    cin>>n;
    pairs(n, 0);
    return 0;
}