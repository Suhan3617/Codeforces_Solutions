#include<bits/stdc++.h>
using namespace std;
#define int long long 
typedef long double ld;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL); 
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n , k , x;
        cin>>n>>k>>x;
        int min_sum=k*(k+1)/2;
        int total_sum=n*(n+1)/2;
        int max_sum=total_sum-((n-k)*(n-k+1)/2);
        if(x>=min_sum && x<=max_sum){
            cout<<"YES"<<'\n';
        }
        else{cout<<"NO"<<'\n';}
    }
}