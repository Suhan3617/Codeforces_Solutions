#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int,int>
#define fi first 
#define se second 
#define pb push_back
#define mp make_pair
typedef long double ld;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
const int MAX=1000000;
const int mod = 1073741824;
int spf[MAX+1];
void calculatespf(){
    for(int i=0;i<=MAX;i++){
        spf[i]=i;
    }
    for(int i=2;i*i<=MAX;i++){
        if(spf[i]==i){
            for(int j=i*i ; j<=MAX ;j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }
}
int divisors(int N){
    int ans = 1;
    while(N != 1){
        int factor = spf[N];
        int cnt = 0;
        while(N %factor == 0){
            N /= factor;
            cnt++;
        }
        ans *= (cnt+1);
    }
    return ans;
}
void solve(){
    int a , b , c ;
    cin>>a>>b>>c;
    int sum=0;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            for(int k=1;k<=c;k++){
                int prdt=i*j*k;
                sum+=divisors(prdt);
                sum%=mod;
            }
        }
    }
    cout<<sum<<endl;
}
int32_t main(){
    fastio;
    calculatespf();
    int t=1;
    while(t--){
        solve();
    }
}