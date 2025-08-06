#include<bits/stdc++.h>
using namespace std;
int solve(int n){
    if(n<10){
        return n ;
    }
    if(n/10<10){
        return (9+n/10);
    }
    return 9+solve(n/10);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=0;
        cout<<solve(n)<<'\n';
    }
}