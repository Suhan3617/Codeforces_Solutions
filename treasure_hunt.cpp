#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x , y , a;
        cin>>x>>y>>a;
        float d=a+0.5;
        int count=1;
        bool B=false;
        bool K=false;
        while(d>=0){
            if(count%2==0){
                d-=y;
                K=true;
                B=false;
            }
            else{
                d-=x;
                B=true;
                K=false;
            }
            count++;
        }
        if(B==true){
            cout<<"NO"<<'\n';
        }
        else{
            cout<<"YES"<<'\n';
        }
    }
}