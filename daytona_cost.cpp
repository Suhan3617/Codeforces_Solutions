#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long double ld;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

bool bin(vector<int>&a ,int  x ){
    sort(a.begin(),a.end());
    int l=0;
    int r=a.size()-1;
    int mid;
    while(l<=r){
        mid=l+(r-l)/2;
        if(a[mid]==x){
            return true;
        }
        else if(a[mid]>x){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return false;
}
void solve(){
    int n , k ;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool found=bin(a,k);
    if(found){
        cout<<"YES"<<endl;
    }
    else{cout<<"NO"<<endl;}

}
int32_t main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}