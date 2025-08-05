#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long t;
    scanf("%lld", &t);
    long long c = 0, n, k;
    while (c < t)
    {
        long long ans;
        scanf("%lld%lld", &n, &k);
        if (k < n)
        {
            ans = k;
        }
        else
        {
            k -= (n - 1);
            long long p = k / (n - 1);
            long long q = k % (n - 1);
            if (q != 0)
            {
                ans = (n - 1) * (p + 1) + (p + 1) + q;
            }
            else
            {
                ans = (n - 1) * (p + 1) + (p + 1) - 1;
            }
        }
        printf("%lld\n", ans);
        c++;
    }
    return 0;
}