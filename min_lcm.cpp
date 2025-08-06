#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long double ld;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
bool isprime(int n){
    if(n<2){
        return false;
    }
    if(n==2 || n==3){
        return true;
    }
    if(n%2==0 || n%3==0){
        return false;
    }
    for(int i=5;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int spf(int n) {
    if (n % 2 == 0) return 2;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return i;
    }
    return n;  // n is prime
}
int32_t main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if(isprime(n)){
            cout<<"1"<<" "<<n-1<<'\n';
        }
        else{
            int lf=n/spf(n);
            cout<<lf<<" "<<n-lf<<'\n';
        }
    }
}
