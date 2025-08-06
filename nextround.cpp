#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    cout<<'\n';
    vector<int> sc;
    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        sc.push_back(d);
    }
    int count=0;
    int num=sc[k-1];
    for(int i=0 ; i<n ;i++){
        if(sc[i]>0){
            if(sc[i]>=num){
                count++;
            }
        }
    }
    cout<<count;
}