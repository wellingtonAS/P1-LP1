#include <iostream>
using namespace std;
int main(){
    int x, i, y, hp=100, ti=0, tf=0, win=1, p;
    cin>>x;
    int d[x], t[x];
    for(i=0; i<x; i++){
        cin>>d[i];
        cin>>t[i];
    }
    cin>>y;
    for(i=0; i<x; i++){
        hp -= d[i];
        if(i==0){
            ti=t[i];
        }
        else if(i!=0){
            tf = t[i] - ti;
            p = tf * y;
            ti = tf;
            hp+=p;
        }
        if(hp<=0){
            win = 0;
            break;
        }
    }
    if(win==1){
        cout<<"Inimigo Vivo"<<endl;
    }
    else{
        cout<<"Inimigo Morto"<<endl;
    }
    return 0;
}
