#include <bits/stdc++.h>

using namespace std;

int computeXor(vector<int> a){
    int ans=0;
    int n=a.size();
    for(int i=0;i<n;i++){
        long occ = (long)(i + 1) * (n - i);
        if(occ & 1) ans ^= a[i];
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        cout<<computeXor(v)<<'\n';
    }
}