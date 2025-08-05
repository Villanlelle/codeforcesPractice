#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        vector<vector<long long>> mmm(n, vector<long long>(m));
        long long da = 0, f = 0;
        for (long long i = 0; i < n; i++)
        {
            for (long long j = 0; j < m; j++)
            {
                cin >> mmm[i][j];
                if (mmm[i][j] > da)
                {
                    da = mmm[i][j];
                    f = 1;
                }
                else if (mmm[i][j] == da)
                {
                    f++;
                }
            }
        }
        vector<long long> hang(n), lie(m);
        for (long long i = 0; i < n; i++)
        {
            for (long long j = 0; j < m; j++)
            {
                if (mmm[i][j] == da)
                {
                    hang[i]++;
                    lie[j]++;
                }
            }
        }
        bool test = 0;
        for (long long i = 0; i < n; i++)
        {
            for (long long j = 0; j < m; j++)
            {
                if (hang[i] + lie[j] - (mmm[i][j] == da) == f)
                {
                    test = 1;
                }
            }
        }
        if (test == 1)
        {
            cout << da - 1 << endl;
        }
        else
        {
            cout << da << endl;
        }
    }
    return 0;
}