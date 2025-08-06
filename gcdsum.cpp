#include<bits/stdc++.h>
using namespace std;
#define int long long 
typedef long double ld;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int maxx=1e18;
int sumdigits(int n){
    int sum=0;
    for(int i=n;i>0;i/=10){
        int r=i%10;
        sum+=r;
    }
    return sum;
}
int gcd(int a, int b){
    return b==0 ? a : gcd(b,a%b);
}
int valid_x(int n){
    while(gcd(n,sumdigits(n))==1){
        ++n;
    }
    return n ;
}
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<valid_x(n)<<'\n';
    }
}