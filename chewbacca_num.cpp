#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    vector<long long> vec;
    while (n > 0)
    {
        long long digit = n % 10;
        n = n / 10;
        if (digit >= 5)
        {   
            int x=9-digit;
            vec.push_back(x);
        }
        else
        {
            vec.push_back(digit);
        }
    }
    reverse(vec.begin(), vec.end());
    if(vec[0]==0){
        vec[0]=9;
    }
    for (auto num : vec)
    {
        cout << num;
    }
}