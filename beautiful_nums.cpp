#include<bits/stdc++.h>
using namespace std;
#define int long long 
typedef long double ld;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
const int maxx=1000000;
int fac[maxx+1];
int rem = 1e9+7;

void prep(){
    fac[0]=1;
    for(int i=1;i<=maxx;i++){
        fac[i]=fac[i-1]*i;
        fac[i]%=rem;
    }
}

bool check(int n , int a , int b){
    while(n>0){
        int r=n%10;
        if(r!=a && r!=b){
            return 0;
        }
        n/=10;
    }
    return 1;
}

int bin_expo(int x , int n){
    int res=1;
    while(n!=0){
        if(n%2==1){
            res*=x;
            res%=rem;
        }
        n=n/2;
        x*=x;
        x%=rem;
    }
    return res;
}

int ncr(int n , int r){
    int temp1=fac[n];
    int temp2=fac[n-r]*fac[r];
    temp2%=rem;
    int temp3=bin_expo(temp2,rem-2);
    temp1*=temp3;
    temp1%=rem;
    return temp1;
}

int32_t main(){
    int a , b , n ;
    cin>>a>>b>>n;
    prep();
    int ans=0;
    for(int i=0;i<=n;i++){
        int sum=a*i+(n-i)*b;
        if(check(sum , a , b)==1){
            ans+=ncr(n,i);
            ans%=rem;
        }
    }
    cout<<ans;
}