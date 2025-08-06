#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
const int MAX=1000000;
int main(){
    vector<bool> isprime(MAX+1 , true);
    isprime[0]=isprime[1]=false;
    for(int i=2;i*i<=MAX;i++){
        if(isprime[i]){
            for(int j=i*i;j<=MAX;j+=i){
                isprime[j]=false;
            }
        }
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int k=2;k<=1e5;k++){
            if(!isprime[n+k]){
                cout<<k<<'\n';
                break;
            }
        }
    }
}