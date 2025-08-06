#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> dis(n+1);
        int min_fuel=0;
        for(int i=1; i<=n;i++){
            dis[0]=0;
            cin>>dis[i];
            min_fuel= max(min_fuel,dis[i]-dis[i-1]);
        }
        min_fuel=max(min_fuel,2*(x-dis[n]));
        cout<<min_fuel<<'\n';
    }
}