#include<bits/stdc++.h>
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
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            v[i]=i+1;
        }
        int count = 0;
        if(n==1){
            cout<<"1"<<'\n';
        }
        else{
            for(int i=0;i<n;i++){
                for(int j=i;j<n;j++){
                    int x=v[i];
                    int y=v[j];
                    int a=gcd(x,y);
                    int b=x/a;
                    int c=y/a;
                    if(a+b>c && b+c>a && a+c>b){
                        count++;
                    }
                }
            }
            cout<<count<<'\n';
        }
    }
}