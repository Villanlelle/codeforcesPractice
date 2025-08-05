#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int m, n, num = 0;
    cin >> m >> n;
    if (m * n < 2)
    {
        num = 0;
    }
    else
    {
        num = (m * n) / 2;
    }
    cout << num << endl;
    return 0;
}