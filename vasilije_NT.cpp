#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);    
const int MAX=1000000;
ll spf[MAX+1];
int divc[MAX+1];

int gcd(int a , int b){
    return b==0 ? a : gcd(b,a%b);
}

void calculate_spf(){
    for(int i=0;i<=MAX;i++){
        spf[i]=i;
    }
    for(ll i=2;i*i<=MAX;i++){
        if(spf[i]==i){
            for(int j=i*i;j<=MAX;j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }
}
void calculate_divisors(){
    divc[1]=1;
    for(int i=2;i<=MAX;i++){
        int x=i ; int ans=1;
        while(x>1){
            int fac=spf[x];
            int count=0;
            while(x%fac==0){
                x=x/fac;
                count++;
            }
            ans*=(count+1);
        }
        divc[i]=ans;
    }
}
int main(){
    fastio;
    calculate_spf();
    calculate_divisors();
    int t;
    cin>>t;
    while(t--){
        ll n , q ;
        cin>>n>>q;
        ll c=n;
        while(q--){
            ll p , x ;
            cin>>p>>x;
            if(p==1){
                n=n*x;
                bool found = false;
                for(ll k=n ; k<=2*n*n ; k+=n){
                    if(divc[k]==n && gcd(k/n , n)==1){
                        found=true;
                        break;
                    }
                }
                cout<< found ? "YES\n" : "NO\n";
            }
            else{
                n=c;
            }
        }
    }
    return 0;
}