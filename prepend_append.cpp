#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans=n , left=0 ,right = n-1;
        while(left<=right){
            if(s[left]!=s[right]){
                left++;
                right--;
                ans-=2;
            }
            else{break;}
        }
        cout<<ans<<'\n';
    }
}