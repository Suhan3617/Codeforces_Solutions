#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        bool changed = true;
        while(changed){
            changed = false;
            for(int i=1;i<n-1;i++){
                if(v[i-1]<v[i] && v[i]>v[i+1]){
                    swap(v[i],v[i+1]);
                    changed=true;
                }
            }
        }
        if(is_sorted(v.begin(),v.end())){
            cout<<"YES"<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }
    }
}