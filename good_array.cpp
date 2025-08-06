#include <bits/stdc++.h>
using namespace std;
#define int long long

typedef long double ld;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
int32_t main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto& i : a)
        {
            cin >> i;
        }
        int count = 0;
        int i=0;
        for(int i=0;i<n-1;i++){
            if(a[i]%2==a[i+1]%2){
                a[i+1]%=2;
                count++;
            }
        }
        cout<<count<<'\n';
    }
}