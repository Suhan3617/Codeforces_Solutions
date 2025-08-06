#include <bits/stdc++.h>
using namespace std;
#define int long long

typedef long double ld;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int gcd(int a, int b){
    return b==0 ? a : gcd(b,a%b);
}
int32_t main(){
    fastio;
    int t;
    cin >> t;
    while (t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int flag = 0;;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(gcd(a[i],a[j])<=2){
                    flag = 1;
                }
            }
        }
        if(flag==0){
            cout<<"NO"<<'\n';
        }
        else{cout<<"YES"<<'\n';}
    }
}