#include <iostream>
using namespace std;
int main(){
    int n, i, t, e, d, tNormal=0, tExpressa=0, km=0, p, cn, c, ce, D, kmT=0;
    cin>>n;
    for(i=0; i<n; i++){
        cin>>t;
        cin>>e;
        cin>>d;
        if(e==0){
            tNormal+=t;
            if(d <= 100){
                km = 1;
            }
            else{
                km = d/100;
            }
        }
        else if(e==1){
            tExpressa+=t;
            if(d <= 250){
                km = 1;
            }
            else{
                km = d/250;
            }
        }
    if(kmT < km){
       kmT = km;
    }
    }
    if(tNormal % 10 == 0){
        cn = tNormal / 10;
    }
    else if(tNormal % 10 != 0){
        cn = (tNormal / 10) + 1;
    }
    if(tExpressa % 5 == 0){
        ce = tExpressa / 5;
    }
    else if(tExpressa % 5 != 0){
        ce = (tExpressa / 5) + 1;
    }
    c = cn + ce;
    p = (cn*500) + (ce * 1200);
    D = kmT;
    cout<<c<<" "<<p<<" "<<D<<endl;
    return 0;
}
