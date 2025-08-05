#include <bits/stdc++.h>
using namespace std;
int MAX(int a, int b, int c)
{
    int m = a + b * c;
    int n = a * (b + c);
    int o = a * b * c;
    int p = (a + b) * c;
    int q = a + b + c;
    int r = a * b + c;
    int max = m;
    if (n > max)
        max = n;
    if (o > max)
        max = o;
    if (p > max)
        max = p;
    if (q > max)
        max = q;
    if (r > max)
        max = r;
    return max;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int max = MAX(a, b, c);
    printf("%d", max);
    return 0;
}