#include <bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool mil = true;
        int m = 2;
        while (mil)
        {
            if (prime(m))
            {
                int x = n + m;
                if (!prime(x))
                {
                }
                cout << m << '\n';
                break;
            }
            m++;
        }
    }
}