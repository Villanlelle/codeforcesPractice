#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long t;
    scanf("%ld", &t);
    while (t--)
    {
        long n, m, k;
        scanf("%ld%ld%ld", &n, &m, &k);
        long type = 0;
        std::vector<long> bb(n);
        std::vector<long> cc(m);
        for (int i = 0; i < n; i++)
        {
            scanf("%ld", &bb[i]);
        }
        for (int i = 0; i < m; i++)
        {
            scanf("%ld", &cc[i]);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (bb[i] + cc[j] <= k)
                {
                    type++;
                }
            }
        }
        printf("%ld\n", type);
    }
    return 0;
}