#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n, m, a, r, h, l;
    cin >> n >> m >> a;
    if (m * n <= a * a)
    {
        r = 1;
    }
    else
    {
        long long y1 = n % a, y2 = m % a;
        if (y1 == 0)
        {
            h = n / a;
        }
        else
        {
            h = (n + a - y1) / a;
        }
        if (y2 == 0)
        {
            l = m / a;
        }
        else
        {
            l = (m + a - y2) / a;
        }
        r = h * l;
    }
    cout << r << endl;
    return 0;
}